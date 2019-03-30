#pragma once

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace System::IO;

	/// <summary>
	/// Summary for question_with_figure
	/// </summary>
	public ref class question_with_figure : public System::Windows::Forms::Form
	{
	public:
		String^ name;
	public:
		question_with_figure(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		 question_with_figure(String^ st, Form^ obj)
		{
			InitializeComponent();
			name=st;
			caller=obj;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~question_with_figure()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::RichTextBox^  richTextBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(question_with_figure::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox3 = (gcnew System::Windows::Forms::RichTextBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &question_with_figure::timer1_Tick);
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(13, 79);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(734, 132);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->richTextBox3);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(115, 46);
			this->panel3->Margin = System::Windows::Forms::Padding(2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(763, 223);
			this->panel3->TabIndex = 59;
			// 
			// richTextBox3
			// 
			this->richTextBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox3->Location = System::Drawing::Point(13, 12);
			this->richTextBox3->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox3->Name = L"richTextBox3";
			this->richTextBox3->ReadOnly = true;
			this->richTextBox3->Size = System::Drawing::Size(749, 62);
			this->richTextBox3->TabIndex = 0;
			this->richTextBox3->Text = L"";
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(13, 79);
			this->pictureBox6->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(734, 132);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox2->Location = System::Drawing::Point(13, 2);
			this->richTextBox2->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->ReadOnly = true;
			this->richTextBox2->Size = System::Drawing::Size(749, 62);
			this->richTextBox2->TabIndex = 0;
			this->richTextBox2->Text = L"";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(475, 600);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(121, 33);
			this->textBox1->TabIndex = 60;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &question_with_figure::textBox1_TextChanged);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->pictureBox6);
			this->panel2->Controls->Add(this->richTextBox2);
			this->panel2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel2->Location = System::Drawing::Point(68, 63);
			this->panel2->Margin = System::Windows::Forms::Padding(2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(763, 223);
			this->panel2->TabIndex = 58;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox3->Location = System::Drawing::Point(268, 371);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Padding = System::Windows::Forms::Padding(7);
			this->pictureBox3->Size = System::Drawing::Size(140, 154);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 57;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &question_with_figure::pictureBox3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox2->Location = System::Drawing::Point(81, 371);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Padding = System::Windows::Forms::Padding(7);
			this->pictureBox2->Size = System::Drawing::Size(140, 154);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 56;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &question_with_figure::pictureBox2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(725, 554);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 21);
			this->label5->TabIndex = 55;
			this->label5->Text = L"d)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(509, 554);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 21);
			this->label4->TabIndex = 53;
			this->label4->Text = L"c)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(319, 554);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 21);
			this->label3->TabIndex = 54;
			this->label3->Text = L"b)";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox5->Location = System::Drawing::Point(15, 11);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Padding = System::Windows::Forms::Padding(7);
			this->pictureBox5->Size = System::Drawing::Size(140, 154);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 50;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &question_with_figure::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->pictureBox4->Location = System::Drawing::Point(463, 371);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Padding = System::Windows::Forms::Padding(7);
			this->pictureBox4->Size = System::Drawing::Size(140, 154);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 51;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &question_with_figure::pictureBox4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 79);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(734, 132);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(136, 554);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 21);
			this->label2->TabIndex = 52;
			this->label2->Text = L"a)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(238, 46);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 21);
			this->label1->TabIndex = 49;
			this->label1->Text = L"0";
			this->label1->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Firebrick;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button3->Location = System::Drawing::Point(622, 5);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(102, 32);
			this->button3->TabIndex = 48;
			this->button3->Text = L"Next";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &question_with_figure::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Firebrick;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(741, 5);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(104, 32);
			this->button2->TabIndex = 47;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &question_with_figure::button2_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->richTextBox1);
			this->panel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(12, 80);
			this->panel1->Margin = System::Windows::Forms::Padding(2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(763, 223);
			this->panel1->TabIndex = 46;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->Location = System::Drawing::Point(13, 12);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(749, 62);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &question_with_figure::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1000;
			this->timer3->Tick += gcnew System::EventHandler(this, &question_with_figure::timer3_Tick);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(405, 9);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(32, 22);
			this->label6->TabIndex = 61;
			this->label6->Text = L"25";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(849, 324);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(17, 20);
			this->label7->TabIndex = 65;
			this->label7->Text = L"0";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(792, 324);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 64;
			this->label8->Text = L"Marks";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(144, 10);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 22);
			this->label9->TabIndex = 63;
			this->label9->Text = L"0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(24, 10);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 22);
			this->label10->TabIndex = 62;
			this->label10->Text = L"Your Score";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F));
			this->label11->Location = System::Drawing::Point(300, 603);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(158, 24);
			this->label11->TabIndex = 66;
			this->label11->Text = L"Your answer is ";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Location = System::Drawing::Point(65, 359);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(169, 179);
			this->panel4->TabIndex = 67;
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->pictureBox5);
			this->panel5->Location = System::Drawing::Point(643, 359);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(169, 179);
			this->panel5->TabIndex = 68;
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Location = System::Drawing::Point(449, 359);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(169, 179);
			this->panel6->TabIndex = 68;
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Location = System::Drawing::Point(255, 359);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(169, 179);
			this->panel7->TabIndex = 68;
			// 
			// question_with_figure
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(886, 673);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"question_with_figure";
			this->Text = L"question_with_figure";
			this->Load += gcnew System::EventHandler(this, &question_with_figure::question_with_figure_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		 int c,score,time,rowindb,z,timeleft,correctqs,y,marks,startime,len;
	   String^ ans;	   //original ans from database	 //stored as a),b),c) or d) in database
	   String^ urans;	//user choosen answer
	  	//op1 to 4 are string conting location of a picture(used as option) 
	   String^ op1;		  //op1 from datbase 
	   String^ op2;		   //op2 from datbase
	   String^ op3;		   //op3 from datbase
	   String^ op4;			//op3 from datbase
	   String^ date;		  //Todays date
	   String^ field;		   ///question_no_fig
	    String^ str;	
		  //		  picturebox2=image of option 1=op1
			 //			 picturebox3=image of option 2=op2
			 //		    picturebox4=image of option 3=op3
			 //			 picturebox5=image of option 4=op4
			   //panel1 contain picturebox1,richtextbox 1
		// panel2 contain picturebox6,richtextbox 2
		// panel3 contain picturebox7,richtextbox 3
#pragma endregion
		Form^ caller;
	private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //option figure 1..on click user choosen ans a
					 urans = "a)";
			if(urans != "" && ans!="")
			 {
				 if (urans == ans)
				 { textBox1->Text = "Right";	//if ans correct ...text box 1 show correct				
					correctqs++;		 //no of correct qs increasing
				  time+=25-timeleft;	 //time count
				 	  score=score+Convert::ToInt32(label7->Text);  //label6=score....,label7=marks of the next ....marks adding to user score
					  label9->Text=Convert::ToString(score);   //showing user score
					  timer2->Stop();		//timer2 stop(not so imp....not required)	
					 timeleft=25;	   //seting timeleft to 25 for next question
					 timer3->Start();	  //next question comes in 1 sec.
			 }
			else 
			{ textBox1->Text = "Wrong";	   //if ans wrong ...text box 1 show wromg	
				 time+=25-timeleft;			  //time count
				 timeleft=25;			 //seting timeleft to 25 for next question
				 timer3->Start();//add comment to stop slide question after giving wrong answer...}	   //next question comes in 1 sec.
			 }
		 }
			 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 	 urans = "b)";
				   if (urans != "" && ans!="")
			 {
				 if (urans == ans)
				 { textBox1->Text = "Right";					
					correctqs++;
				  time+=25-timeleft;
				 	  score=score+Convert::ToInt32(label7->Text);
					  label9->Text=Convert::ToString(score);
					  timer2->Stop();
					 timeleft=25;
					 timer3->Start();
			 }
			else 
			{ textBox1->Text = "Wrong";
				 time+=25-timeleft;
				 timeleft=25;
				 timer3->Start();//add comment to stop slide question after giving wrong answer...}
			 }
		 }
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			  urans = "c)";
			    if (urans != "" && ans!="")
			 {
				 if (urans == ans)
				 { textBox1->Text = "Right";					
					correctqs++;
				  time+=25-timeleft;
				 	  score=score+Convert::ToInt32(label7->Text);
					  label9->Text=Convert::ToString(score);
					  timer2->Stop();
					 timeleft=25;
					 timer3->Start();
			 }
			else 
			{ textBox1->Text = "Wrong";
				 time+=25-timeleft;
				 timeleft=25;
				 timer3->Start();//add comment to stop slide question after giving wrong answer...}
			 }
		 }
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			  urans = "d)";
			    if (urans != "" && ans!="")
			 {
				 if (urans == ans)
				 { textBox1->Text = "Right";					
					correctqs++;
				  time+=25-timeleft;
				 	  score=score+Convert::ToInt32(label7->Text);
					  label9->Text=Convert::ToString(score);
					  timer2->Stop();
					 timeleft=25;
					 timer3->Start();
			 }
			else 
			{ textBox1->Text = "Wrong";
				 time+=25-timeleft;
				 timeleft=25;
				 timer3->Start();//add comment to stop slide question after giving wrong answer...}
			 }
		 }
	 }

private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			  timeleft--;
			  //if user dont answer in given time....nxt question automatically appear...
			 label6->Text=Convert::ToString(timeleft);
			 if(timeleft==0)
			 {
				 timer2->Stop();
					time+=25-timeleft;
				  timer3->Start();	 
			 }
	 }

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 //nxt button
			label2->Visible = false;
			 label3->Visible = false;
			 label4->Visible = false;
			 label5->Visible = false;
			 panel1->Show();
			 panel2->Show();
			 panel3->Show();
			 button3->Hide();
			 timeleft=25;
			label6->Text="25";
			//removing all picture from picturebox and clearing ans questions
			 pictureBox2->Image = nullptr;
			 pictureBox3->Image = nullptr;
			 pictureBox4->Image = nullptr;
			 pictureBox5->Image = nullptr;
			 textBox1->Text = "";
				urans="";
			 ans = "";
			 z = int(this->Width - panel1->Width) / 2;
			 if(c>=rowindb)		//if user complete all question.............first question will appear.
				{ c=1;
			 go();
			 }
			 else
			{ c++;
			
			 try{
				 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ str = "SELECT * FROM fig_qs WHERE ID=" + c + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();
					 //questions along with option reading from db
				 if (reader->Read())
				 {		//option from database taking into variables
					 op1 = (String^)reader->GetString(1);
					 op2 = (String^)reader->GetString(2);
					 op3 = (String^)reader->GetString(3);
					 op4 = (String^)reader->GetString(4);
					 ans = (String^)reader->GetString(5);
					 marks= reader->GetInt32(8);
					 //setting question and question image in pictuebox and rich textbox
					 if (c % 3 == 1)
					 {
						  
						 pictureBox1->ImageLocation = (String^)reader->GetString(7);
						 richTextBox1->Text = (String^)reader->GetString(6);
						 /*panel1->Left = this->Width;
						 panel2->Left = -panel1->Width;*/

					 }

					 if (c % 3 == 0)
					 {

						 pictureBox7->ImageLocation = (String^)reader->GetString(7);
						 richTextBox3->Text = (String^)reader->GetString(6);
						/* panel3->Left = this->Width;
						 panel1->Left = -panel1->Width;*/

					 }
					 if (c % 3 == 2)
					 {

						 pictureBox6->ImageLocation = (String^)reader->GetString(7);
						 richTextBox2->Text = (String^)reader->GetString(6);
						/* panel2->Left = this->Width;
						 panel3->Left = -panel1->Width;*/

					 }

				 }
				 dbcon->Close();
			 }

			 catch (Exception ^ ex) {
				 MessageBox::Show(ex->Message);
			 }
			 timer1->Start(); }
			  label1->Text = Convert::ToString(c);
}
		 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {  //Exit button
			  save();	 						 ///saving ur record before exit
				this->Close();
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			

			 		 if (c % 3 == 0)
			 {			   //panel3 sliding from right and stops when reach postion z;
				 if (panel3->Left <= z)
				 {
					 timer1->Stop();
					 button3->Show();
					   timer2->Start();
					 panel1->Left = this->Width;
					 panel2->Left = len;
					 panel1->Hide();
					 panel2->Hide();
					 pictureBox2->ImageLocation = op1;
					 pictureBox3->ImageLocation = op2;
					 pictureBox4->ImageLocation = op3;
					 pictureBox5->ImageLocation = op4;
					 label2->Visible = true;
					 label3->Visible = true;
					 label4->Visible = true;
					 label5->Visible = true;

				 }
				 else
				 {
					 panel1->Left -= 20;
					 panel2->Left -= 20;
					 panel3->Left -= 20;

				 }
			 }
			 if (c % 3 == 1)
			 {	      //panel1 sliding from right and stops when reach postion z;
				 if (panel1->Left <= z)
				 {
					 timer1->Stop();
					 button3->Show();					
					 panel2->Left = this->Width;
					 panel3->Left = len;
					 panel3->Hide();
					 panel2->Hide();
					 pictureBox2->ImageLocation = op1;
					 pictureBox3->ImageLocation = op2;
					 pictureBox4->ImageLocation = op3;
					 pictureBox5->ImageLocation = op4;
					 label2->Visible = true;
					 label3->Visible = true;
					 label4->Visible = true;
					 label5->Visible = true;
					   timer2->Start();

				 }
				 else
				 {
					 panel1->Left -= 20;
					 panel2->Left -= 20;
					 panel3->Left -= 20;

				 }
			 }
			 if (c % 3 == 2)
			 {		    //panel2 sliding from right and stops when reach postion z;
				 if (panel2->Left <= z)
				 {
					 timer1->Stop();
					 button3->Show();
					 panel3->Left = this->Width;
					 panel1->Left = len;
					 panel3->Hide();
					 panel1->Hide();
					 pictureBox2->ImageLocation = op1;
					 pictureBox3->ImageLocation = op2;
					 pictureBox4->ImageLocation = op3;
					 pictureBox5->ImageLocation = op4;
					 label2->Visible = true;
					 label3->Visible = true;
					 label4->Visible = true;
					 label5->Visible = true;
					   timer2->Start();
				 }
				 else
				 {
					 panel1->Left -= 20;
					 panel2->Left -= 20;
					 panel3->Left -= 20;

				 }
			 }
			 
			 if (c <= 1)
			 {
				 c = 1;
				 label1->Text = "1";
				
			 }
		 }

 private:System::Void go(){
			 //load question option from database id =c....
			 //showing them in the picturebox described above
			button3->Show();
			panel1->Show();
			panel2->Show();
			panel3->Show();
			try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ str = "SELECT * FROM fig_qs WHERE ID=" + c + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 if (reader->Read())
					 {
					// pictureBox1->ImageLocation = (String^)reader->GetString(7);
					 pictureBox2->ImageLocation = (String^)reader->GetString(1);
					 pictureBox3->ImageLocation = (String^)reader->GetString(2);
					 pictureBox4->ImageLocation = (String^)reader->GetString(3);
					 pictureBox5->ImageLocation = (String^)reader->GetString(4);
					  ans = (String^)reader->GetString(5);
					 label7->Text=  Convert::ToString(reader->GetInt32(8));
						 {
					 if(c%3==1)
									{ pictureBox1->ImageLocation = (String^)reader->GetString(7);
									richTextBox1->Text = (String^)reader->GetString(6);
									panel1->Left = z;
									panel3->Left = -panel1->Width;
									  panel2->Left = this->Width;
									  panel2->Hide();
									  panel3->Hide();
									  timer2->Start();	
									}
					 if(c%3==0)
							  {
								   
								 pictureBox7->ImageLocation = (String^)reader->GetString(7);
						 richTextBox3->Text = (String^)reader->GetString(6);
							
								 panel2->Left = -panel1->Width;
								panel1->Left = this->Width;
								panel3->Left=z;
								 panel2->Hide();
									  panel1->Hide();
									  
									  timer2->Start();
								
							  }
							  if(c%3==2)
							  {			  
								    pictureBox6->ImageLocation = (String^)reader->GetString(7);
						 richTextBox2->Text = (String^)reader->GetString(6);
									 panel3->Left = this->Width;
									panel1->Left = -panel1->Width;
									panel2->Left =z;
									 panel1->Hide();
									  panel3->Hide();
									 
									  timer2->Start();
								
							  }
						 }

					 }
					 dbcon->Close();
				 }

				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
}
private: System::Void question_with_figure_Load(System::Object^  sender, System::EventArgs^  e) {
			 field="No figure questions";
			 date=Convert::ToString(DateTime::Now);
			 urans="";
			len=-panel1->Width;//length
			 timeleft=25;  //timeleft initialized.....
			 //adjusting control position
			 //button2->Left = this->Width - 150;
			 //button3->Left = this->Width - 150;
			 panel1->Top = 90;
			 panel2->Top = 90;
			 panel3->Top = 90;
			 //button2->Top=30;
			 //button3->Top=60;
			 //initialized variable...
			 z = int(this->Width - panel1->Width) / 2;
			   time=0;
			   score=0;
			   correctqs=0;

			rowindb = 0;
				try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					
					 String ^ str = "SELECT * FROM register_table WHERE name='"+name+"';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 if(reader->Read())
					 {
						y=reader->GetInt32(3); //y=how much question user read ..(it is stored in database in save function)
					 }
					 dbcon->Close();
					 
				 }
				catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
			
				
				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					  //counting no of rows in the databse
					 String ^ str = "SELECT * FROM fig_qs ";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(str, dbcon);
					 dbcon->Open();
					 OleDbDataReader^ reader;
					 reader = command->ExecuteReader();

					 while(reader->Read())
					 {
						 rowindb++;
					 }
					 dbcon->Close();
				 }

				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 label9->Text=Convert::ToString(score);	/////////////////////////////////////////////////////////////////////////////
				 

					c=y;  //////showing the question using go function
					go();
				
		 }

private: System::Void save()
		 {
			 c++;
			 if(c>rowindb)
				 c=1;
			   /*
			   saving ....

			   	name
				field,
				total win=correcctly done question 
				start time=date+time
			   	 total score and time spent in database
			   
			   */
		  try{
					
			  OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;" ;
 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand("Insert into identifying_shape_prograss (name,field_name,start_time,total_score,total_win,time_spent) values('"+name+"','"+field+"','"+date+"','"+score+"','"+correctqs+"','"+time+"') ;", dbcon);		
			
					 dbcon->Open();
					
					 command->ExecuteNonQuery();
					 
					 dbcon->Close();
					 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }


				 try{
					 OleDbConnection^ dbcon = gcnew OleDbConnection();
					 dbcon->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
						//storing how much question user read ....in database
					// String ^ str = "UPDATE register_table SET time_taken_no_fig_question='"+time+"' ,score_no_figure ='"+score+"' ,total_done_nofig='"+c+"' ,nofig_correct='"+correctqs+"' WHERE name = " +name+ "; ";
				 str = "UPDATE register_table SET figureqs_read='"+c+"' WHERE name ='"+name+"';";					
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand();
					 command->CommandType = CommandType::Text;
					 command->CommandText = str;
					 command->Connection = dbcon;
					
					 dbcon->Open();
					
					 command->ExecuteNonQuery();
					 
					 dbcon->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
			 //str="Insert into identifying_shape_prograss (name,field_name,start_time,total_score,total_win) values('"+name+"','"+field+"','"+score+"','"+correctqs"')";
		 }


private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {

			  timer3->Stop();
			   button3_Click(sender, e)	   ;  //calling next
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
