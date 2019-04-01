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
	/// Summary for cloudgame
	/// </summary>
	public ref class cloudgame : public System::Windows::Forms::Form
	{
	public:
		cloudgame(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		cloudgame(int cat)							//constructor to take information which category is chosen 
		{										
			category = cat;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~cloudgame()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 




	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;

	private: System::Windows::Forms::Label^  label9;






	private: System::Windows::Forms::TextBox^  textBox1;












	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;



	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  Question;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(cloudgame::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Question = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->panel8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &cloudgame::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 2;
			this->timer2->Tick += gcnew System::EventHandler(this, &cloudgame::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Enabled = true;
			this->timer3->Interval = 4;
			this->timer3->Tick += gcnew System::EventHandler(this, &cloudgame::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Enabled = true;
			this->timer4->Interval = 5;
			this->timer4->Tick += gcnew System::EventHandler(this, &cloudgame::timer4_Tick);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(393, 30);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(99, 37);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Score";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 17.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(526, 28);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(127, 43);
			this->textBox1->TabIndex = 5;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::PowderBlue;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(861, 30);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(119, 47);
			this->button5->TabIndex = 18;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &cloudgame::button5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(27, 16);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(161, 95);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &cloudgame::pictureBox1_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::Transparent;
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->pictureBox1);
			this->panel5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel5->Location = System::Drawing::Point(140, 98);
			this->panel5->Margin = System::Windows::Forms::Padding(4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(215, 123);
			this->panel5->TabIndex = 11;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(72, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(65, 22);
			this->label1->TabIndex = 20;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &cloudgame::label1_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Transparent;
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->pictureBox2);
			this->panel6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel6->Location = System::Drawing::Point(237, 229);
			this->panel6->Margin = System::Windows::Forms::Padding(4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(217, 123);
			this->panel6->TabIndex = 21;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(73, 50);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 22);
			this->label2->TabIndex = 20;
			this->label2->Text = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &cloudgame::label2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(27, 16);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(161, 95);
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &cloudgame::pictureBox2_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Transparent;
			this->panel7->Controls->Add(this->label3);
			this->panel7->Controls->Add(this->pictureBox3);
			this->panel7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel7->Location = System::Drawing::Point(316, 375);
			this->panel7->Margin = System::Windows::Forms::Padding(4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(211, 123);
			this->panel7->TabIndex = 21;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(80, 50);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(65, 22);
			this->label3->TabIndex = 20;
			this->label3->Text = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &cloudgame::label3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(27, 16);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(161, 95);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &cloudgame::pictureBox3_Click);
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Transparent;
			this->panel8->Controls->Add(this->label4);
			this->panel8->Controls->Add(this->pictureBox4);
			this->panel8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->panel8->Location = System::Drawing::Point(205, 527);
			this->panel8->Margin = System::Windows::Forms::Padding(4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(216, 123);
			this->panel8->TabIndex = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(67, 50);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 22);
			this->label4->TabIndex = 20;
			this->label4->Text = L"label4";
			this->label4->Click += gcnew System::EventHandler(this, &cloudgame::label4_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(27, 16);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(161, 95);
			this->pictureBox4->TabIndex = 19;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &cloudgame::pictureBox4_Click);
			// 
			// Question
			// 
			this->Question->AutoSize = true;
			this->Question->BackColor = System::Drawing::Color::Transparent;
			this->Question->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Question->Location = System::Drawing::Point(133, 30);
			this->Question->Name = L"Question";
			this->Question->Size = System::Drawing::Size(105, 37);
			this->Question->TabIndex = 1;
			this->Question->Text = L"label1";
			// 
			// cloudgame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1006, 713);
			this->ControlBox = false;
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->Question);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1024, 760);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(1024, 760);
			this->Name = L"cloudgame";
			this->Text = L"cloudgame";
			this->Load += gcnew System::EventHandler(this, &cloudgame::cloudgame_Load);
			this->Click += gcnew System::EventHandler(this, &cloudgame::pictureBox4_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	int xloc,xloc1,xloc2,xloc3;
	int category;
	int answer;
	int sliderFlag,sliderFlag1,sliderFlag2,sliderFlag3;
	int timesplayed;
	int score;
	int level;

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {   //to make panel1 in motion
			 if (sliderFlag ==0)   
			 {
				 xloc++;
				 panel5->Left++;
				 
			 }
			 else
			 {
				 xloc--;
				 panel5->Left--;
				 
			 }

			 if (xloc == 0 || xloc ==300)
			 {
				 sliderFlag++;
				 sliderFlag %= 2;
			 }
		 }
		 
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {			 //to make panel2 in motion
			 if (sliderFlag1 ==0)
			 {
				 xloc1+=3;
				 panel6->Left+=3;
				 
			 }
			 else
			 {
				 xloc1-=3;
				 panel6->Left-=3;
				 
			 }

			 if (xloc1 == 0 || xloc1 == 300)
			 {
				 sliderFlag1++;
				 sliderFlag1 %= 2;
			 }
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {			 //to make panel3 in motion
			if (sliderFlag2 ==0)
			 {
				 xloc2+=4;
				 panel7->Left+=2;
				 
			 }
			 else
			 {
				 xloc2-=4;
				 panel7->Left-=2;
				
			 }

			 if (xloc2 == 0 || xloc2 == 360)
			 {
				 sliderFlag2++;
				 sliderFlag2 %= 2;
			 }
		 }
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {			 //to make panel4 in motion
	   	    if (sliderFlag3 ==0)
			 {
				 xloc3+=2;
				 panel8->Left+=4;
				 
			 }
			 else
			 {
				 xloc3-=2;
				 panel8->Left-=4;
				
			 }

			 if (xloc3 == 0 || xloc3 == 220)
			 {
				 sliderFlag3++;
				 sliderFlag3 %= 2;
			 }
		 }			   

private: System::Void cloudgame_Load(System::Object^  sender, System::EventArgs^  e) {
			 textBox1->Enabled = false;
			 StartGame();
    }
private: Void StartGame()
	{
				 timesplayed++;
				 score = 0;
				 //to change the level according to child's score.
				 if(score <=20)
				 {
					 level = 1;
				 }
				 else
				 {
					 if(score >20 && score <=40)
					 {
						 level = 2;
					 }
					 else
					 {
						 if(score >40 && score <=60)
						 {
							 level =3;
						 }
						 else
						 {
							 if(score >60 && score <=80)
							 {
								 level =4;
							 }
							 else
							 {
								 if(score >80 &&score <=100)
								 {
									 level =5;
								 }
								 else
								 {
									 if(score >100 && score <=120)
									 {
										 level =6;
									 }
									 else
									 {
										 if(score >120 && score <=140)
										 {
											 level =7;
										 }
										 else
										 {
											 if(score >140 &&score <=160)
											 {
												 level =8;
											 }
											 else
											 {
												 if(score >160 && score <=180)
												 {
													 level =9;
												 }
												 else
												 {
													 if(score >180)
													 {
														 level =10;
													 }
												 }
											 }
										 }
									 }
								 }
							 }
						 }
					 }
				}
				 std::pair <std::string, int> ques = GlobalFuncs::generateQuestion(category, level);	//Global Function
				 String ^ x = gcnew String(ques.first.c_str());
				 answer = ques.second;														//Answer of the generate Question
				 Question->Text = x;
				 int num=rand()%4;				//to choose any one of the panel to contain correct answer
				 if(num==0)					
				 {
					 label1->Text = (ques.second)+"";			
					 label2->Text = "" + (ques.second+3);
					 label3->Text = "" + (ques.second-4);
					 label4->Text = "" + (ques.second+6);
					 
				 }else{
				 if(num==1)
				 {
					 label2->Text = (ques.second)+"";					 
					 label1->Text = "" + (ques.second+5);
					 label3->Text = "" + (ques.second-9);
					 label4->Text = "" + (ques.second+2);
				 }
				 
				 else{
				 if(num==2)
				 {
					 label3->Text = (ques.second)+"";
					 label2->Text = "" + (ques.second-5);
					 label1->Text = "" + (ques.second+8);
					 label4->Text = "" + (ques.second+13);
				 }
				 
				 else
				 {
				 if(num==3)
				 {
					 label4->Text = (ques.second)+"";
					 label2->Text = "" + (ques.second-13);
					 label3->Text = "" + (ques.second-3);
					 label1->Text = "" + (ques.second+1);

				 }
				 }
				 }
				 }
				 
	}

private: Void nextQuestion()
			{
				if(score <=20)
				 {
					 level = 1;
				 }
				 else
				 {
					 if(score >20 && score <=40)
					 {
						 level = 2;
					 }
					 else
					 {
						 if(score >40 && score <=60)
						 {
							 level =3;
						 }
						 else
						 {
							 if(score >60 && score <=80)
							 {
								 level =4;
							 }
							 else
							 {
								 if(score >80 &&score <=100)
								 {
									 level =5;
								 }
								 else
								 {
									 if(score >100 && score <=120)
									 {
										 level =6;
									 }
									 else
									 {
										 if(score >120 && score <=140)
										 {
											 level =7;
										 }
										 else
										 {
											 if(score >140 &&score <=160)
											 {
												 level =8;
											 }
											 else
											 {
												 if(score >160 && score <=180)
												 {
													 level =9;
												 }
												 else
												 {
													 if(score >180)
													 {
														 level =10;
													 }
												 }
											 }
										 }
									 }
								 }
							 }
						 }
					 }
				}

				std::pair <std::string, int> ques = GlobalFuncs::generateQuestion(category, level);
				 String ^ x = gcnew String(ques.first.c_str());
				 answer = ques.second;
				 Question->Text = x;
				 int num=rand()%4;
				 if(num==0)
				 {
					 label1->Text = (ques.second)+"";
					 label2->Text = "" + (ques.second+5);
					 label3->Text = "" + (ques.second-6);
					 label4->Text = "" + (ques.second-12);
					 
				 }else{
				 if(num==1)
				 {
					 label2->Text = (ques.second)+"";					 
					 label1->Text = "" + (ques.second-3);
					 label3->Text = "" + (ques.second+4);
					 label4->Text = "" + (ques.second-10);
				 }
				 
				 else{
				 if(num==2)
				 {
					 label3->Text = (ques.second)+"";
					 label2->Text = "" + (ques.second-11);
					 label1->Text = "" + (ques.second+13);
					 label4->Text = "" + (ques.second+25);
				 }
				 
				 else
				 {
				 if(num==3)
				 {
					 label4->Text = (ques.second)+"";
					 label2->Text = "" + (ques.second-6);
					 label3->Text = "" + (ques.second-9);
					 label1->Text = "" + (ques.second+19);

				 }
				 }
				 }
				 }
			}

private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			if(answer+"" == label1->Text)
			{
				score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			}
			else
			{
				MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				MessageBox::Show("Your Score is " + score);
				score=0;
				textBox1->Text = "0";
				nextQuestion();				
			}


		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == label2->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 score=0;
				 textBox1->Text = "0";
				 nextQuestion();
			 }
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == label3->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 score=0;
				 textBox1->Text = "0";
				 nextQuestion();
			 }
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == label4->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 score=0;
				 textBox1->Text = "0";
				 nextQuestion();
			 }

		 }

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Your Score is " + score);
			 this->Close();
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == label1->Text)
			{
				score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			}
			else
			{
				MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				MessageBox::Show("Your Score is " + score);
				score=0;
				textBox1->Text = "0";
				nextQuestion();
				
			}
		 }
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == label2->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 score=0;
				 textBox1->Text = "0";
				 nextQuestion();
				 
			 }
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(answer+"" == label3->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 score=0;
				 textBox1->Text = "0";
				 nextQuestion();
				 
			 }
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			  if(answer+"" == label4->Text)
			 {
				 score = score + 10;
				textBox1->Text = score+"";
				nextQuestion();
			 }
			 else
			 {
				 MessageBox::Show("Your answer is incorrect! The correct answer is " + answer);
				 MessageBox::Show("Your Score is " + score);
				 score=0;
				 textBox1->Text = "0";
				 nextQuestion();
				 
			 }
		 }
};
}
