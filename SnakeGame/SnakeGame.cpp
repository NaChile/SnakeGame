#include "SnakeGame.h"
#include <random>
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	SnakeGame::SnakeGame form;
	Application::Run(% form);

	srand(time(NULL));
}

struct Vector2 {
	int X, Y;
};

Vector2 SnakeDir;
Vector2 FruitPos;
Vector2 GameArea;


SnakeGame::SnakeGame::SnakeGame(void)
{
	InitializeComponent();

	GameArea.X = 500;
	GameArea.Y = 500;

	fLaunch = true;
	NewGame();
}

void SnakeGame::SnakeGame::GenerateFruit()
{
	

	FruitPos.X =25 + rand()%GameArea.X;
	FruitPos.Y =50 + rand()%GameArea.Y;

	int tempX = FruitPos.X % step;
	FruitPos.X -= tempX;
	int tempY = FruitPos.Y % step;
	FruitPos.Y -= tempY;
	
	for (int i = 0; i <= score; i++)
	{
		if (FruitPos.X == Snake[i]->Location.X && FruitPos.Y == Snake[i]->Location.Y)
		{
			GenerateFruit();
		}
	}

	



	fruit->Location = Point(FruitPos.X, FruitPos.Y);

	this->Controls->Add(fruit);

}
void SnakeGame::SnakeGame::Eat()
{
	if (FruitPos.X == Snake[0]->Location.X && FruitPos.Y == Snake[0]->Location.Y)
	{
		this->Controls->Remove(fruit);
		score++;
		Snake[score] = gcnew PictureBox();
		Snake[score]->Location=Point(Snake[score-1]->Location.X-SnakeDir.X*step, Snake[score - 1]->Location.Y - SnakeDir.Y * step) ;
		Snake[score]->BackColor = CurrentSnakeColor->BackColor;
		Snake[score]->Width = step;
		Snake[score]->Height = step;

		this->Controls->Add(Snake[score]);

		LabelScore->Text = "явер: " + Convert::ToString(score);

		GenerateFruit();
	}
}
void SnakeGame::SnakeGame::Movement()
{
	for (int i = score; i >= 1; i--)
	{
		Snake[i]->Location = Snake[i - 1]->Location;
	}
	Snake[0]->Location = Point(Snake[0]->Location.X + SnakeDir.X * step, Snake[0]->Location.Y + SnakeDir.Y * step);
}
void SnakeGame::SnakeGame::GameOver()
{
	death = true;
	play = false;
}
void SnakeGame::SnakeGame::NewGame()
{
	if (!fLaunch)
	{
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++)
			this->Controls->Remove(Snake[i]);

		score = 0;
	}
	else
		fLaunch = false;

	Snake = gcnew array<PictureBox^, 1 >(400);
	Snake[0] = gcnew PictureBox;
	Snake[0]->Location = Point(50, 100);
	Snake[0]->BackColor = CurrentSnakeColor->BackColor;
	Snake[0]->Width = step;
	Snake[0]->Height = step;

	Snake[0]->TabIndex = 10;

	this->Controls->Add(Snake[0]);


	fruit = gcnew PictureBox;
	fruit->BackColor = CurrentFruitColor->BackColor;
	fruit->Width = step;
	fruit->Height = step;
		GenerateFruit();

	
	timer->Interval = updateInterval;
	timer->Start();

	SnakeDir.X = 0;
	SnakeDir.Y = 0;

	play = true;
	death = false;

	LabelScore->Text = "явер: 0";

	GameOverTab->Visible = false;

}
void SnakeGame::SnakeGame::EatYourself()
{
	for (int i = 1; i <= score; i++)
	{
		if (Snake[0]->Location.X == Snake[i]->Location.X && Snake[0]->Location.Y == Snake[i]->Location.Y)
			GameOver();
	}
}
void SnakeGame::SnakeGame::CheckBorders()
{
	if (BorderCheck->Checked)
	{
		if (Snake[0]->Location.X <= LeftBorder->Location.X || Snake[0]->Location.X >= RightBorder->Location.X || Snake[0]->Location.Y <= UpperBorder->Location.Y || Snake[0]->Location.Y >= LowerBorder->Location.Y)
			GameOver();
	}
	else
	{
		if (Snake[0]->Location.X <= LeftBorder->Location.X)
			Snake[0]->Location = Point(500, Snake[0]->Location.Y);
		if (Snake[0]->Location.X >= RightBorder->Location.X)
			Snake[0]->Location = Point(25, Snake[0]->Location.Y);
		if (Snake[0]->Location.Y <= UpperBorder->Location.Y)
			Snake[0]->Location = Point(Snake[0]->Location.X, 525);
		if (Snake[0]->Location.Y >= LowerBorder->Location.Y)
			Snake[0]->Location = Point(Snake[0]->Location.X, 50);
	}
}

System::Void SnakeGame::SnakeGame::StartNewGame(System::Object^ sender, System::EventArgs^ e)
{
	NewGame();
}
System::Void SnakeGame::SnakeGame::PauseContinue(System::Object^ sender, System::EventArgs^ e)
{
	if (play)
	{
		play = false;
		Paused->Visible = true;
	}
	else
	{
		play = true;
		timer->Start();
		Paused->Visible = false;
	}
}
System::Void SnakeGame::SnakeGame::Exit(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}
System::Void SnakeGame::SnakeGame::Key_down(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	if (SnakeDir.X != -1 && e->KeyCode.ToString() == "Right") {
		SnakeDir.X = 1;
		SnakeDir.Y = 0;
		
	}
	else if(SnakeDir.X != 1 && e->KeyCode.ToString() == "Left") {
		SnakeDir.X = -1;
		SnakeDir.Y = 0;
	}
	else if(SnakeDir.Y != 1 && e->KeyCode.ToString() == "Up") {
		SnakeDir.X = 0;
		SnakeDir.Y = -1;
	}
	else if(SnakeDir.Y != -1 && e->KeyCode.ToString() == "Down") {
		SnakeDir.X = 0;
		SnakeDir.Y = 1;
	}
	else if (e->KeyCode.ToString() == "Pause") {
		if (play)
		{
			play = false;
			Paused->Visible = true;
		}
		else
		{
			play = true;
			timer->Start();
			Paused->Visible = false;
		}
	}
	
}



System::Void SnakeGame::SnakeGame::Update(System::Object^ sender, System::EventArgs^ e)
{
	if (!death && play)
	{
		Movement();

		Eat();
		EatYourself();
		CheckBorders();
	}
	else if (death && !play)
	{
		GameOverTab->Visible = true;
		timer->Stop();
	}
	else if (!death && !play)
	{
		timer->Stop();
	}
	
}



System::Void SnakeGame::SnakeGame::Settings(System::Object^ sender, System::EventArgs^ e)
{
	if (!SettingsBox->Visible)
	{
		play = false;
		SettingsBox->Enabled = true;
		SettingsBox->Visible = true;
	}
	else
	{
		play = true;
		timer->Start();

		SettingsBox->Enabled = false;
		SettingsBox->Visible = false;
	}
}

System::Void SnakeGame::SnakeGame::ChangeColor(System::Object^ sender, System::EventArgs^ e)
{
	colorDialog1->ShowDialog();
	CurrentSnakeColor->BackColor = colorDialog1->Color;
	for (int i = 0; i <= score; i++)
		Snake[i]->BackColor = CurrentSnakeColor->BackColor;
}

System::Void SnakeGame::SnakeGame::ChangeBackColor(System::Object^ sender, System::EventArgs^ e)
{
	colorDialog1->ShowDialog();
	CurrentBackColor->BackColor = colorDialog1->Color;
	BackColor = CurrentBackColor->BackColor;
}

System::Void SnakeGame::SnakeGame::ChangeFruitColor(System::Object^ sender, System::EventArgs^ e)
{
	colorDialog1->ShowDialog();
	CurrentFruitColor->BackColor = colorDialog1->Color;
	int TempPosx, TempPosy;
	TempPosx = FruitPos.X;
	TempPosy = FruitPos.Y;
	this->Controls->Remove(fruit);
	fruit = gcnew PictureBox;
	fruit->BackColor = CurrentFruitColor->BackColor;
	fruit->Width = step;
	fruit->Height = step;

	fruit->Location = Point(TempPosx, TempPosy);
	this->Controls->Add(fruit);
}

System::Void SnakeGame::SnakeGame::SpeedChange(System::Object^ sender, System::EventArgs^ e)
{
	Button^ Speed = safe_cast<Button^>(sender);
	updateInterval = Convert::ToInt32(Speed->Text);
	timer->Interval = updateInterval;
}


