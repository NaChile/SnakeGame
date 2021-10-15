#pragma once

namespace SnakeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ SnakeGame
	/// </summary>
	public ref class SnakeGame : public System::Windows::Forms::Form
	{
	public:
		SnakeGame(void);

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~SnakeGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ íîâàÿÈãğàToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàïğîäîëæèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;

	private: System::Windows::Forms::Label^ LabelScore;

	private: System::Windows::Forms::PictureBox^ LeftBorder;
	private: System::Windows::Forms::PictureBox^ RightBorder;
	private: System::Windows::Forms::PictureBox^ LowerBorder;
	private: System::Windows::Forms::PictureBox^ UpperBorder;

	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::GroupBox^ GameOverTab;


	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ Paused;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->íîâàÿÈãğàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàóçàïğîäîëæèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LabelScore = (gcnew System::Windows::Forms::Label());
			this->LeftBorder = (gcnew System::Windows::Forms::PictureBox());
			this->RightBorder = (gcnew System::Windows::Forms::PictureBox());
			this->LowerBorder = (gcnew System::Windows::Forms::PictureBox());
			this->UpperBorder = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->GameOverTab = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->Paused = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->BeginInit();
			this->GameOverTab->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->Paused->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->ïàóçàïğîäîëæèòüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(554, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// íîâàÿÈãğàToolStripMenuItem
			// 
			this->íîâàÿÈãğàToolStripMenuItem->Name = L"íîâàÿÈãğàToolStripMenuItem";
			this->íîâàÿÈãğàToolStripMenuItem->Size = System::Drawing::Size(81, 20);
			this->íîâàÿÈãğàToolStripMenuItem->Text = L"Íîâàÿ èãğà";
			this->íîâàÿÈãğàToolStripMenuItem->Click += gcnew System::EventHandler(this, &SnakeGame::StartNewGame);
			// 
			// ïàóçàïğîäîëæèòüToolStripMenuItem
			// 
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Name = L"ïàóçàïğîäîëæèòüToolStripMenuItem";
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Size = System::Drawing::Size(124, 20);
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Text = L"Ïàóçà/ïğîäîëæèòü";
			this->ïàóçàïğîäîëæèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &SnakeGame::PauseContinue);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			this->âûõîäToolStripMenuItem->Click += gcnew System::EventHandler(this, &SnakeGame::Exit);
			// 
			// LabelScore
			// 
			this->LabelScore->AutoSize = true;
			this->LabelScore->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LabelScore->Location = System::Drawing::Point(15, 570);
			this->LabelScore->Name = L"LabelScore";
			this->LabelScore->Size = System::Drawing::Size(100, 30);
			this->LabelScore->TabIndex = 0;
			this->LabelScore->Text = L"Ñ×ÅÒ: 0";
			// 
			// LeftBorder
			// 
			this->LeftBorder->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->LeftBorder->Location = System::Drawing::Point(15, 40);
			this->LeftBorder->Name = L"LeftBorder";
			this->LeftBorder->Size = System::Drawing::Size(10, 520);
			this->LeftBorder->TabIndex = 2;
			this->LeftBorder->TabStop = false;
			// 
			// RightBorder
			// 
			this->RightBorder->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->RightBorder->Location = System::Drawing::Point(525, 40);
			this->RightBorder->Name = L"RightBorder";
			this->RightBorder->Size = System::Drawing::Size(10, 520);
			this->RightBorder->TabIndex = 3;
			this->RightBorder->TabStop = false;
			// 
			// LowerBorder
			// 
			this->LowerBorder->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->LowerBorder->Location = System::Drawing::Point(15, 550);
			this->LowerBorder->Name = L"LowerBorder";
			this->LowerBorder->Size = System::Drawing::Size(520, 10);
			this->LowerBorder->TabIndex = 4;
			this->LowerBorder->TabStop = false;
			// 
			// UpperBorder
			// 
			this->UpperBorder->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->UpperBorder->Location = System::Drawing::Point(15, 40);
			this->UpperBorder->Name = L"UpperBorder";
			this->UpperBorder->Size = System::Drawing::Size(520, 10);
			this->UpperBorder->TabIndex = 5;
			this->UpperBorder->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &SnakeGame::Update);
			// 
			// GameOverTab
			// 
			this->GameOverTab->BackColor = System::Drawing::Color::White;
			this->GameOverTab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->GameOverTab->Controls->Add(this->label1);
			this->GameOverTab->Controls->Add(this->pictureBox3);
			this->GameOverTab->Controls->Add(this->pictureBox5);
			this->GameOverTab->Controls->Add(this->pictureBox4);
			this->GameOverTab->Controls->Add(this->pictureBox2);
			this->GameOverTab->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->GameOverTab->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 1.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->GameOverTab->ForeColor = System::Drawing::Color::Black;
			this->GameOverTab->Location = System::Drawing::Point(121, 152);
			this->GameOverTab->Name = L"GameOverTab";
			this->GameOverTab->Size = System::Drawing::Size(300, 167);
			this->GameOverTab->TabIndex = 7;
			this->GameOverTab->TabStop = false;
			this->GameOverTab->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(33, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 84);
			this->label1->TabIndex = 12;
			this->label1->Text = L"ÈÃĞÀ \r\nÎÊÎÍ×ÅÍÀ\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox3->Location = System::Drawing::Point(0, 162);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 5);
			this->pictureBox3->TabIndex = 9;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox5->Location = System::Drawing::Point(0, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(5, 298);
			this->pictureBox5->TabIndex = 11;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox4->Location = System::Drawing::Point(295, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(5, 298);
			this->pictureBox4->TabIndex = 10;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 5);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// Paused
			// 
			this->Paused->BackColor = System::Drawing::SystemColors::Menu;
			this->Paused->Controls->Add(this->pictureBox6);
			this->Paused->Controls->Add(this->pictureBox1);
			this->Paused->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Paused->Location = System::Drawing::Point(219, 389);
			this->Paused->Name = L"Paused";
			this->Paused->Size = System::Drawing::Size(100, 100);
			this->Paused->TabIndex = 8;
			this->Paused->TabStop = false;
			this->Paused->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox1->Location = System::Drawing::Point(2, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(35, 94);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox6->Location = System::Drawing::Point(65, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(35, 94);
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// SnakeGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 611);
			this->Controls->Add(this->Paused);
			this->Controls->Add(this->LabelScore);
			this->Controls->Add(this->GameOverTab);
			this->Controls->Add(this->UpperBorder);
			this->Controls->Add(this->LowerBorder);
			this->Controls->Add(this->RightBorder);
			this->Controls->Add(this->LeftBorder);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimumSize = System::Drawing::Size(570, 650);
			this->Name = L"SnakeGame";
			this->Text = L"SnakeGame";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &SnakeGame::Key_down);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LeftBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RightBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->LowerBorder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UpperBorder))->EndInit();
			this->GameOverTab->ResumeLayout(false);
			this->GameOverTab->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->Paused->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Äàííûå

	private: bool play;
	private: bool death;
	private: PictureBox^ fruit;
	private: array<PictureBox^>^ Snake;
	private: int step = 25;
	private: int updateInterval = 150;
	private: int score = 0;
	private: bool fLaunch;
	private: int tick = 0;
	
	//Ôóíêöèè èãğû
	private: void Eat();
	private: void GenerateFruit();
	private: void Movement();
	private: void GameOver();
	private: void NewGame();
	private: void EatYourself();
	private: void CheckBorders();


	
	//Êíîïêè
	private: System::Void StartNewGame(System::Object^ sender, System::EventArgs^ e);
	private: System::Void PauseContinue(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Exit(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Key_down(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	

	//Update timer
	
	private: System::Void Update(System::Object^ sender, System::EventArgs^ e);
	

};
}
