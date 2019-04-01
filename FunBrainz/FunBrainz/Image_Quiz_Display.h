#pragma once
#include<vector>
#include<ctime>
using namespace System::Diagnostics;
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Image_Quiz_Display
	/// </summary>
	public ref class Image_Quiz_Display : public System::Windows::Forms::Form
	{
	public:
		static String^ label_name = "Animal" ;
		Image_Quiz_Display(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Image_Quiz_Display(Form^ obj1,String^ nameoflabel)
		{
			label_name = nameoflabel;
			InitializeComponent();			
			caller =obj1;
			
		}
		/*Image_Quiz_Display(Form^ obj1,String^ nameoflabel)
		{
			label_name = nameoflabel;
			InitializeComponent();			
			caller =obj1;
		}*/

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Image_Quiz_Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PB_Quiz_Image;
	private: System::Windows::Forms::Button^  btn_Next;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  btn_submit;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btn_solve;
	private: System::Windows::Forms::Button^  btn_extra;
	private: System::Windows::Forms::Button^  btn_selected;
	private: System::Windows::Forms::Button^  btn_random;
	private: System::Windows::Forms::Label^  lbl_Selected_letter;
	private: System::Windows::Forms::Label^  lbl_Level;
	private: System::Windows::Forms::Label^  lbl_type;
	private: System::Windows::Forms::Button^  btn_Back_to_Image_Quiz;
	private: System::Windows::Forms::Label^  lbl_Score;
	private: System::Windows::Forms::Label^  lbl_Score_Value;
	private: System::Windows::Forms::Label^  lbl_MaxScore;
	private: System::Windows::Forms::Label^  lbl_MaxScore_Value;
	private: System::Windows::Forms::Label^  lbl_points_to_be_gained;
	private: System::Windows::Forms::Label^  lbl_points_to_be_gained_value;
	private: System::Windows::Forms::Button^  btn_exit_hide;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btn_rand_cost;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btn_displayScore;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Image_Quiz_Display::typeid));
			this->PB_Quiz_Image = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Next = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btn_submit = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btn_solve = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btn_rand_cost = (gcnew System::Windows::Forms::Button());
			this->btn_exit_hide = (gcnew System::Windows::Forms::Button());
			this->lbl_Selected_letter = (gcnew System::Windows::Forms::Label());
			this->btn_extra = (gcnew System::Windows::Forms::Button());
			this->btn_selected = (gcnew System::Windows::Forms::Button());
			this->btn_random = (gcnew System::Windows::Forms::Button());
			this->lbl_Level = (gcnew System::Windows::Forms::Label());
			this->lbl_type = (gcnew System::Windows::Forms::Label());
			this->btn_Back_to_Image_Quiz = (gcnew System::Windows::Forms::Button());
			this->lbl_Score = (gcnew System::Windows::Forms::Label());
			this->lbl_Score_Value = (gcnew System::Windows::Forms::Label());
			this->lbl_MaxScore = (gcnew System::Windows::Forms::Label());
			this->lbl_MaxScore_Value = (gcnew System::Windows::Forms::Label());
			this->lbl_points_to_be_gained = (gcnew System::Windows::Forms::Label());
			this->lbl_points_to_be_gained_value = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btn_displayScore = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_Quiz_Image))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// PB_Quiz_Image
			// 
			this->PB_Quiz_Image->Location = System::Drawing::Point(255, 26);
			this->PB_Quiz_Image->Margin = System::Windows::Forms::Padding(2);
			this->PB_Quiz_Image->Name = L"PB_Quiz_Image";
			this->PB_Quiz_Image->Size = System::Drawing::Size(237, 188);
			this->PB_Quiz_Image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_Quiz_Image->TabIndex = 0;
			this->PB_Quiz_Image->TabStop = false;
			// 
			// btn_Next
			// 
			this->btn_Next->BackColor = System::Drawing::Color::PowderBlue;
			this->btn_Next->Enabled = false;
			this->btn_Next->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Next->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_Next->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_Next->Location = System::Drawing::Point(601, 196);
			this->btn_Next->Margin = System::Windows::Forms::Padding(2);
			this->btn_Next->Name = L"btn_Next";
			this->btn_Next->Size = System::Drawing::Size(91, 72);
			this->btn_Next->TabIndex = 1;
			this->btn_Next->Text = L"NEXT";
			this->btn_Next->UseVisualStyleBackColor = false;
			this->btn_Next->Visible = false;
			this->btn_Next->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_Next_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(47, 62);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(115, 36);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Animal";
			// 
			// btn_submit
			// 
			this->btn_submit->BackColor = System::Drawing::Color::PowderBlue;
			this->btn_submit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_submit->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_submit->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_submit->Location = System::Drawing::Point(601, 26);
			this->btn_submit->Margin = System::Windows::Forms::Padding(2);
			this->btn_submit->Name = L"btn_submit";
			this->btn_submit->Size = System::Drawing::Size(91, 72);
			this->btn_submit->TabIndex = 3;
			this->btn_submit->Text = L"SUBMIT";
			this->btn_submit->UseVisualStyleBackColor = false;
			this->btn_submit->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_submit_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->btn_solve);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->btn_rand_cost);
			this->panel1->Controls->Add(this->btn_exit_hide);
			this->panel1->Controls->Add(this->lbl_Selected_letter);
			this->panel1->Controls->Add(this->btn_extra);
			this->panel1->Controls->Add(this->btn_selected);
			this->panel1->Controls->Add(this->btn_random);
			this->panel1->Location = System::Drawing::Point(200, 156);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(333, 241);
			this->panel1->TabIndex = 4;
			this->panel1->Visible = false;
			// 
			// btn_solve
			// 
			this->btn_solve->BackColor = System::Drawing::Color::DarkCyan;
			this->btn_solve->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_solve->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btn_solve->Location = System::Drawing::Point(22, 176);
			this->btn_solve->Name = L"btn_solve";
			this->btn_solve->Size = System::Drawing::Size(251, 39);
			this->btn_solve->TabIndex = 11;
			this->btn_solve->Text = L"Solve";
			this->btn_solve->UseVisualStyleBackColor = false;
			this->btn_solve->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_solve_MouseLeave);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox5->Location = System::Drawing::Point(276, 181);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(30, 30);
			this->pictureBox5->TabIndex = 21;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox4->Location = System::Drawing::Point(269, 87);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(33, 35);
			this->pictureBox4->TabIndex = 20;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(269, 132);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(33, 35);
			this->pictureBox3->TabIndex = 19;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(269, 41);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(33, 35);
			this->pictureBox2->TabIndex = 18;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->button2->Location = System::Drawing::Point(230, 130);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(4);
			this->button2->Size = System::Drawing::Size(77, 39);
			this->button2->TabIndex = 15;
			this->button2->Text = L"15";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->button1->Location = System::Drawing::Point(230, 85);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(4);
			this->button1->Size = System::Drawing::Size(77, 39);
			this->button1->TabIndex = 14;
			this->button1->Text = L"10";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btn_rand_cost
			// 
			this->btn_rand_cost->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_rand_cost->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btn_rand_cost->Location = System::Drawing::Point(230, 39);
			this->btn_rand_cost->Name = L"btn_rand_cost";
			this->btn_rand_cost->Padding = System::Windows::Forms::Padding(4);
			this->btn_rand_cost->Size = System::Drawing::Size(77, 39);
			this->btn_rand_cost->TabIndex = 13;
			this->btn_rand_cost->Text = L" 5";
			this->btn_rand_cost->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_rand_cost->UseVisualStyleBackColor = true;
			// 
			// btn_exit_hide
			// 
			this->btn_exit_hide->BackColor = System::Drawing::Color::Red;
			this->btn_exit_hide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_exit_hide->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_exit_hide->Location = System::Drawing::Point(297, 0);
			this->btn_exit_hide->Margin = System::Windows::Forms::Padding(2);
			this->btn_exit_hide->Name = L"btn_exit_hide";
			this->btn_exit_hide->Size = System::Drawing::Size(28, 26);
			this->btn_exit_hide->TabIndex = 12;
			this->btn_exit_hide->Text = L"X";
			this->btn_exit_hide->UseVisualStyleBackColor = false;
			this->btn_exit_hide->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_exit_hide_Click);
			// 
			// lbl_Selected_letter
			// 
			this->lbl_Selected_letter->AutoSize = true;
			this->lbl_Selected_letter->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->lbl_Selected_letter->Location = System::Drawing::Point(67, 71);
			this->lbl_Selected_letter->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Selected_letter->Name = L"lbl_Selected_letter";
			this->lbl_Selected_letter->Size = System::Drawing::Size(131, 19);
			this->lbl_Selected_letter->TabIndex = 5;
			this->lbl_Selected_letter->Text = L"Choose one letter";
			this->lbl_Selected_letter->Visible = false;
			// 
			// btn_extra
			// 
			this->btn_extra->BackColor = System::Drawing::Color::LightSeaGreen;
			this->btn_extra->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_extra->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btn_extra->Location = System::Drawing::Point(22, 130);
			this->btn_extra->Name = L"btn_extra";
			this->btn_extra->Size = System::Drawing::Size(202, 39);
			this->btn_extra->TabIndex = 10;
			this->btn_extra->Text = L"Remove Extra Letter";
			this->btn_extra->UseVisualStyleBackColor = false;
			this->btn_extra->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_extra_MouseLeave);
			// 
			// btn_selected
			// 
			this->btn_selected->BackColor = System::Drawing::Color::LightSkyBlue;
			this->btn_selected->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_selected->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btn_selected->Location = System::Drawing::Point(22, 85);
			this->btn_selected->Name = L"btn_selected";
			this->btn_selected->Size = System::Drawing::Size(202, 39);
			this->btn_selected->TabIndex = 9;
			this->btn_selected->Text = L"Selected Letter";
			this->btn_selected->UseVisualStyleBackColor = false;
			this->btn_selected->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_selected_MouseLeave);
			// 
			// btn_random
			// 
			this->btn_random->BackColor = System::Drawing::Color::LightCyan;
			this->btn_random->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_random->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10));
			this->btn_random->Location = System::Drawing::Point(22, 39);
			this->btn_random->Name = L"btn_random";
			this->btn_random->Size = System::Drawing::Size(202, 39);
			this->btn_random->TabIndex = 8;
			this->btn_random->Text = L"Random Letter";
			this->btn_random->UseVisualStyleBackColor = false;
			this->btn_random->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_random_MouseLeave);
			// 
			// lbl_Level
			// 
			this->lbl_Level->AutoSize = true;
			this->lbl_Level->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Level->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_Level->Location = System::Drawing::Point(81, 140);
			this->lbl_Level->Name = L"lbl_Level";
			this->lbl_Level->Size = System::Drawing::Size(59, 22);
			this->lbl_Level->TabIndex = 5;
			this->lbl_Level->Text = L"Level";
			// 
			// lbl_type
			// 
			this->lbl_type->AutoSize = true;
			this->lbl_type->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_type->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_type->Location = System::Drawing::Point(89, 176);
			this->lbl_type->Name = L"lbl_type";
			this->lbl_type->Size = System::Drawing::Size(51, 22);
			this->lbl_type->TabIndex = 6;
			this->lbl_type->Text = L"Easy";
			// 
			// btn_Back_to_Image_Quiz
			// 
			this->btn_Back_to_Image_Quiz->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btn_Back_to_Image_Quiz->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_Back_to_Image_Quiz->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btn_Back_to_Image_Quiz->Location = System::Drawing::Point(33, 236);
			this->btn_Back_to_Image_Quiz->Margin = System::Windows::Forms::Padding(2);
			this->btn_Back_to_Image_Quiz->Name = L"btn_Back_to_Image_Quiz";
			this->btn_Back_to_Image_Quiz->Size = System::Drawing::Size(167, 44);
			this->btn_Back_to_Image_Quiz->TabIndex = 7;
			this->btn_Back_to_Image_Quiz->Text = L"Exit Game";
			this->btn_Back_to_Image_Quiz->UseVisualStyleBackColor = false;
			this->btn_Back_to_Image_Quiz->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_Back_to_Image_Quiz_Click);
			// 
			// lbl_Score
			// 
			this->lbl_Score->AutoSize = true;
			this->lbl_Score->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Score->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_Score->Location = System::Drawing::Point(82, 321);
			this->lbl_Score->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Score->Name = L"lbl_Score";
			this->lbl_Score->Size = System::Drawing::Size(58, 20);
			this->lbl_Score->TabIndex = 8;
			this->lbl_Score->Text = L"SCORE";
			// 
			// lbl_Score_Value
			// 
			this->lbl_Score_Value->AutoSize = true;
			this->lbl_Score_Value->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_Score_Value->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_Score_Value->Location = System::Drawing::Point(164, 321);
			this->lbl_Score_Value->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_Score_Value->Name = L"lbl_Score_Value";
			this->lbl_Score_Value->Size = System::Drawing::Size(17, 20);
			this->lbl_Score_Value->TabIndex = 9;
			this->lbl_Score_Value->Text = L"0";
			// 
			// lbl_MaxScore
			// 
			this->lbl_MaxScore->AutoSize = true;
			this->lbl_MaxScore->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_MaxScore->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_MaxScore->Location = System::Drawing::Point(43, 365);
			this->lbl_MaxScore->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_MaxScore->Name = L"lbl_MaxScore";
			this->lbl_MaxScore->Size = System::Drawing::Size(97, 20);
			this->lbl_MaxScore->TabIndex = 10;
			this->lbl_MaxScore->Text = L"MAX SCORE";
			// 
			// lbl_MaxScore_Value
			// 
			this->lbl_MaxScore_Value->AutoSize = true;
			this->lbl_MaxScore_Value->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lbl_MaxScore_Value->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_MaxScore_Value->Location = System::Drawing::Point(164, 365);
			this->lbl_MaxScore_Value->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_MaxScore_Value->Name = L"lbl_MaxScore_Value";
			this->lbl_MaxScore_Value->Size = System::Drawing::Size(17, 20);
			this->lbl_MaxScore_Value->TabIndex = 11;
			this->lbl_MaxScore_Value->Text = L"0";
			// 
			// lbl_points_to_be_gained
			// 
			this->lbl_points_to_be_gained->AutoSize = true;
			this->lbl_points_to_be_gained->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_points_to_be_gained->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_points_to_be_gained->Location = System::Drawing::Point(59, 407);
			this->lbl_points_to_be_gained->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_points_to_be_gained->Name = L"lbl_points_to_be_gained";
			this->lbl_points_to_be_gained->Size = System::Drawing::Size(81, 20);
			this->lbl_points_to_be_gained->TabIndex = 12;
			this->lbl_points_to_be_gained->Text = L"POINTS TO";
			// 
			// lbl_points_to_be_gained_value
			// 
			this->lbl_points_to_be_gained_value->AutoSize = true;
			this->lbl_points_to_be_gained_value->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->lbl_points_to_be_gained_value->ForeColor = System::Drawing::SystemColors::ControlText;
			this->lbl_points_to_be_gained_value->Location = System::Drawing::Point(164, 415);
			this->lbl_points_to_be_gained_value->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lbl_points_to_be_gained_value->Name = L"lbl_points_to_be_gained_value";
			this->lbl_points_to_be_gained_value->Size = System::Drawing::Size(17, 20);
			this->lbl_points_to_be_gained_value->TabIndex = 13;
			this->lbl_points_to_be_gained_value->Text = L"0";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PowderBlue;
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->lbl_points_to_be_gained_value);
			this->panel2->Controls->Add(this->btn_Back_to_Image_Quiz);
			this->panel2->Controls->Add(this->lbl_points_to_be_gained);
			this->panel2->Controls->Add(this->lbl_MaxScore_Value);
			this->panel2->Controls->Add(this->lbl_Level);
			this->panel2->Controls->Add(this->lbl_MaxScore);
			this->panel2->Controls->Add(this->lbl_type);
			this->panel2->Controls->Add(this->lbl_Score_Value);
			this->panel2->Controls->Add(this->lbl_Score);
			this->panel2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->panel2->Location = System::Drawing::Point(751, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(238, 522);
			this->panel2->TabIndex = 14;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Image_Quiz_Display::panel2_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(63, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 83);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label2->Location = System::Drawing::Point(51, 432);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(89, 20);
			this->label2->TabIndex = 14;
			this->label2->Text = L"BE GAINED";
			// 
			// btn_displayScore
			// 
			this->btn_displayScore->BackColor = System::Drawing::Color::PowderBlue;
			this->btn_displayScore->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_displayScore->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btn_displayScore->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btn_displayScore->Location = System::Drawing::Point(601, 113);
			this->btn_displayScore->Name = L"btn_displayScore";
			this->btn_displayScore->Size = System::Drawing::Size(91, 71);
			this->btn_displayScore->TabIndex = 15;
			this->btn_displayScore->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_displayScore->UseVisualStyleBackColor = false;
			this->btn_displayScore->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btn_displayScore_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::PowderBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(616, 150);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 20);
			this->label3->TabIndex = 16;
			this->label3->Text = L"BOARD";
			this->label3->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::PowderBlue;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(616, 130);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"SCORE";
			this->label4->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::label4_Click);
			// 
			// Image_Quiz_Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MintCream;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(735, 517);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->btn_displayScore);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->btn_submit);
			this->Controls->Add(this->btn_Next);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PB_Quiz_Image);
			this->Controls->Add(this->panel2);
			this->DoubleBuffered = true;
			this->KeyPreview = true;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Image_Quiz_Display";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Image Quiz";
			this->Load += gcnew System::EventHandler(this, &Image_Quiz_Display::Image_Quiz_Display_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Image_Quiz_Display::ImageQuiz_KeyPress);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Image_Quiz_Display::ImageQuiz_KeyUp);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_Quiz_Image))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Form^ caller;
		static array<String^>^ image_file_name = gcnew array<String^>(1000); //for file name
		static array<String^>^ image_name = gcnew array<String^>(1000); //for image name
		static array<bool>^ visited_image = gcnew array<bool>(1000); //boolean array to check if the image is already displayed
		static array<int>^ index_ans = gcnew array<int>(14); // for storing the index of the pressed char button 
		static int sidepane=0;
		static int counter_image = 0;
		static int length_of_answer = 0;
		static int index_to_be_filled = 0;
		static array<bool>^ isFixed = gcnew array<bool>(14); //for answer characters

		/*static String^ level_type_name;
		static int level;*/

		static int easy_level=0;
		static int medium_level=0;
		static int hard_level=0;

		static int easy_levels_completed=0;
		static int medium_levels_completed=0;
		static int hard_levels_completed=0;
		static int total_levels_completed=0;
		static int total_score=0;
	
public:
		int max(int a,int b)
		{
			if (a>b)
			{
				return a;
			}
			else
				return b;
		}
		
		void button_creator(int x,int y,String^ s){
			Button^ var = gcnew Button();
			//var->BackColor = System::Drawing::SystemColors::ControlDarkDar/*k;
			//var->ForeColor = System::Drawing::SystemColors::ControlDark;*/
			var->Location = System::Drawing::Point(x, y);
			var->Name = s;   
			var->Size = System::Drawing::Size(45,45);
			var->TabIndex = 1;
			var->Text = "";
			var->UseVisualStyleBackColor = false;
			var->Enabled = false;
			this->Controls->Add(var);
			var->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::Selected_Button);
		}

	private: System::Void Selected_Button(System::Object^  sender, System::EventArgs^  e){
				  int randomindex;
				  Button^ btn = ((Button^)sender);
				  randomindex = System::Int64::Parse(btn->Name);
				  isFixed[randomindex]=true;
				  btn->Enabled=false;
				  for(int i=0;i<14;i++){
					  Control^ curr_btn = this->Controls[System::Convert::ToString(100+i)];
					  ((Button^)curr_btn)->Visible=true;
				  }
				  Control^ btn_clear = this->Controls[L"clear"];
				  ((Button^)btn_clear)->Visible=true;
				  Control^ btn_hint = this->Controls[L"hint"];
				  ((Button^)btn_hint)->Visible=true;
				  Control^ btn_back = this->Controls[L"back"];
				  ((Button^)btn_back)->Visible=true;
				  lbl_Selected_letter->Visible=false;
				  for(int i=0;i<length_of_answer;i++){
					  if(isFixed[i]==true){
						  continue;
					  }
					  Control^ var = this->Controls[System::Convert::ToString(i)];
					  ((Button^)var)->Text = "";
					  ((Button^)var)->Enabled=false;
				  }

				 
				 String^ actual_ans = PB_Quiz_Image->Name->ToUpper();
				 actual_ans= actual_ans->Replace(" ","");
				 Char^ dum = actual_ans[randomindex];
				 String^ access_char = System::Convert::ToString(dum);
				 Control^ ans_btn = this->Controls[System::Convert::ToString(randomindex)];
				 ((Button^)ans_btn)->Text = access_char;
				 Control^ curr_btn = this->Controls[System::Convert::ToString(100+randomindex)];
				 ((Button^)curr_btn)->Enabled=false;

				 int flag2=0;
				 for(int i=0;i<length_of_answer;i++){
					 if(isFixed[i]==false){
						 flag2=1;
						 break;
					 }
				 }
				 if(flag2==0){
					 btn_submit->PerformClick();
				 }
				 for(int i=0;i<length_of_answer;i++){
					 if(isFixed[i]==false){
						 index_to_be_filled=i;
						 break;
					 }
				 }
				 ((Button^)btn_clear)->PerformClick();
			 }


		void button_creator2(int x, int y){
			Button^ hint = gcnew Button();
			Button^ clear = gcnew Button();
			Button^ back = gcnew Button();

			hint->Location = System::Drawing::Point(x, y);
			hint->Name = L"hint";
			hint->Size = System::Drawing::Size(70, 45);
			hint->TabIndex = 1;
			hint->Text = "HINT";
			hint->UseVisualStyleBackColor = false;
			this->Controls->Add(hint);
			hint->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btnHint_Click);
			x = x + 75;
			hint->BackColor = System::Drawing::Color::YellowGreen;
			hint->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			hint->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			hint->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));

			clear->Location = System::Drawing::Point(x, y);
			clear->Name = L"clear";
			clear->Size = System::Drawing::Size(70,45);
			clear->TabIndex = 1;
			clear->Text = "CLEAR";
			clear->UseVisualStyleBackColor = false;
			this->Controls->Add(clear);
			clear->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btnClear_Click);
			x = x + 75;
			clear->BackColor = System::Drawing::Color::Red;
			clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			clear->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			clear->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));

			back->BackColor = System::Drawing::Color::Red;
			back->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			back->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			back->Location = System::Drawing::Point(x, y);
			back->Name = L"back";
			back->Size = System::Drawing::Size(70,45);
			back->TabIndex = 1;
			back->Text = "BACK";
			back->UseVisualStyleBackColor = false;
			this->Controls->Add(back);
			back->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btnBack_Click);
			back->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
		}


		// ********** HINT USER CONTROL *******
	private: System::Void btnHint_Click(System::Object^  sender, System::EventArgs^  e){
				 panel1->Visible=true;
			 }

			 //HINT functions

			 void Random_letter()
			 {
				 Control^ btn_clear = this->Controls[L"clear"];
				 ((Button^)btn_clear)->PerformClick();
				 int randomindex;

				 while(1){
					 randomindex = rand() % length_of_answer;
					 if(isFixed[randomindex]==false){
						 isFixed[randomindex]=true;
						 break;
					 }
				 }

				 String^ actual_ans = PB_Quiz_Image->Name->ToUpper();
				 actual_ans= actual_ans->Replace(" ","");
				 Char^ dum = actual_ans[randomindex];
				 String^ access_char = System::Convert::ToString(dum);
				 Control^ ans_btn = this->Controls[System::Convert::ToString(randomindex)];
				 ((Button^)ans_btn)->Text = access_char;
				 Control^ curr_btn = this->Controls[System::Convert::ToString(100+randomindex)];
				 ((Button^)curr_btn)->Enabled=false;
				 ((Button^)curr_btn)->Visible=false;

				 int flag2=0;
				 for(int i=0;i<length_of_answer;i++){
					 if(isFixed[i]==false){
						 flag2=1;
						 break;
					 }
				 }
				 if(flag2==0){
					 btn_submit->PerformClick();
				 }
				 for(int i=0;i<length_of_answer;i++){
					 if(isFixed[i]==false){
						 index_to_be_filled=i;
						 break;
					 }
				 }
			 }

			 void SelectedLetter()
			 {
				 for(int i=0;i<length_of_answer;i++){
					 if(isFixed[i]==true){
						 continue;
					 }
					 Control^ var = this->Controls[System::Convert::ToString(i)];
					 ((Button^)var)->Text = "?";
					 ((Button^)var)->Enabled=true;
				 }
				 for(int i=0;i<14;i++){
					 Control^ curr_btn = this->Controls[System::Convert::ToString(100+i)];
					 ((Button^)curr_btn)->Visible=false;
				 }
				 Control^ btn_clear = this->Controls[L"clear"];
				 ((Button^)btn_clear)->Visible=false;
				 Control^ btn_hint = this->Controls[L"hint"];
				 ((Button^)btn_hint)->Visible=false;
				 Control^ btn_back = this->Controls[L"back"];
				 ((Button^)btn_back)->Visible=false;
				 lbl_Selected_letter->Visible=true;
			 }

			 void Remove_Extra_Letter()
			 {
				 Control^ btn_clear = this->Controls[L"clear"];
				 ((Button^)btn_clear)->PerformClick();
				 String^ actual_ans = PB_Quiz_Image->Name->ToUpper();
				 actual_ans= actual_ans->Replace(" ","");
				 int char_present[26]={ 0 };
				 for (int i=0;i<length_of_answer;i++)
				 {
					 char_present[actual_ans[i]-65]++;
				 }
				 for (int i=0;i<14;i++)
				 {
					 Control^ ans_btn = this->Controls[System::Convert::ToString(100+i)];
					 if (char_present[System::Char::Parse(ans_btn->Text)-65]>0)
					 {
						 char_present[System::Char::Parse(ans_btn->Text)-65]--;
					 }
					 else
					 {
						 ans_btn->Enabled=false;
						 ans_btn->Visible=false;
					 }
				 }
				 for(int i=0;i<length_of_answer;i++){
					 if(isFixed[i]==false){
						 index_to_be_filled=i;
						 break;
					 }
				 }
			 }

			 void Solve()
			 {

				 String^ actual_ans = PB_Quiz_Image->Name->ToUpper();
				 actual_ans= actual_ans->Replace(" ","");
				 for (int i=0;i<length_of_answer;i++)
				 {
					 Control^ ans_btn = this->Controls[System::Convert::ToString(i)];
					 ((Button^)ans_btn)->Text = System::Convert::ToString(actual_ans[i]);
				 }
				 for (int i=0;i<14;i++)
				 {
					 Control^ ans_btn = this->Controls[System::Convert::ToString(100+i)];
					 ((Button^)ans_btn)->Enabled=false;
				 }
				 btn_submit->PerformClick();
			 }


	private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e){
				  //MessageBox::Show(System::Convert::ToString(index_to_be_filled));
				 for (int i=0;i<length_of_answer;i++)
				 {
					 Control^ btn_to_remove = this->Controls[System::Convert::ToString(i)];
					 if(isFixed[i]==true){
						 continue;
					 }
					 btn_to_remove->Text="";
				 }
				 for (int i=0;i<length_of_answer;i++)
				 {
					 if(isFixed[i]==true){
						 continue;
					 }
					 //MessageBox::Show(System::Convert::ToString(i));
					 Control^ btn_to_enable = this->Controls[System::Convert::ToString(100+i)];
					 btn_to_enable->Enabled=true;
				 }
				/* index_to_be_filled=0;
				 while(isFixed[index_to_be_filled]==true && index_to_be_filled<length_of_answer){
					 index_to_be_filled++;
				 }
				 if(index_to_be_filled==length_of_answer){
					 btn_submit->PerformClick();
				 }*/
				 int all_True_flag=1;
				 for(int i=0;i<length_of_answer;i++){
					 if(isFixed[i]==false){
						 all_True_flag=0;
						 index_to_be_filled=i;
						 break;
					 }
				 }
				 if(all_True_flag==1){
					 btn_submit->PerformClick();
				 }
				  //MessageBox::Show(System::Convert::ToString(index_to_be_filled));
			 }

	private: System::Void btnBack_Click(System::Object^  sender, System::EventArgs^  e){
				 //MessageBox::Show(System::Convert::ToString(index_to_be_filled));
				 if(index_to_be_filled==0){
					 MessageBox::Show("cant back");
					 return;
				 }
				 index_to_be_filled--;
				 while(isFixed[index_to_be_filled]==true){
					 if(index_to_be_filled==0){
						 MessageBox::Show("Can't back too");
						 for(int i=0;i<length_of_answer;i++){
							 Control^ curr_btn = this->Controls[System::Convert::ToString(i)];
							 if(curr_btn->Text==""){
								 index_to_be_filled=i;
								 break;
							 }
						 }
						 return;
					 }
					 index_to_be_filled--;
				 }

				 Control^ btn_to_remove = this->Controls[System::Convert::ToString(index_to_be_filled)];
				 btn_to_remove->Text="";

				 Control^ btn_to_enable = this->Controls[System::Convert::ToString(index_ans[index_to_be_filled])];
				 btn_to_enable->Enabled=true;
				 index_ans[index_to_be_filled]=0;
				  //MessageBox::Show(System::Convert::ToString(index_to_be_filled));
				 
			 }

			 void button_creator3(int x, int y,Char^ s,int i)
			 {
				 String^ dum2 = System::Convert::ToString(100+i);
				 Button^ var = gcnew Button();
				 //var->BackColor = System::Drawing::SystemColors::ControlDarkDar/*k;
				 //var->ForeColor = System::Drawing::SystemColors::ControlDark;*/
				 var->Location = System::Drawing::Point(x, y);
				 var->Name = dum2;
				 var->Size = System::Drawing::Size(45, 45);
				 var->TabIndex = 1;
				 var->Text = System::Convert::ToString(s)->ToUpper();
				 var->UseVisualStyleBackColor = false;
				 var->Enabled = true;
				 this->Controls->Add(var);
				 var->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btnChar_Click);

			 }

	private: System::Void btnChar_Click(System::Object^  sender, System::EventArgs^  e){
				  //MessageBox::Show(System::Convert::ToString(index_to_be_filled));
				 if (index_to_be_filled == length_of_answer)
				 {
					 MessageBox::Show("Can't Filled further");
					 return;
				 }
				 Button^ btn = ((Button^)sender);
				 index_ans[index_to_be_filled]= System::Int64::Parse(btn->Name);
				 Control^ random = this->Controls[System::Convert::ToString(index_to_be_filled)];
				 btn->Enabled = false;
				 random->Text = btn->Text;
				 int all_filled_by_some_means=1;
				 for(int i=0;i<length_of_answer;i++){
					 Control^ curr_btn = this->Controls[System::Convert::ToString(i)];
					 if(curr_btn->Text==""){
						 index_to_be_filled=i;
						 all_filled_by_some_means=0;
						 break;
					 }
				 }
				 if(all_filled_by_some_means==1){
					 index_to_be_filled=length_of_answer;
				 }
				  //MessageBox::Show(System::Convert::ToString(index_to_be_filled));
			 }

			 void refresh_image(){
				
				 for(int i=0;i<14;i++){
					 isFixed[i]=false;
				 }
				 index_to_be_filled=0;
				 length_of_answer=0;

				 Image ^image1;
				 int random_index;
				 int flag = 0;
				 for (int i = 0; i < counter_image; i++){
					 if (visited_image[i] == false){
						 flag = 1;
						 break;
					 }
				 }
				 if (flag == 0){
					 //to do
					 this->Close();
					 caller->Show();
					 return;
				 }
				 /*while (1){
					 random_index = rand() % counter_image;
					 if (visited_image[random_index] == false){
						 visited_image[random_index] = true;
						 break;
					 }
				 }*/
				 random_index=total_levels_completed;
				 lbl_Level->Text="Level "+System::Convert::ToString(total_levels_completed+1);
				 if(total_levels_completed<easy_level){
					 lbl_type->Text="Easy";
					 lbl_points_to_be_gained_value->Text="20";
				 }else{
					 if(total_levels_completed<easy_level+medium_level){
						 lbl_type->Text="Medium";
						 lbl_points_to_be_gained_value->Text="30";
					 }else{
						 if(total_levels_completed<easy_level+medium_level+hard_level){
							 lbl_type->Text="Hard";
							 lbl_points_to_be_gained_value->Text="40";
						 }
					 }
				 }
				 
				 if(random_index==counter_image){
					 total_score=0;
					 int max_score = max(System::Int64::Parse(lbl_Score_Value->Text),System::Int64::Parse(lbl_MaxScore_Value->Text));
					 try {
						 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
						 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
						 
						 String ^ Sq5 = "UPDATE Image_Quiz SET [Max_Score] = " + max_score + " Where [Domain] = '" + label1->Text + "';";
						 String ^ Sq6 = "UPDATE Image_Quiz SET [Total_Score] = " + total_score + " Where [Domain] = '" + label1->Text + "';";
						 OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq5, con);
						 OleDb::OleDbCommand ^ command5 = gcnew OleDb::OleDbCommand(Sq6, con);
						 con->Open();
						 command4->ExecuteScalar();
						 command5->ExecuteScalar();
						 con->Close();
					 }
					 catch (Exception ^ ex) {
						 MessageBox::Show(ex->Message);
					 }
					 Image_Quiz_Display::Hide();
					 caller->Show();
					 return;
				 }
				 String ^ str = "media\\" + label1->Text + "\\" +image_file_name[random_index];
				 image1 = gcnew Bitmap(str);
				 PB_Quiz_Image->Image = image1;
				 PB_Quiz_Image->Name = image_name[random_index];

				 String^ dummy = image_name[random_index];
				 int x = (0.5)*(768 - (dummy->Length)*(45) - (5)*(dummy->Length-1));
				 int y = 250;

				 for (int i = 0; i < dummy->Length; i++){
					 if (dummy[i] == L' '){
						 x = x + 50;
						 continue;
					 }
					 button_creator(x, y, length_of_answer.ToString());
					 x = x + 50;
					 length_of_answer++;
				 }
				 y = y + 60;
				 x = (0.5)*(768 - (3)*(70) - (5)*(2));
				 button_creator2(x, y);

				 //every string is of length 1
				 array<Char^>^ all_characters = gcnew array<Char^>(14);
				 int count_charcters = 0;
				 for (int i = 0; i < dummy->Length; i++)
				 {
					 if (dummy[i] == L' '){
						 continue;
					 }
					 all_characters[count_charcters++] = dummy[i];
				 }

				 int upper_limit = 14 - count_charcters;
				 for (int i = 0; i < upper_limit; i++)
				 {
					 int rand_no = rand() % 26;
					 char dum = rand_no + 65;

					 all_characters[count_charcters++] = System::Convert::ToChar(dum);

				 }

				 int visited_char[14] = { 0 };
				 y = y + 60;
				 x = (0.5)*(768 - (7)*(45) - (5)*(6));
				 for (int i = 0; i < 7; i++)
				 {
					 int randNo;
					 while (1)
					 {
						 randNo = rand() % 14;
						 if (visited_char[randNo] == 0)
						 {
							 visited_char[randNo] = 1;
							 break;
						 }
					 }


					 button_creator3(x, y,all_characters[randNo],randNo);
					 x += 50;
				 }
				 y += 60;
				 x = (0.5)*(768 - (7)*(45) - (5)*(6));
				 for (int i = 0; i < 7; i++)
				 {
					 int randNo;
					 while (1)
					 {
						 randNo = rand() % 14;
						 if (visited_char[randNo] == 0)
						 {
							 visited_char[randNo] = 1;
							 break;
						 }
					 }
					 visited_char[randNo] = 1;
					 button_creator3(x, y, all_characters[randNo], randNo);
					 x += 50;
				 }

			 }

	private: System::Void Image_Quiz_Display_Load(System::Object^  sender, System::EventArgs^  e) {
				 counter_image=0;
				 easy_level=0;
				 medium_level=0;
				 hard_level=0;
				 srand(time(0));
				 //int sidepane=0;
				 label1->Text = label_name;
					 try {
						 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
						 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
						 String ^ Sql = "Select Max_Score from Image_Quiz where [Domain] = '" + label1->Text + "';";
						 String ^ Sq2 = "Select Total_Score from Image_Quiz where [Domain] = '" + label1->Text + "';";
						 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
						 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
						 con->Open();
						 lbl_MaxScore_Value->Text=System::Convert::ToString(command->ExecuteReader());
						 lbl_Score_Value->Text=System::Convert::ToString(command2->ExecuteReader());
						 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }


				 array<String^>^ image_file_name_easy = gcnew array<String^>(1000);
				 array<String^>^ image_file_name_medium = gcnew array<String^>(1000);
				 array<String^>^ image_file_name_hard = gcnew array<String^>(1000);

				 array<String^>^ image_name_easy = gcnew array<String^>(1000);
				 array<String^>^ image_name_medium = gcnew array<String^>(1000);
				 array<String^>^ image_name_hard = gcnew array<String^>(1000);

				 array<int>^ image_easy_level =gcnew array<int>(1000);
				 array<int>^ image_medium_level = gcnew array<int>(1000);
				 array<int>^ image_hard_level = gcnew array<int>(1000);
				 MessageBox::Show("stage1");


				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ Sql = "Select * from Image_Quiz_Display where [Domain] = '" + label1->Text + "';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 //MessageBox::Show(command->ExecuteScalar()->ToString());
					 OleDb::OleDbDataReader ^ reader = command->ExecuteReader();
					 while (reader->Read()){
						 
						 if(reader[4]->ToString()=="Easy")
						 {
							 image_file_name_easy[easy_level]=reader[2]->ToString();
							 image_name_easy[easy_level]= reader[3]->ToString();
							 image_easy_level[easy_level++]=(int)reader[5];
						 }
						 if(reader[4]->ToString()=="Medium")
						 {
							 image_file_name_medium[medium_level]=reader[2]->ToString();
							 image_name_medium[medium_level]= reader[3]->ToString();
							 image_medium_level[medium_level++]=(int)reader[5];
						 }
						 if(reader[4]->ToString()=="Hard")
						 {
							 image_file_name_hard[hard_level]=reader[2]->ToString();
							 image_name_hard[hard_level]= reader[3]->ToString();
							 image_hard_level[hard_level++]=(int)reader[5];
						 }
					 }
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }

				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ Sql = "Select * from Image_Quiz where [Domain] = '" + label1->Text + "';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 //MessageBox::Show(command->ExecuteScalar()->ToString());
					 OleDb::OleDbDataReader ^ reader = command->ExecuteReader();
					 while (reader->Read()){
						 easy_levels_completed=(int)reader[4];
						 medium_levels_completed=(int)reader[5];
						 hard_levels_completed=(int)reader[6];
						 lbl_Score_Value->Text=System::Convert::ToString(reader[7]);
						 lbl_MaxScore_Value->Text=System::Convert::ToString(reader[3]);
					 }
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 total_levels_completed=easy_levels_completed+medium_levels_completed+hard_levels_completed;
				 //MessageBox::Show(System::Convert::ToString(total_levels_completed));

				 //MessageBox::Show("stage1");
				 for (int i=0;i<easy_level;i++)
				 {
					 for (int j=0;j<easy_level-1;j++)
					 {
						 if (image_easy_level[j]>image_easy_level[j+1])
						 {
							 int temp =image_easy_level[j];
							 image_easy_level[j]=image_easy_level[j+1];
							 image_easy_level[j+1]=temp;

							 String^ temp2 = image_file_name_easy[j];
							 image_file_name_easy[j]=image_file_name_easy[j+1];
							 image_file_name_easy[j+1]=temp2;

							 String^ temp3 = image_name_easy[j];
							 image_name_easy[j]=image_name_easy[j+1];
							 image_name_easy[j+1]=temp3;
						 }
					 }
				 }
				 //MessageBox::Show("stage1");
				 for (int i=0;i<medium_level;i++)
				 {
					 for (int j=0;j<medium_level-1;j++)
					 {
						 if (image_medium_level[j]>image_medium_level[j+1])
						 {
							 int temp =image_medium_level[j];
							 image_medium_level[j]=image_medium_level[j+1];
							 image_medium_level[j+1]=temp;

							 String^ temp2 = image_file_name_medium[j];
							 image_file_name_medium[j]=image_file_name_medium[j+1];
							 image_file_name_medium[j+1]=temp2;

							 String^ temp3 = image_name_medium[j];
							 image_name_medium[j]=image_name_medium[j+1];
							 image_name_medium[j+1]=temp3;
						 }
					 }
				 }
				 //MessageBox::Show("stage1");
				 for (int i=0;i<hard_level;i++)
				 {
					 for (int j=0;j<hard_level-1;j++)
					 {
						 if (image_hard_level[j]>image_hard_level[j+1])
						 {
							 int temp =image_hard_level[j];
							 image_hard_level[j]=image_hard_level[j+1];
							 image_hard_level[j+1]=temp;

							 String^ temp2 = image_file_name_hard[j];
							 image_file_name_hard[j]=image_file_name_hard[j+1];
							 image_file_name_hard[j+1]=temp2;

							 String^ temp3 = image_name_hard[j];
							 image_name_hard[j]=image_name_hard[j+1];
							 image_name_hard[j+1]=temp3;
						 }
					 }
				 }
				 //MessageBox::Show("stage1");
				 for(int i=0;i<easy_level;i++){
					 image_name[counter_image]=image_name_easy[i];
					 image_file_name[counter_image++]=image_file_name_easy[i];
				 }
				 for(int i=0;i<medium_level;i++){
					 image_name[counter_image]=image_name_medium[i];
					 image_file_name[counter_image++]=image_file_name_medium[i];
				 }
				 for(int i=0;i<hard_level;i++){
					 image_name[counter_image]=image_name_hard[i];
					 image_file_name[counter_image++]=image_file_name_hard[i];
				 }
				 //MessageBox::Show(System::Convert::ToString(counter_image));

				 if(total_levels_completed==counter_image){
					 MessageBox::Show("ALL LEVELS COMPLETED");
					 MessageBox::Show("Start from scratch");
					 total_levels_completed=0;
					 easy_levels_completed=0;
					 medium_levels_completed=0;
					 hard_levels_completed=0;
					 
	
					 try {
						 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
						 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
						 String ^ Sq2 = "UPDATE Image_Quiz SET [Levels_Completed_Easy] = " + easy_levels_completed + " Where [Domain] = '" + label1->Text + "';";
						 String ^ Sq3 = "UPDATE Image_Quiz SET [Levels_Completed_Medium] = " + medium_levels_completed + " Where [Domain] = '" + label1->Text + "';";
						 String ^ Sq4 = "UPDATE Image_Quiz SET [Levels_Completed_Hard] = " + hard_levels_completed + " Where [Domain] = '" + label1->Text + "';";
						 String ^ Sq5 = "UPDATE Image_Quiz SET [Total_Score] = " + total_score + " Where [Domain] = '" + label1->Text + "';";
					
						 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sq2, con);
						 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq3, con);
						 OleDb::OleDbCommand ^ command3 = gcnew OleDb::OleDbCommand(Sq4, con);
						 OleDb::OleDbCommand ^ command4 = gcnew OleDb::OleDbCommand(Sq5, con);
						 con->Open();
						 command->ExecuteScalar();
						 command2->ExecuteScalar();
						 command3->ExecuteScalar();
						 command4->ExecuteScalar();
						 con->Close();
					 }
					 catch (Exception ^ ex) {
						 MessageBox::Show(ex->Message);
					 }
				 }
				 
				 for (int i=0;i<14;i++)
				 {
					 index_ans[i]=0;
				 }
				 refresh_image();
			 }
private: System::Void btn_Next_Click(System::Object^  sender, System::EventArgs^  e) {
			 /*	 int count = 0;
			 Control^ rndom = this->Controls[L"1"];
			 Controls->Remove(rndom);
			 for (int i = 0; i < length_of_answer; i++)
			 {
			 String^ dum2 = System::Convert::ToString(i);
			 Control^ rndom = this->Controls[dum2];
			 Controls->Remove(rndom);
			 }

			 for (int i = 0; i < 14; i++)
			 {
			 String^ dum2 = System::Convert::ToString(100+i);
			 Control^ rndom = this->Controls[dum2];
			 Controls->Remove(rndom);
			 }

			 total_levels_completed++;
			 if(lbl_type->Text=="Easy"){
			 easy_levels_completed++;
			 }
			 if(lbl_type->Text=="Medium"){
			 medium_levels_completed++;
			 }
			 if(lbl_type->Text=="Hard"){
			 hard_levels_completed++;
			 }
			 refresh_image();
			 for (int i=0;i<14;i++)
			 {
			 index_ans[i]=0;
			 }*/
		 }
	private: System::Void btn_submit_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ actual_ans = PB_Quiz_Image->Name->ToUpper();
				 actual_ans= actual_ans->Replace(" ","");
				 /* if (index_to_be_filled!=length_of_answer)
				 {
				 MessageBox::Show("You can't submit");
				 return;
				 }*/    
				 // MessageBox::Show(actual_ans->ToUpper());
				 String^ submitted_string = "";
				 for(int i=0;i<length_of_answer;i++)
				 {
					 Control^ btn_access = this->Controls[System::Convert::ToString(i)];
					 if (btn_access->Text == L"")
					 {
						 MessageBox::Show("You can't submit");
						 return;
					 }
					 submitted_string+= btn_access->Text;
				 }
				 //MessageBox::Show(submitted_string);

				 if (submitted_string == actual_ans)
				 {
					 int score=System::Int64::Parse(lbl_Score_Value->Text);
					 MessageBox::Show("Correct Answer!!");
					 //btn_Next->PerformClick();
					 int count = 0;
					 Control^ rndom = this->Controls[L"1"];
					 Controls->Remove(rndom);
					 for (int i = 0; i < length_of_answer; i++)
					 {
						 String^ dum2 = System::Convert::ToString(i);
						 Control^ rndom = this->Controls[dum2];
						 Controls->Remove(rndom);
					 }

					 for (int i = 0; i < 14; i++)
					 {
						 String^ dum2 = System::Convert::ToString(100+i);
						 Control^ rndom = this->Controls[dum2];
						 Controls->Remove(rndom);
					 }

					 total_levels_completed++;
					 total_score+=(System::Int64::Parse(lbl_points_to_be_gained_value->Text));
					 if(lbl_type->Text=="Easy"){
						 easy_levels_completed++;
						 //String ^ Sq3 = "UPDATE Pipeline_Scoring SET [Score_Easy] = '" + scores + "' Where [StudentID] = " + stu_ID + ";";
						 try {
							 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
							 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
							 String ^ Sq2 = "UPDATE Image_Quiz SET [Levels_Completed_Easy] = " + easy_levels_completed + " Where [Domain] = '" + label1->Text + "';";
							 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sq2, con);
							 con->Open();
							 command->ExecuteScalar();
							 con->Close();
						 }
						 catch (Exception ^ ex) {
							 MessageBox::Show(ex->Message);
						 }
					 }
					 if(lbl_type->Text=="Medium"){
						 medium_levels_completed++;
						 try {
							 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
							 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
							 String ^ Sq2 = "UPDATE Image_Quiz SET [Levels_Completed_Medium] = " + medium_levels_completed + " Where [Domain] = '" + label1->Text + "';";
							 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sq2, con);
							 con->Open();
							 command->ExecuteScalar();
							 con->Close();
						 }
						 catch (Exception ^ ex) {
							 MessageBox::Show(ex->Message);
						 }

					 }
					 if(lbl_type->Text=="Hard"){
						 hard_levels_completed++;
						 try {
							 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
							 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
							 String ^ Sq2 = "UPDATE Image_Quiz SET [Levels_Completed_Hard] = " + hard_levels_completed + " Where [Domain] = '" + label1->Text + "';";
							 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sq2, con);
							 con->Open();
							 command->ExecuteScalar();
							 con->Close();
						 }
						 catch (Exception ^ ex) {
							 MessageBox::Show(ex->Message);
						 }

					 }
					 try {
						 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
						 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
						 String ^ Sq2 = "UPDATE Image_Quiz SET [Total_Score] = " + total_score + " Where [Domain] = '" + label1->Text + "';";
						 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sq2, con);
						 con->Open();
						 command->ExecuteScalar();
						 con->Close();
					 }
					 catch (Exception ^ ex) {
						 MessageBox::Show(ex->Message);
					 }
					 refresh_image();
					 for (int i=0;i<14;i++)
					 {
						 index_ans[i]=0;
					 }
					 lbl_Score_Value->Text=System::Convert::ToString(total_score);
				 }
				 else
				 {
					 MessageBox::Show("Incorrect Answer!!");
					 Control^ btn_clear = this->Controls[L"clear"];
					 ((Button^)btn_clear)->PerformClick();
				 }
			 }
	private: System::Void ImageQuiz_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 // MessageBox::Show(System::Convert::ToString(e->KeyChar));
				 for (int i=0;i<14;i++)
				 {
					 Control^ curr_btn = this->Controls[System::Convert::ToString(100+i)];
					 if(curr_btn->Enabled == false)
					 {
						 continue;
					 }
					 if (((Button^)curr_btn)->Text == (System::Convert::ToString(e->KeyChar)->ToUpper()))
					 {
						 ((Button^)curr_btn)->PerformClick();
						 return;
					 }
				 }
			 }
	private: System::Void ImageQuiz_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				 //MessageBox::Show(System::Convert::ToString(e->KeyValue));
				 if (e->KeyValue == 8)
				 {
					 Control^ btn_back = this->Controls[L"back"];
					 ((Button^)btn_back)->PerformClick();
				 }
			 }
	private: System::Void btn_random_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Visible=false;
				 Random_letter();
			 }
	private: System::Void btn_selected_Click(System::Object^  sender, System::EventArgs^  e) {
				 for (int i=0;i<14;i++)
				 {
					 index_ans[i]=0;
				 }
				 panel1->Visible=false;
				 SelectedLetter();
			 }
	private: System::Void btn_extra_Click(System::Object^  sender, System::EventArgs^  e) {
				 for (int i=0;i<14;i++)
				 {
					 index_ans[i]=0;
				 }
				 panel1->Visible=false;
				 Remove_Extra_Letter();
			 }

	private: System::Void btn_solve_Click(System::Object^  sender, System::EventArgs^  e) {
				 panel1->Visible=false;
				 Solve();
			 }
	private: System::Void btn_solve_MouseHover(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.White;
				this->btn_solve->BackColor = System::Drawing::SystemColors::MenuHighlight;
			}
	private: System::Void btn_solve_MouseLeave(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.FromArgb(32, 38, 71); // ****add the color you want here.**
				this->btn_solve->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				panel1->Visible=false;
				int minus_val =0;
				lbl_points_to_be_gained_value->Text= System::Convert::ToString(minus_val);
				Solve();
			 }
			 //
			 	private: System::Void btn_selected_MouseHover(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.White;
				this->btn_selected->BackColor = System::Drawing::SystemColors::MenuHighlight;
			}
	private: System::Void btn_selected_MouseLeave(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.FromArgb(32, 38, 71); // ****add the color you want here.**
				this->btn_selected->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				for (int i=0;i<14;i++)
				{
					index_ans[i]=0;
				}
				panel1->Visible=false;
				int minus_val =System::Int64::Parse(lbl_points_to_be_gained_value->Text)-10;
				if(minus_val<0)
					minus_val=0;
				lbl_points_to_be_gained_value->Text= System::Convert::ToString(minus_val);
				SelectedLetter();
			}
			 //
			 	private: System::Void btn_extra_MouseHover(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.White;
				this->btn_extra->BackColor = System::Drawing::SystemColors::MenuHighlight;
				
			}
	private: System::Void btn_extra_MouseLeave(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.FromArgb(32, 38, 71); // ****add the color you want here.**
				this->btn_extra->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				for (int i=0;i<14;i++)
				{
					index_ans[i]=0;
				}
				panel1->Visible=false;
				int minus_val =System::Int64::Parse(lbl_points_to_be_gained_value->Text)-15;
				if(minus_val<0)
					minus_val=0;
				lbl_points_to_be_gained_value->Text= System::Convert::ToString(minus_val);
				Remove_Extra_Letter();
			 }
			 //
			 	private: System::Void btn_random_MouseHover(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.White;
				this->btn_random->BackColor = System::Drawing::SystemColors::MenuHighlight;
			}
	private: System::Void btn_random_MouseLeave(System::Object^ sender, System::EventArgs^ e){
				//shipdbutton.BackColor = Color.FromArgb(32, 38, 71); // ****add the color you want here.**
				 panel1->Visible=false;
				 int minus_val =System::Int64::Parse(lbl_points_to_be_gained_value->Text)-5;
				 if(minus_val<0)
					 minus_val=0;
				 lbl_points_to_be_gained_value->Text= System::Convert::ToString(minus_val);
				 Random_letter();
				 

				this->btn_random->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			}


private: System::Void btn_Back_to_Image_Quiz_Click(System::Object^  sender, System::EventArgs^  e) {
			 Image_Quiz_Display::Hide();
			 caller->Show();
		 }
private: System::Void btn_exit_hide_Click(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Visible=false;
		 }
private: System::Void btn_displayScore_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(sidepane == 0){
				this->ClientSize = System::Drawing::Size(988, 517);
				sidepane=1;
			 }else{
				this->ClientSize = System::Drawing::Size(751, 517);
				sidepane=0;
			 }
		 }
private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(sidepane == 0){
				this->ClientSize = System::Drawing::Size(988, 517);
				sidepane=1;
			 }else{
				this->ClientSize = System::Drawing::Size(751, 517);
				sidepane=0;
			 }
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(sidepane == 0){
				this->ClientSize = System::Drawing::Size(988, 517);
				sidepane=1;
			 }else{
				this->ClientSize = System::Drawing::Size(751, 517);
				sidepane=0;
			 }
		 }
};
}