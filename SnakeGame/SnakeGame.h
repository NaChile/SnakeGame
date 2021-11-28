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
	private: System::Windows::Forms::ToolStripMenuItem^ íàñòğîéêèToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ SettingsBox;
















	private: System::Windows::Forms::PictureBox^ CurrentSnakeColor;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ CurrentBackColor;









	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ CurrentFruitColor;









	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::PictureBox^ pictureBox9;
	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::Button^ HighSpeed;

	private: System::Windows::Forms::Button^ MedSpeed;

	private: System::Windows::Forms::Button^ LowSpeed;
	private: System::Windows::Forms::CheckBox^ BorderCheck;
private: System::Windows::Forms::ColorDialog^ colorDialog1;

















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
			this->íàñòğîéêèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->SettingsBox = (gcnew System::Windows::Forms::GroupBox());
			this->BorderCheck = (gcnew System::Windows::Forms::CheckBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->HighSpeed = (gcnew System::Windows::Forms::Button());
			this->MedSpeed = (gcnew System::Windows::Forms::Button());
			this->LowSpeed = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CurrentFruitColor = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->CurrentBackColor = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->CurrentSnakeColor = (gcnew System::Windows::Forms::PictureBox());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SettingsBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentFruitColor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentBackColor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentSnakeColor))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->íîâàÿÈãğàToolStripMenuItem,
					this->ïàóçàïğîäîëæèòüToolStripMenuItem, this->âûõîäToolStripMenuItem, this->íàñòğîéêèToolStripMenuItem
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
			// íàñòğîéêèToolStripMenuItem
			// 
			this->íàñòğîéêèToolStripMenuItem->Name = L"íàñòğîéêèToolStripMenuItem";
			this->íàñòğîéêèToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->íàñòğîéêèToolStripMenuItem->Text = L"Íàñòğîéêè";
			this->íàñòğîéêèToolStripMenuItem->Click += gcnew System::EventHandler(this, &SnakeGame::Settings);
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
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pictureBox6->Location = System::Drawing::Point(65, 6);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(35, 94);
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
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
			// SettingsBox
			// 
			this->SettingsBox->BackColor = System::Drawing::SystemColors::Window;
			this->SettingsBox->Controls->Add(this->BorderCheck);
			this->SettingsBox->Controls->Add(this->label5);
			this->SettingsBox->Controls->Add(this->pictureBox12);
			this->SettingsBox->Controls->Add(this->pictureBox10);
			this->SettingsBox->Controls->Add(this->pictureBox11);
			this->SettingsBox->Controls->Add(this->pictureBox8);
			this->SettingsBox->Controls->Add(this->pictureBox9);
			this->SettingsBox->Controls->Add(this->pictureBox7);
			this->SettingsBox->Controls->Add(this->HighSpeed);
			this->SettingsBox->Controls->Add(this->MedSpeed);
			this->SettingsBox->Controls->Add(this->LowSpeed);
			this->SettingsBox->Controls->Add(this->label4);
			this->SettingsBox->Controls->Add(this->CurrentFruitColor);
			this->SettingsBox->Controls->Add(this->label3);
			this->SettingsBox->Controls->Add(this->CurrentBackColor);
			this->SettingsBox->Controls->Add(this->label2);
			this->SettingsBox->Controls->Add(this->CurrentSnakeColor);
			this->SettingsBox->Enabled = false;
			this->SettingsBox->Location = System::Drawing::Point(97, 143);
			this->SettingsBox->Name = L"SettingsBox";
			this->SettingsBox->Size = System::Drawing::Size(345, 279);
			this->SettingsBox->TabIndex = 9;
			this->SettingsBox->TabStop = false;
			this->SettingsBox->Text = L"Íàñòğîéêè";
			this->SettingsBox->Visible = false;
			// 
			// BorderCheck
			// 
			this->BorderCheck->AutoSize = true;
			this->BorderCheck->Location = System::Drawing::Point(62, 247);
			this->BorderCheck->Name = L"BorderCheck";
			this->BorderCheck->Size = System::Drawing::Size(235, 17);
			this->BorderCheck->TabIndex = 41;
			this->BorderCheck->Text = L"Âûêëş÷èòü ïåğåìåùåíèå ÷åğåç ãğàíèöû";
			this->BorderCheck->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(125, 152);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Ñêîğîñòü çìåéêè";
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::DarkRed;
			this->pictureBox12->Enabled = false;
			this->pictureBox12->Location = System::Drawing::Point(274, 186);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(25, 25);
			this->pictureBox12->TabIndex = 39;
			this->pictureBox12->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Firebrick;
			this->pictureBox10->Enabled = false;
			this->pictureBox10->Location = System::Drawing::Point(262, 186);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(25, 25);
			this->pictureBox10->TabIndex = 37;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::IndianRed;
			this->pictureBox11->Enabled = false;
			this->pictureBox11->Location = System::Drawing::Point(251, 186);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(25, 25);
			this->pictureBox11->TabIndex = 38;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Green;
			this->pictureBox8->Enabled = false;
			this->pictureBox8->Location = System::Drawing::Point(168, 186);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(25, 25);
			this->pictureBox8->TabIndex = 35;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::ForestGreen;
			this->pictureBox9->Enabled = false;
			this->pictureBox9->Location = System::Drawing::Point(155, 186);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(25, 25);
			this->pictureBox9->TabIndex = 36;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->pictureBox7->Enabled = false;
			this->pictureBox7->Location = System::Drawing::Point(59, 186);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(25, 25);
			this->pictureBox7->TabIndex = 34;
			this->pictureBox7->TabStop = false;
			// 
			// HighSpeed
			// 
			this->HighSpeed->Location = System::Drawing::Point(227, 174);
			this->HighSpeed->Name = L"HighSpeed";
			this->HighSpeed->Size = System::Drawing::Size(96, 49);
			this->HighSpeed->TabIndex = 33;
			this->HighSpeed->Text = L"50";
			this->HighSpeed->UseVisualStyleBackColor = true;
			this->HighSpeed->Click += gcnew System::EventHandler(this, &SnakeGame::SpeedChange);
			// 
			// MedSpeed
			// 
			this->MedSpeed->Location = System::Drawing::Point(125, 174);
			this->MedSpeed->Name = L"MedSpeed";
			this->MedSpeed->Size = System::Drawing::Size(96, 49);
			this->MedSpeed->TabIndex = 32;
			this->MedSpeed->Text = L"100";
			this->MedSpeed->UseVisualStyleBackColor = true;
			this->MedSpeed->Click += gcnew System::EventHandler(this, &SnakeGame::SpeedChange);
			// 
			// LowSpeed
			// 
			this->LowSpeed->Location = System::Drawing::Point(23, 174);
			this->LowSpeed->Name = L"LowSpeed";
			this->LowSpeed->Size = System::Drawing::Size(96, 49);
			this->LowSpeed->TabIndex = 31;
			this->LowSpeed->Text = L"150";
			this->LowSpeed->UseVisualStyleBackColor = true;
			this->LowSpeed->Click += gcnew System::EventHandler(this, &SnakeGame::SpeedChange);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(234, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Öâåò ôğóêòîâ";
			// 
			// CurrentFruitColor
			// 
			this->CurrentFruitColor->BackColor = System::Drawing::Color::Red;
			this->CurrentFruitColor->Location = System::Drawing::Point(247, 71);
			this->CurrentFruitColor->Name = L"CurrentFruitColor";
			this->CurrentFruitColor->Size = System::Drawing::Size(49, 49);
			this->CurrentFruitColor->TabIndex = 29;
			this->CurrentFruitColor->TabStop = false;
			this->CurrentFruitColor->Click += gcnew System::EventHandler(this, &SnakeGame::ChangeFruitColor);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(141, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 20;
			this->label3->Text = L"Öâåò ôîíà";
			// 
			// CurrentBackColor
			// 
			this->CurrentBackColor->BackColor = System::Drawing::SystemColors::Control;
			this->CurrentBackColor->Location = System::Drawing::Point(147, 71);
			this->CurrentBackColor->Name = L"CurrentBackColor";
			this->CurrentBackColor->Size = System::Drawing::Size(49, 49);
			this->CurrentBackColor->TabIndex = 19;
			this->CurrentBackColor->TabStop = false;
			this->CurrentBackColor->Click += gcnew System::EventHandler(this, &SnakeGame::ChangeBackColor);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(38, 50);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Öâåò çìåéêè";
			// 
			// CurrentSnakeColor
			// 
			this->CurrentSnakeColor->BackColor = System::Drawing::Color::LightGreen;
			this->CurrentSnakeColor->Location = System::Drawing::Point(50, 71);
			this->CurrentSnakeColor->Name = L"CurrentSnakeColor";
			this->CurrentSnakeColor->Size = System::Drawing::Size(49, 49);
			this->CurrentSnakeColor->TabIndex = 9;
			this->CurrentSnakeColor->TabStop = false;
			this->CurrentSnakeColor->Click += gcnew System::EventHandler(this, &SnakeGame::ChangeColor);
			// 
			// SnakeGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(554, 611);
			this->Controls->Add(this->SettingsBox);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->SettingsBox->ResumeLayout(false);
			this->SettingsBox->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentFruitColor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentBackColor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->CurrentSnakeColor))->EndInit();
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
	


	private: System::Void ChangeColor(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Settings(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ChangeBackColor(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ChangeFruitColor(System::Object^ sender, System::EventArgs^ e);
	

	private: System::Void SpeedChange(System::Object^ sender, System::EventArgs^ e);

};
}
