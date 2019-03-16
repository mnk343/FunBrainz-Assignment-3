#pragma once
#include "GlobalFuncs.h"
#include <stdio.h>  
#include <utility> 
#include<cmath>
#include<ctime>
#include<string>
#include<iostream>
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Cricket
	/// </summary>
	public ref class Cricket : public System::Windows::Forms::Form
	{
	public:
		Cricket(void)
		{
			InitializeComponent();
			stuID = 1;
			//
			//TODO: Add the constructor code here
			//
		}
		Cricket(Form^ obj1, int student)
		{
			InitializeComponent();
			stuID = student;
			caller = obj1;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Cricket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  TargetLabel;
	protected: 
	private: System::Windows::Forms::Label^  ScoreLabel;
	private: System::Windows::Forms::Label^  QuestionLabel;
	private: System::Windows::Forms::Label^  LevelLabel;
	private: System::Windows::Forms::Label^  Batsman2ScoreLabel;
	private: System::Windows::Forms::Label^  Batsman1ScoreLabel;
	private: System::Windows::Forms::Label^  OversLeftLabel;
	private: System::Windows::Forms::Label^  RunsNeededLabel;
	private: System::Windows::Forms::Panel^  SliderPanel;

	private: System::Windows::Forms::Timer^  SliderTimer;
	private: System::Windows::Forms::Timer^  QuestionTimer;
	private: System::Windows::Forms::Label^  TimeLeftLabel;
	private: System::Windows::Forms::Button^  SubmitButton;

	private: System::Windows::Forms::NumericUpDown^  AnsNnumericUpDown;
	private: System::Windows::Forms::Label^  rand1;
	private: System::Windows::Forms::Label^  rand2;
	private: System::Windows::Forms::Label^  rand5;
	private: System::Windows::Forms::Label^  rand4;
	private: System::Windows::Forms::Label^  rand3;
	private: System::Windows::Forms::Label^  rand6;
	private: System::Windows::Forms::Button^  StopButton;




	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Cricket::typeid));
			this->TargetLabel = (gcnew System::Windows::Forms::Label());
			this->ScoreLabel = (gcnew System::Windows::Forms::Label());
			this->QuestionLabel = (gcnew System::Windows::Forms::Label());
			this->LevelLabel = (gcnew System::Windows::Forms::Label());
			this->Batsman2ScoreLabel = (gcnew System::Windows::Forms::Label());
			this->Batsman1ScoreLabel = (gcnew System::Windows::Forms::Label());
			this->OversLeftLabel = (gcnew System::Windows::Forms::Label());
			this->RunsNeededLabel = (gcnew System::Windows::Forms::Label());
			this->SliderPanel = (gcnew System::Windows::Forms::Panel());
			this->SliderTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->QuestionTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->TimeLeftLabel = (gcnew System::Windows::Forms::Label());
			this->SubmitButton = (gcnew System::Windows::Forms::Button());
			this->AnsNnumericUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->rand1 = (gcnew System::Windows::Forms::Label());
			this->rand2 = (gcnew System::Windows::Forms::Label());
			this->rand5 = (gcnew System::Windows::Forms::Label());
			this->rand4 = (gcnew System::Windows::Forms::Label());
			this->rand3 = (gcnew System::Windows::Forms::Label());
			this->rand6 = (gcnew System::Windows::Forms::Label());
			this->StopButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->AnsNnumericUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// TargetLabel
			// 
			this->TargetLabel->AutoSize = true;
			this->TargetLabel->Location = System::Drawing::Point(35, 34);
			this->TargetLabel->Name = L"TargetLabel";
			this->TargetLabel->Size = System::Drawing::Size(50, 17);
			this->TargetLabel->TabIndex = 0;
			this->TargetLabel->Text = L"Target";
			// 
			// ScoreLabel
			// 
			this->ScoreLabel->AutoSize = true;
			this->ScoreLabel->Location = System::Drawing::Point(129, 34);
			this->ScoreLabel->Name = L"ScoreLabel";
			this->ScoreLabel->Size = System::Drawing::Size(45, 17);
			this->ScoreLabel->TabIndex = 1;
			this->ScoreLabel->Text = L"Score";
			// 
			// QuestionLabel
			// 
			this->QuestionLabel->AutoSize = true;
			this->QuestionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->QuestionLabel->Location = System::Drawing::Point(315, 120);
			this->QuestionLabel->Name = L"QuestionLabel";
			this->QuestionLabel->Size = System::Drawing::Size(130, 32);
			this->QuestionLabel->TabIndex = 3;
			this->QuestionLabel->Text = L"Question";
			// 
			// LevelLabel
			// 
			this->LevelLabel->AutoSize = true;
			this->LevelLabel->Location = System::Drawing::Point(811, 34);
			this->LevelLabel->Name = L"LevelLabel";
			this->LevelLabel->Size = System::Drawing::Size(71, 17);
			this->LevelLabel->TabIndex = 4;
			this->LevelLabel->Text = L"Level - 01";
			// 
			// Batsman2ScoreLabel
			// 
			this->Batsman2ScoreLabel->AutoSize = true;
			this->Batsman2ScoreLabel->Location = System::Drawing::Point(592, 34);
			this->Batsman2ScoreLabel->Name = L"Batsman2ScoreLabel";
			this->Batsman2ScoreLabel->Size = System::Drawing::Size(71, 17);
			this->Batsman2ScoreLabel->TabIndex = 5;
			this->Batsman2ScoreLabel->Text = L"Batsman2";
			// 
			// Batsman1ScoreLabel
			// 
			this->Batsman1ScoreLabel->AutoSize = true;
			this->Batsman1ScoreLabel->Location = System::Drawing::Point(472, 34);
			this->Batsman1ScoreLabel->Name = L"Batsman1ScoreLabel";
			this->Batsman1ScoreLabel->Size = System::Drawing::Size(71, 17);
			this->Batsman1ScoreLabel->TabIndex = 6;
			this->Batsman1ScoreLabel->Text = L"Batsman1";
			// 
			// OversLeftLabel
			// 
			this->OversLeftLabel->AutoSize = true;
			this->OversLeftLabel->Location = System::Drawing::Point(354, 34);
			this->OversLeftLabel->Name = L"OversLeftLabel";
			this->OversLeftLabel->Size = System::Drawing::Size(74, 17);
			this->OversLeftLabel->TabIndex = 7;
			this->OversLeftLabel->Text = L"Overs Left";
			// 
			// RunsNeededLabel
			// 
			this->RunsNeededLabel->AutoSize = true;
			this->RunsNeededLabel->Location = System::Drawing::Point(223, 34);
			this->RunsNeededLabel->Name = L"RunsNeededLabel";
			this->RunsNeededLabel->Size = System::Drawing::Size(91, 17);
			this->RunsNeededLabel->TabIndex = 8;
			this->RunsNeededLabel->Text = L"RunsNeeded";
			// 
			// SliderPanel
			// 
			this->SliderPanel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"SliderPanel.BackgroundImage")));
			this->SliderPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->SliderPanel->Location = System::Drawing::Point(74, 378);
			this->SliderPanel->Name = L"SliderPanel";
			this->SliderPanel->Size = System::Drawing::Size(42, 44);
			this->SliderPanel->TabIndex = 9;
			// 
			// SliderTimer
			// 
			this->SliderTimer->Interval = 1;
			this->SliderTimer->Tick += gcnew System::EventHandler(this, &Cricket::SliderTimer_Tick);
			// 
			// QuestionTimer
			// 
			this->QuestionTimer->Interval = 1000;
			this->QuestionTimer->Tick += gcnew System::EventHandler(this, &Cricket::QuestionTimer_Tick);
			// 
			// TimeLeftLabel
			// 
			this->TimeLeftLabel->AutoSize = true;
			this->TimeLeftLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->TimeLeftLabel->Location = System::Drawing::Point(521, 114);
			this->TimeLeftLabel->Name = L"TimeLeftLabel";
			this->TimeLeftLabel->Size = System::Drawing::Size(53, 38);
			this->TimeLeftLabel->TabIndex = 10;
			this->TimeLeftLabel->Text = L"30";
			// 
			// SubmitButton
			// 
			this->SubmitButton->Location = System::Drawing::Point(485, 199);
			this->SubmitButton->Name = L"SubmitButton";
			this->SubmitButton->Size = System::Drawing::Size(111, 33);
			this->SubmitButton->TabIndex = 12;
			this->SubmitButton->Text = L"Submit";
			this->SubmitButton->UseVisualStyleBackColor = true;
			this->SubmitButton->Click += gcnew System::EventHandler(this, &Cricket::SubmitButton_Click);
			// 
			// AnsNnumericUpDown
			// 
			this->AnsNnumericUpDown->Location = System::Drawing::Point(321, 200);
			this->AnsNnumericUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000000000, 0, 0, 0});
			this->AnsNnumericUpDown->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1000000000, 0, 0, System::Int32::MinValue});
			this->AnsNnumericUpDown->Name = L"AnsNnumericUpDown";
			this->AnsNnumericUpDown->Size = System::Drawing::Size(120, 22);
			this->AnsNnumericUpDown->TabIndex = 13;
			// 
			// rand1
			// 
			this->rand1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rand1->Location = System::Drawing::Point(95, 341);
			this->rand1->Name = L"rand1";
			this->rand1->Size = System::Drawing::Size(40, 17);
			this->rand1->TabIndex = 14;
			this->rand1->Text = L"label1";
			this->rand1->Click += gcnew System::EventHandler(this, &Cricket::rand1_Click);
			// 
			// rand2
			// 
			this->rand2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rand2->Location = System::Drawing::Point(134, 341);
			this->rand2->Name = L"rand2";
			this->rand2->Size = System::Drawing::Size(40, 17);
			this->rand2->TabIndex = 15;
			this->rand2->Text = L"label1";
			this->rand2->Click += gcnew System::EventHandler(this, &Cricket::rand2_Click);
			// 
			// rand5
			// 
			this->rand5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rand5->Location = System::Drawing::Point(251, 341);
			this->rand5->Name = L"rand5";
			this->rand5->Size = System::Drawing::Size(40, 17);
			this->rand5->TabIndex = 16;
			this->rand5->Text = L"label1";
			this->rand5->Click += gcnew System::EventHandler(this, &Cricket::rand5_Click);
			// 
			// rand4
			// 
			this->rand4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rand4->Location = System::Drawing::Point(211, 341);
			this->rand4->Name = L"rand4";
			this->rand4->Size = System::Drawing::Size(40, 17);
			this->rand4->TabIndex = 17;
			this->rand4->Text = L"label1";
			this->rand4->Click += gcnew System::EventHandler(this, &Cricket::rand4_Click);
			// 
			// rand3
			// 
			this->rand3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rand3->Location = System::Drawing::Point(171, 341);
			this->rand3->Name = L"rand3";
			this->rand3->Size = System::Drawing::Size(40, 17);
			this->rand3->TabIndex = 18;
			this->rand3->Text = L"label1";
			this->rand3->Click += gcnew System::EventHandler(this, &Cricket::rand3_Click);
			// 
			// rand6
			// 
			this->rand6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->rand6->Location = System::Drawing::Point(290, 341);
			this->rand6->Name = L"rand6";
			this->rand6->Size = System::Drawing::Size(40, 17);
			this->rand6->TabIndex = 19;
			this->rand6->Text = L"label1";
			this->rand6->Click += gcnew System::EventHandler(this, &Cricket::rand6_Click);
			// 
			// StopButton
			// 
			this->StopButton->Location = System::Drawing::Point(485, 367);
			this->StopButton->Name = L"StopButton";
			this->StopButton->Size = System::Drawing::Size(111, 37);
			this->StopButton->TabIndex = 20;
			this->StopButton->Text = L"Stop";
			this->StopButton->UseVisualStyleBackColor = true;
			this->StopButton->Click += gcnew System::EventHandler(this, &Cricket::StopButton_Click);
			// 
			// Cricket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(925, 513);
			this->Controls->Add(this->StopButton);
			this->Controls->Add(this->rand6);
			this->Controls->Add(this->rand3);
			this->Controls->Add(this->rand4);
			this->Controls->Add(this->rand5);
			this->Controls->Add(this->rand2);
			this->Controls->Add(this->rand1);
			this->Controls->Add(this->AnsNnumericUpDown);
			this->Controls->Add(this->SubmitButton);
			this->Controls->Add(this->TimeLeftLabel);
			this->Controls->Add(this->SliderPanel);
			this->Controls->Add(this->RunsNeededLabel);
			this->Controls->Add(this->OversLeftLabel);
			this->Controls->Add(this->Batsman1ScoreLabel);
			this->Controls->Add(this->Batsman2ScoreLabel);
			this->Controls->Add(this->LevelLabel);
			this->Controls->Add(this->QuestionLabel);
			this->Controls->Add(this->ScoreLabel);
			this->Controls->Add(this->TargetLabel);
			this->Name = L"Cricket";
			this->Text = L"Cricket";
			this->Load += gcnew System::EventHandler(this, &Cricket::Cricket_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->AnsNnumericUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Form ^ caller;
		int level;
		int correct;
		int incorrect;
		int timesplayed;
		int stuID;
		int xloc;
		int sliderFlag;

		int timeleft;
		
		int target;
		int score;
		int runsneeded;
		int oversleft;
		int ballsleft;
		int wicketslost;
		String ^ batsman1;
		int batsman1skill;
		String ^ batsman2;
		int batsman2skill;
		int batsman1score;
		int batsman2score;
		int currbatsman;
		int answer;
		int interval;
		int skill;

	private: System::Void Cricket_Load(System::Object^  sender, System::EventArgs^  e) {
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ Sql = "Select [Level] from Cricket where [StudentId] = " + stuID + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 level =  (int) command->ExecuteScalar();
					 LevelLabel->Text = "Level: "+level;
					 con->Close();

					 Sql = "Select [CorrectAnswers] from Cricket where [StudentId] = " + stuID + ";";
					 command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 correct =  (int) command->ExecuteScalar();
					 con->Close();

					 Sql = "Select [IncorrectAnswers] from Cricket where [StudentId] = " + stuID + ";";
					 command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 incorrect =  (int) command->ExecuteScalar();
					 con->Close();

					 Sql = "Select [TimesPlayed] from Cricket where [StudentId] = " + stuID + ";";
					 command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 timesplayed =  (int) command->ExecuteScalar();
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 StartGame();
			 }
	private: System::Void QuestionTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
				 timeleft--;
				TimeLeftLabel->Text = ""+timeleft;
				if(timeleft==0)
				{
					evalAnswer(answer-1);
				}
			 }
	private: Void StartGame()
	{
				timesplayed++;
				 score = 0;
				 ballsleft = 0;
				 wicketslost = 0;
				 batsman1score = 0;
				 batsman1 = "Rohit Sharma";
				 batsman1skill = 85;
				 batsman2skill = 75;
				 batsman2 = "Shikhar Dhawan";
				 batsman2score = 0;
				 oversleft = level;
				 wicketslost = 0;
				 currbatsman = 0;
				 target = level * 12;
				 runsneeded = target;
				 nextQuestion();
	}

			 private: Void nextQuestion()
			{
				SubmitButton->Enabled = true;
				AnsNnumericUpDown->Enabled = true;
				StopButton->Enabled = false;
				SliderPanel->Left -= xloc;
				xloc = 0;
				sliderFlag = 0;
				AnsNnumericUpDown->Value = 0;
				std::pair <std::string, int> ques = GlobalFuncs::generateQuestion(4, level);
				String ^ x = gcnew String(ques.first.c_str());
				 QuestionLabel->Text = x;
				 answer = ques.second;
				 timeleft = 30;
				 setLabels();
				 QuestionTimer->Start();
			}

			 private: Void setLabels()
			{
				TargetLabel->Text = "Target " + target;
				 ScoreLabel->Text = "Score " + score;
				 RunsNeededLabel->Text = "Runs Needed " + runsneeded;
				 OversLeftLabel->Text = "Overs Left " + oversleft + "." + ballsleft;
				 Batsman1ScoreLabel->Text = batsman1 + " " + batsman1score;
				 if (currbatsman == 0)
					 Batsman1ScoreLabel->Text += "*";

				 Batsman2ScoreLabel->Text = batsman2 + " " + batsman2score;
				 if (currbatsman == 1)
					 Batsman2ScoreLabel->Text += "*";
			}

private: System::Void SliderTimer_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if (sliderFlag ==0)
			 {
				 xloc+=3;
				 SliderPanel->Left+=3;
			 }
			 else
			 {
				 xloc-=3;
				 SliderPanel->Left-=3;
			 }

			 if (xloc == 0 || xloc == 180)
			 {
				 sliderFlag++;
				 sliderFlag %= 2;
			 }
		 }

		 private: Void evalAnswer(int ans)
		 {
			 SubmitButton->Enabled = false;
			 AnsNnumericUpDown->Enabled = false;
			 if(ans==answer)
			 {
				 correct++;
				 QuestionTimer->Stop();
				 array<System::String ^>^ arr = gcnew array<System::String ^>  { "Lbw", "6", "2", "2", "4","4", "Bold", "Lbw", "0", "1", "2", "Bold", "0", "2", "1", "4", "Bold", "Lbw", "0" ,"0" };
				 rand1->Width = 30;
				 rand2->Width = 30;
				 rand3->Width = 30;
				 rand4->Width = 30;
				 rand5->Width = 30;
				 rand6->Width = 30;
				 String^ gen; 
				 gen = arr[rand() % 20];
				 rand1->Text = gen;
				 gen = arr[rand() % 20];
				 rand2->Text = gen;
				 gen = arr[rand() % 20];
				 rand3->Text = gen;
				 gen = arr[rand() % 20];
				 rand4->Text = gen;
				 gen = arr[rand() % 20];
				 rand5->Text = gen;
				 gen = arr[rand() % 20];
				 rand6->Text = gen;

				 interval = 1;
				 
				 if(currbatsman==0)
					 skill = batsman1skill;
				 else
					 skill = batsman2skill;
				 skill = (skill*15)/100;
				 interval+=skill;
				 interval+=(timeleft/2);
				 SliderTimer->Interval = interval;
				 SliderTimer->Start();
				 StopButton->Enabled = true;
			 }
			 else
			 {
				 incorrect++;
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 ballsleft--;
				 if(ballsleft==0&&oversleft==0)
				 {
					 EndGame();
					 return;
				 }

				 if(ballsleft==0)
				 {
					 currbatsman++;
					 currbatsman%=2;
				 }
				 if(ballsleft==-1)
				 {
					 ballsleft = 5;
					 oversleft--;
				 }
				 nextQuestion();
			 }
		 }
private: System::Void SubmitButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 int ans = (int) AnsNnumericUpDown->Value;
			 evalAnswer(ans);
		 }
private: System::Void rand2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rand3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rand1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rand4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rand5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void rand6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void StopButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 SliderTimer->Stop();

			 int value = (xloc) / 30 ;
			 
			 String ^ output ;
			 
			 if (value < 1)
				 output = rand1->Text;
			 
			 else if (value < 2)
				 output = rand2->Text;

			 else if (value < 3)
				 output = rand3->Text;

			 else if (value < 4)
				 output = rand4->Text;

			 else if (value < 5)
				 output = rand5->Text;

			 else 
				 output = rand6->Text;

			 MessageBox::Show("You got " + output);
			 if(output== "Lbw"||output=="Bold")
			 {
				 wicketslost++;
				 if(wicketslost==10)
				 {
					 EndGame();
					 return;
				 }
				 String ^ name;
				 int skill;
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 int temp = wicketslost+2;
					 String ^ Sql = "Select [Name] from IndiaICCTeam where [PlayerPosition] = " + temp + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 name =  command->ExecuteScalar()->ToString();
					 con->Close();
					 Sql = "Select [BattingSkill] from IndiaICCTeam where [PlayerPosition] = " + temp + ";";
					 command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 skill = (int) command->ExecuteScalar();
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 if(currbatsman==0)
				 {
					 batsman1score = 0;
					 batsman1 = name;
					 batsman1skill = skill;
				 }
				 else
				 {
					 batsman2score = 0;
					 batsman2 = name;
					 batsman2skill = skill;
				 }
			 }
			 else
			 {
				 int runs = int::Parse(output);
				 runsneeded -= runs;
				 score += runs;
				 if(currbatsman==0)
				 {
					 batsman1score+=runs;
				 }
				 else
				 {
					 batsman2score+=runs;
				 }
				 if(runsneeded<=0)
				 {
					 EndGame();
					 return;
				 }
				 currbatsman+= runs;
				 currbatsman%=2;
			 }
			 ballsleft--;
			 if(ballsleft==0&&oversleft==0)
			 {
				EndGame();
				return;
			 }

			 if(ballsleft==0)
			 {
				 currbatsman++;
				 currbatsman%=2;
			 }
			 if(ballsleft==-1)
			 {
				 ballsleft = 5;
				 oversleft--;
			 }
			 nextQuestion();
		 }
		 private: Void EndGame()
		{
			try {
				OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
				String ^ Sql = "Update Cricket Set [TimesPlayed] = " + timesplayed+ " where [StudentId] = " + stuID + ";";
				OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				con->Open();
				command->ExecuteNonQuery();
				con->Close();

				Sql = "Update Cricket Set [CorrectAnswers] = " + correct+ " where [StudentId] = " + stuID + ";";
				command = gcnew OleDb::OleDbCommand(Sql, con);
				con->Open();
				command->ExecuteNonQuery();
				con->Close();

				Sql = "Update Cricket Set [IncorrectAnswers] = " + incorrect+ " where [StudentId] = " + stuID + ";";
				command = gcnew OleDb::OleDbCommand(Sql, con);
				con->Open();
				command->ExecuteNonQuery();
				con->Close();
			}
			 catch (Exception ^ ex) {
				MessageBox::Show(ex->Message);
			}

			if(runsneeded<=0)
			{
				 int y = 10-wicketslost;
				 MessageBox::Show("You won by "+y+ " wickets!!");
				 level++;
				 try {
					OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					String ^ Sql = "Update Cricket Set [Level] = " + level+ " where [StudentId] = " + stuID + ";";
					OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					con->Open();
					command->ExecuteNonQuery();
					con->Close();
				 }
				 catch (Exception ^ ex) {
					MessageBox::Show(ex->Message);
				 }
			}
			else
			{
				if(runsneeded==1)
				{
					 MessageBox::Show("The match was a tie!");
				 }
				 else
				 {
					MessageBox::Show("You lost by "+runsneeded+ " runs!!");
				 }
			}
			this->Hide();
			caller->Show();
			return;
		}
};
}
