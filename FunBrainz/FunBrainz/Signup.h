#pragma once
#include "Homepage.h"
#using <system.dll>
#include "regex"
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;
	/// <summary>
	/// Summary for Signup
	/// </summary>
	public ref class Signup : public System::Windows::Forms::Form
	{
		Form ^ obj;
	public:
		Signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Signup(Form ^ obj1)
		{
			obj=obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Signup()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label9;
	protected: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  Emailtxt;
	private: System::Windows::Forms::TextBox^  Mobiletxt;


	private: System::Windows::Forms::TextBox^  Classtxt;
	private: System::Windows::Forms::TextBox^  LastNametxt;
	private: System::Windows::Forms::TextBox^  FirstNametxt;
	private: System::Windows::Forms::TextBox^  Passwordtxt;
	private: System::Windows::Forms::TextBox^  UserNametxt;
	private: System::Windows::Forms::Button^  Signupbtn;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  Gendertxt;
	private: System::Windows::Forms::DateTimePicker^  DOBtxt;
	private: System::Windows::Forms::TextBox^  Schooltxt;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::ComboBox^  Questiontxt;


	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  Answertxt;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  GuardiansLastNametxt;
	private: System::Windows::Forms::TextBox^  GuardiansFirstNametxt;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Signup::typeid));
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Emailtxt = (gcnew System::Windows::Forms::TextBox());
			this->Mobiletxt = (gcnew System::Windows::Forms::TextBox());
			this->Classtxt = (gcnew System::Windows::Forms::TextBox());
			this->LastNametxt = (gcnew System::Windows::Forms::TextBox());
			this->FirstNametxt = (gcnew System::Windows::Forms::TextBox());
			this->Passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->UserNametxt = (gcnew System::Windows::Forms::TextBox());
			this->Signupbtn = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Gendertxt = (gcnew System::Windows::Forms::ComboBox());
			this->DOBtxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->Schooltxt = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->Questiontxt = (gcnew System::Windows::Forms::ComboBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Answertxt = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->GuardiansLastNametxt = (gcnew System::Windows::Forms::TextBox());
			this->GuardiansFirstNametxt = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(193, 200);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(72, 21);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Email ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(518, 177);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(129, 21);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Mobile Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(596, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(49, 21);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(575, 151);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(70, 21);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(538, 122);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 21);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Date of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(171, 174);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(93, 21);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(173, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 21);
			this->label3->TabIndex = 15;
			this->label3->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(183, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 21);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(171, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 21);
			this->label1->TabIndex = 17;
			this->label1->Text = L"User Name";
			// 
			// Emailtxt
			// 
			this->Emailtxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Emailtxt->Location = System::Drawing::Point(284, 197);
			this->Emailtxt->Name = L"Emailtxt";
			this->Emailtxt->Size = System::Drawing::Size(149, 23);
			this->Emailtxt->TabIndex = 8;
			// 
			// Mobiletxt
			// 
			this->Mobiletxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Mobiletxt->Location = System::Drawing::Point(683, 179);
			this->Mobiletxt->Name = L"Mobiletxt";
			this->Mobiletxt->Size = System::Drawing::Size(149, 23);
			this->Mobiletxt->TabIndex = 7;
			// 
			// Classtxt
			// 
			this->Classtxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Classtxt->Location = System::Drawing::Point(683, 94);
			this->Classtxt->Name = L"Classtxt";
			this->Classtxt->Size = System::Drawing::Size(149, 23);
			this->Classtxt->TabIndex = 4;
			// 
			// LastNametxt
			// 
			this->LastNametxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LastNametxt->Location = System::Drawing::Point(284, 171);
			this->LastNametxt->Name = L"LastNametxt";
			this->LastNametxt->Size = System::Drawing::Size(149, 23);
			this->LastNametxt->TabIndex = 3;
			// 
			// FirstNametxt
			// 
			this->FirstNametxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->FirstNametxt->Location = System::Drawing::Point(284, 145);
			this->FirstNametxt->Name = L"FirstNametxt";
			this->FirstNametxt->Size = System::Drawing::Size(149, 23);
			this->FirstNametxt->TabIndex = 2;
			this->FirstNametxt->TextChanged += gcnew System::EventHandler(this, &Signup::FirstNametxt_TextChanged);
			// 
			// Passwordtxt
			// 
			this->Passwordtxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Passwordtxt->Location = System::Drawing::Point(284, 119);
			this->Passwordtxt->Name = L"Passwordtxt";
			this->Passwordtxt->Size = System::Drawing::Size(149, 23);
			this->Passwordtxt->TabIndex = 1;
			// 
			// UserNametxt
			// 
			this->UserNametxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->UserNametxt->Location = System::Drawing::Point(284, 93);
			this->UserNametxt->Name = L"UserNametxt";
			this->UserNametxt->Size = System::Drawing::Size(149, 23);
			this->UserNametxt->TabIndex = 0;
			// 
			// Signupbtn
			// 
			this->Signupbtn->BackColor = System::Drawing::Color::OliveDrab;
			this->Signupbtn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Signupbtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Signupbtn->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Signupbtn->Location = System::Drawing::Point(512, 439);
			this->Signupbtn->Name = L"Signupbtn";
			this->Signupbtn->Size = System::Drawing::Size(114, 39);
			this->Signupbtn->TabIndex = 14;
			this->Signupbtn->Text = L"Sign Up";
			this->Signupbtn->UseVisualStyleBackColor = false;
			this->Signupbtn->Click += gcnew System::EventHandler(this, &Signup::Signupbtn_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::OliveDrab;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(347, 439);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(114, 39);
			this->button2->TabIndex = 15;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Signup::button2_Click);
			// 
			// Gendertxt
			// 
			this->Gendertxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Gendertxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Gendertxt->FormattingEnabled = true;
			this->Gendertxt->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Others"});
			this->Gendertxt->Location = System::Drawing::Point(683, 150);
			this->Gendertxt->Margin = System::Windows::Forms::Padding(2);
			this->Gendertxt->Name = L"Gendertxt";
			this->Gendertxt->Size = System::Drawing::Size(149, 25);
			this->Gendertxt->TabIndex = 6;
			// 
			// DOBtxt
			// 
			this->DOBtxt->CustomFormat = L"dd-mm-yyyy";
			this->DOBtxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->DOBtxt->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOBtxt->Location = System::Drawing::Point(683, 121);
			this->DOBtxt->Margin = System::Windows::Forms::Padding(2);
			this->DOBtxt->MinDate = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			this->DOBtxt->Name = L"DOBtxt";
			this->DOBtxt->Size = System::Drawing::Size(149, 23);
			this->DOBtxt->TabIndex = 5;
			// 
			// Schooltxt
			// 
			this->Schooltxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Schooltxt->Location = System::Drawing::Point(683, 204);
			this->Schooltxt->Name = L"Schooltxt";
			this->Schooltxt->Size = System::Drawing::Size(149, 23);
			this->Schooltxt->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(532, 203);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(113, 21);
			this->label10->TabIndex = 28;
			this->label10->Text = L"School Name";
			// 
			// Questiontxt
			// 
			this->Questiontxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Questiontxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Questiontxt->FormattingEnabled = true;
			this->Questiontxt->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"Favourite book", L"Favourite food", L"Favourite teacher", 
				L"Favourite colour", L"birth place"});
			this->Questiontxt->Location = System::Drawing::Point(284, 322);
			this->Questiontxt->Name = L"Questiontxt";
			this->Questiontxt->Size = System::Drawing::Size(149, 25);
			this->Questiontxt->TabIndex = 10;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(131, 353);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(133, 21);
			this->label12->TabIndex = 36;
			this->label12->Text = L"Security Answer";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(119, 325);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(145, 21);
			this->label11->TabIndex = 35;
			this->label11->Text = L"Security Question";
			// 
			// Answertxt
			// 
			this->Answertxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Answertxt->Location = System::Drawing::Point(284, 350);
			this->Answertxt->Name = L"Answertxt";
			this->Answertxt->Size = System::Drawing::Size(149, 23);
			this->Answertxt->TabIndex = 11;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(552, 352);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(93, 21);
			this->label14->TabIndex = 45;
			this->label14->Text = L"Last Name";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(554, 325);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(91, 21);
			this->label13->TabIndex = 44;
			this->label13->Text = L"First Name";
			// 
			// GuardiansLastNametxt
			// 
			this->GuardiansLastNametxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GuardiansLastNametxt->Location = System::Drawing::Point(683, 353);
			this->GuardiansLastNametxt->Margin = System::Windows::Forms::Padding(2);
			this->GuardiansLastNametxt->Name = L"GuardiansLastNametxt";
			this->GuardiansLastNametxt->Size = System::Drawing::Size(149, 23);
			this->GuardiansLastNametxt->TabIndex = 13;
			// 
			// GuardiansFirstNametxt
			// 
			this->GuardiansFirstNametxt->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->GuardiansFirstNametxt->Location = System::Drawing::Point(683, 326);
			this->GuardiansFirstNametxt->Margin = System::Windows::Forms::Padding(2);
			this->GuardiansFirstNametxt->Name = L"GuardiansFirstNametxt";
			this->GuardiansFirstNametxt->Size = System::Drawing::Size(149, 23);
			this->GuardiansFirstNametxt->TabIndex = 12;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(56, 46);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(105, 21);
			this->label15->TabIndex = 46;
			this->label15->Text = L"Basic Details";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(513, 280);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(141, 21);
			this->label16->TabIndex = 47;
			this->label16->Text = L"Guardian Details";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(34, 280);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(127, 21);
			this->label17->TabIndex = 48;
			this->label17->Text = L"Security Details";
			this->label17->Click += gcnew System::EventHandler(this, &Signup::label17_Click);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(542, 46);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(112, 21);
			this->label18->TabIndex = 49;
			this->label18->Text = L"Other Details";
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1008, 729);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->GuardiansLastNametxt);
			this->Controls->Add(this->GuardiansFirstNametxt);
			this->Controls->Add(this->Questiontxt);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->Answertxt);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->Schooltxt);
			this->Controls->Add(this->DOBtxt);
			this->Controls->Add(this->Gendertxt);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Emailtxt);
			this->Controls->Add(this->Mobiletxt);
			this->Controls->Add(this->Classtxt);
			this->Controls->Add(this->LastNametxt);
			this->Controls->Add(this->FirstNametxt);
			this->Controls->Add(this->Passwordtxt);
			this->Controls->Add(this->UserNametxt);
			this->Controls->Add(this->Signupbtn);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Signup";
			this->Text = L"la";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		static OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
	private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) 
			 {

				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

				 time_t now = time(0);
				 tm *ltm = localtime(&now);
				 int year = 1900 + ltm->tm_year;
				 int month = 1 + ltm->tm_mon;
				 int date = ltm->tm_mday;
				 DOBtxt->Value = DateTime(year, month, date);
				 DOBtxt->MaxDate = DateTime(year, month, date);
			 }


	private : System::Boolean uservalidate ( String ^ s )
			  {


				  Boolean  flag= true;
				  if(!userdatavalidate(s)) 
				  {
					  MessageBox::Show("enter valid  username");
					  return false;
				  }

				  String ^ Sql = "SELECT * FROM  Students WHERE UserName = '" + UserNametxt->Text + "' ";
				  OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
				  con->Open();
				  try{
					  OleDb::OleDbDataReader ^ reader=command->ExecuteReader();
					  if(reader->HasRows)  flag=false;
					  con->Close();
				  }
				  catch(Exception ^ ex)
				  {
					  con->Close();
					  //Box::Show(ex->Message);
					  return false;
				  }
				  if(!flag) {MessageBox::Show("user name already taken");}
				  return flag;


			  }

			  //datavalidation part
	private : System::Boolean userdatavalidate ( String ^ s )
			  {
				  if(s=="") return false;
				  for (int i = 0; i < s->Length; i++)
				  {
					  if (!(s[i] >='0' && s[i] <='9'||s[i] >='a' && s[i] <='z'||s[i] >='A' && s[i] <='Z'||s[i] == '!'||s[i] == '@'||s[i] == '#'||s[i] == '$'||s[i] == '%'||s[i] == '^'||s[i] == '&'||s[i] == '*')) return false;
				  }
				  return true;
			  }

	private : System::Boolean classvalidate ( String ^ s )
			  {
				  if(s=="") return false;
				  if (s->Length >= 3 || s->Length == 0) return false;
				  if (!(s->ToUpper() == s->ToLower()))  return false;
				  for (int i = 0; i < s->Length; i++)
				  {
					  if (!(s[i] >='0' && s[i] <='9')) return false;
				  }
				  int l = Convert::ToInt32(s);
				  if (l >= 11) return false;
				  return true;

			  }
	private : System::Boolean Mobilevalidate ( String ^ s )
			  {
				  if(s=="") return false;
				  if (!(s->Length == 10)) return false;
				  for (int  i = 0; i < s->Length; i++)
				  {
					  if (!(s[i] >= '0' && s[i] <= '9')) return false;
				  }
				  return true;
			  }
	private : System::Boolean Emailvalidate ( String ^ s )
			  {

				  if(s=="") return false;


				  Regex^ emailregex = gcnew Regex("(?<user>[^@]+)@(?<host>.+)");


				  Match^ m = emailregex->Match(s);

				  if (m->Success)
				  {
					  return true;
				  }
				  else
					  return false;
			  }
	private: System::Boolean namevalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 for (int i = 0; i < s->Length; i++)
				 {
					 if (!( (s[i] >= 'a'&&s[i] <= 'z') || s[i]==' ')) return false;
				 }
				 return true;
			 }
	private: System::Boolean gendervalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }
	private: System::Boolean Schoolvalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }
	private: System::Boolean Questionvalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }
	private: System::Boolean Answervalidate(String ^ s)
			 {
				 s = s->ToLower();
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 if(s=="") return false;
				 return true;
			 }

	private: System::Boolean Passwordvalidate(String ^ s)
			 {

				 if(s=="") return false;
				 if(s->Length<6||s->Length>15) return false;
				 return true;
			 }

	private: System::String ^ updatetext(String ^ s)
			 {
				 s = s->TrimEnd(' ');
				 s = s->TrimStart(' ');
				 return s;
			 }
	private: System::Boolean  datavalid()
			 {


				 UserNametxt->Text=updatetext(UserNametxt->Text);
				 Classtxt->Text=updatetext(Classtxt->Text);
				 Mobiletxt->Text=updatetext(Mobiletxt->Text);
				 Emailtxt->Text=updatetext(Emailtxt->Text);
				 FirstNametxt->Text=updatetext(FirstNametxt->Text);
				 LastNametxt->Text=updatetext(LastNametxt->Text);
				 Schooltxt->Text=updatetext(Schooltxt->Text);
				 Questiontxt->Text=updatetext(Questiontxt->Text);
				 Answertxt->Text=updatetext(Answertxt->Text);

				 if(!uservalidate(UserNametxt->Text))  return false ;
				 if(!Passwordvalidate(Passwordtxt->Text)) {MessageBox::Show("Password Should be Atleast 6 characters  And at max 15 characters");return false;}
				 if(!namevalidate(FirstNametxt->Text))   {MessageBox::Show("enter valid FirstName and FirstName Should be Lessthan 20 characters ");return false;}
				 if(!namevalidate(LastNametxt->Text))   {MessageBox::Show("enter valid LastName and  LastName Should be Lessthan 20 characters");return false;}
				 if(!Emailvalidate(Emailtxt->Text))  {MessageBox::Show("enter valid Email");return false;}
				 if(!classvalidate(Classtxt->Text))  {MessageBox::Show("enter valid class between 1-10");return false;}
				 if(!gendervalidate(Gendertxt->Text)) {MessageBox::Show("enter Gender");return false;}
				 if(!Mobilevalidate(Mobiletxt->Text)) {MessageBox::Show("enter valid Mobile Number");return false ;}
				 
				 if(!Schoolvalidate(Schooltxt->Text))  {MessageBox::Show("enter valid School Name");return false;}
				 if(!Questionvalidate(Questiontxt->Text))  {MessageBox::Show("select Sequrity Question ");return false;}
				 if(!Answervalidate(Answertxt->Text))  {MessageBox::Show("enter Answer");return false;}
				 
				 if(!namevalidate(GuardiansFirstNametxt->Text))   {MessageBox::Show("enter valid GuardiansFirstName and  GuardiansFirstName Should be Lessthan 20 characters");return false;}
				 if(!namevalidate(GuardiansLastNametxt->Text))   {MessageBox::Show("enter valid GuardiansLastName and  GuardiansLastName Should be Lessthan 20 characters");return false;}
				 return true;
			 }

	private: System::Void  msgx(String ^ s)
			 {
				 MessageBox::Show(s);
			 }


	private: System::Void Signupbtn_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 DateTime ^ var = DOBtxt->Value;
				 String ^  strDate = var->ToString("dd-MM-yyyy");
				 if(!datavalid()) { return;}
				 //Box::Show("correct data");
				 try{

					 con->Open();
					 String ^ access1 = "insert into Students ([UserName],[Password],[FirstName],[LastName],[Class],[DateOfBirth],[Gender],[MobileNumber],[Email],[School Name],[Securityquestion],[answer],[GuardiansFirstName],[GuardiansLastName]) values('" + UserNametxt->Text + "','" + Passwordtxt->Text + "','" + FirstNametxt->Text + "','" + LastNametxt->Text + "','" + Classtxt->Text + "','" + strDate + "','" + Gendertxt->Text + "','"+ Mobiletxt->Text + "','"+ Emailtxt->Text + "','"+ Schooltxt->Text +"','" + Questiontxt->Text + "','" + Answertxt->Text + "','" + GuardiansFirstNametxt->Text + "','" + GuardiansLastNametxt->Text + "')";	 
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 MessageBox::Show("Succefully Added");
					 con->Close();

					 access1 = "Select [StudentID] from Students where UserName = '" + UserNametxt->Text  +"';";
					 //MessageBox::Show(access1);

					 command = gcnew OleDb::OleDbCommand(access1, con);
					 con->Open();
					 int id = (int) command->ExecuteScalar();
					 con->Close();


					 con->Open();
					 access1 = "insert into [2048_Game] ([StudentID],[Max_Score],[Number_of_Times_Played],[Scores]) values(" + id+ "," + 0+ "," + 0 + " , ',' );";	
					 //MessageBox::Show(access1);
					 command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 con->Close();


					 con->Open();
					 access1 = "insert into [Cricket] ([StudentID],[TimesPlayed],[CorrectAnswers],[IncorrectAnswers],[Level]) values(" + id+ "," + 0+","+0 + "," + 0 + "," + 1+");";	
					 //MessageBox::Show(access1);
					 command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 con->Close();

					 con->Open();
					 access1 = "insert into [operatorFilling] ([Student_Id],[Score] ) values(" + id+ "," + "0"+ ");";	
					 //MessageBox::Show(access1);
					 command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 con->Close();

					 con->Open();
					 access1 = "insert into [Pipeline_Scoring] ([StudentID] ,[Levels_Completed_Easy],[Levels_Completed_Medium],[Levels_Completed_Hard],[Levels_Completed_Advanced],[Levels_Completed_Expert],[Score_Easy],[Score_Medium],[Score_Hard],[Score_Adavnced],[Score_Expert]) values("+id+",0,0,0,0,0,',',',',',',',',',');";	
					 //MessageBox::Show(access1);
					 command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 con->Close();

					 array<System::String ^>^ s = gcnew array<System::String ^> {"Animals", "Bird", "Flag","Sports","Vegetable","Landmark","Fruit","Flower","Objects"} ;

					 for(int i=0;i<9;i++)
					 {
						 con->Open();
						 access1 = "insert into [Image_Quiz] ([StudentID],[Domain] ,[Max_Score],[Levels_Completed_Easy],[Levels_Completed_Medium],[Levels_Completed_Hard],[Total_Score]) values(" + id+ ",'" + s[i] +"',0,0,0,0,0);";	
						 //MessageBox::Show(access1);
						 command = gcnew OleDb::OleDbCommand(access1, con);
						 command->ExecuteNonQuery();
						 con->Close();
					 }

					 con->Open();
					 access1 = "insert into [register_table] ([name] ,[figureqs_read],[nofigqs_read]) values('" +UserNametxt->Text+"',"+1+", "+ 1 +");";	
					 //MessageBox::Show(access1);
					 command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 con->Close();

					 con->Open();
					 access1 = "insert into [Abacus] ([StudentID],[addition],[subtraction],[multiplication],[division]) values(" + id+ "," + 0+","+0 + "," + 0 + "," + 0+");";	
					 //MessageBox::Show(access1);
					 command = gcnew OleDb::OleDbCommand(access1, con);
					 command->ExecuteNonQuery();
					 con->Close();

					 Homepage ^ f3 = gcnew Homepage(obj);
					 this->Hide();
					 f3->user = UserNametxt->Text;
					 f3->ShowDialog();
				 }
				 catch (Exception ^ ex)
				 {
					 con->Close();
					 //Box::Show(ex->Message);
				 }

			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 obj->Show();
				 this->Hide();
			 }
	private: System::Void FirstNametxt_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void label17_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}
