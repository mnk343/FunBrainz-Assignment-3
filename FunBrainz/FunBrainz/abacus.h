#pragma once
#include<random>

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for abacus
	/// </summary>
	public ref class abacus : public System::Windows::Forms::Form
	{
	public:
		abacus(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~abacus()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox2;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox19;




	private: System::Windows::Forms::Panel^  panel1;

	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  pictureBox65;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;





private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::PictureBox^  pictureBox1;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::Panel^  panel2;




private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Panel^  panel3;

private: System::Windows::Forms::TextBox^  output;

private: System::Windows::Forms::TextBox^  op2;


private: System::Windows::Forms::TextBox^  op0;
private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Button^  button10;
private: System::Windows::Forms::Button^  button12;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button11;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button9;
private: System::Windows::Forms::Button^  button7;
private: System::Windows::Forms::Button^  button8;
private: System::Windows::Forms::TextBox^  op1;
private: System::Windows::Forms::TextBox^  operation;
private: System::Windows::Forms::Button^  BACK;
private: System::Windows::Forms::Button^  div;
private: System::Windows::Forms::Button^  sub;
private: System::Windows::Forms::Button^  mul;
private: System::Windows::Forms::Button^  button;

private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button6;

private: System::ComponentModel::IContainer^  components;































































	protected: 





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(abacus::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->sub = (gcnew System::Windows::Forms::Button());
			this->mul = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->operation = (gcnew System::Windows::Forms::TextBox());
			this->op1 = (gcnew System::Windows::Forms::TextBox());
			this->output = (gcnew System::Windows::Forms::TextBox());
			this->op2 = (gcnew System::Windows::Forms::TextBox());
			this->op0 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->BACK = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox2->Location = System::Drawing::Point(22, 121);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(10, 362);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::Purple;
			this->textBox3->Location = System::Drawing::Point(1086, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(10, 362);
			this->textBox3->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Purple;
			this->textBox4->Location = System::Drawing::Point(412, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(10, 362);
			this->textBox4->TabIndex = 3;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Purple;
			this->textBox5->Location = System::Drawing::Point(327, 127);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(10, 362);
			this->textBox5->TabIndex = 4;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::Purple;
			this->textBox6->Location = System::Drawing::Point(498, 126);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(10, 362);
			this->textBox6->TabIndex = 5;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &abacus::textBox6_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::Purple;
			this->textBox7->Location = System::Drawing::Point(241, 127);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(10, 362);
			this->textBox7->TabIndex = 6;
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Purple;
			this->textBox8->Location = System::Drawing::Point(157, 127);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(10, 362);
			this->textBox8->TabIndex = 7;
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::Purple;
			this->textBox9->Location = System::Drawing::Point(74, 127);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(10, 362);
			this->textBox9->TabIndex = 8;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox10->Location = System::Drawing::Point(21, 115);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(1130, 12);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &abacus::textBox10_TextChanged);
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::Purple;
			this->textBox11->Location = System::Drawing::Point(582, 126);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(10, 362);
			this->textBox11->TabIndex = 10;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::Purple;
			this->textBox13->Location = System::Drawing::Point(918, 126);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(10, 362);
			this->textBox13->TabIndex = 12;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::Purple;
			this->textBox14->Location = System::Drawing::Point(748, 126);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(10, 362);
			this->textBox14->TabIndex = 13;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::Purple;
			this->textBox15->Location = System::Drawing::Point(665, 126);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(10, 362);
			this->textBox15->TabIndex = 14;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::Purple;
			this->textBox16->Location = System::Drawing::Point(1002, 126);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(10, 362);
			this->textBox16->TabIndex = 15;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::Purple;
			this->textBox17->Location = System::Drawing::Point(833, 126);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(10, 362);
			this->textBox17->TabIndex = 16;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox18->Location = System::Drawing::Point(1140, 125);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(10, 362);
			this->textBox18->TabIndex = 17;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox12->Location = System::Drawing::Point(29, 211);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(1113, 13);
			this->textBox12->TabIndex = 18;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)), 
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->textBox19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 3, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox19->Location = System::Drawing::Point(21, 477);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(1130, 12);
			this->textBox19->TabIndex = 19;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox61);
			this->panel1->Controls->Add(this->pictureBox62);
			this->panel1->Controls->Add(this->pictureBox63);
			this->panel1->Controls->Add(this->pictureBox64);
			this->panel1->Controls->Add(this->pictureBox65);
			this->panel1->Controls->Add(this->pictureBox56);
			this->panel1->Controls->Add(this->pictureBox57);
			this->panel1->Controls->Add(this->pictureBox58);
			this->panel1->Controls->Add(this->pictureBox59);
			this->panel1->Controls->Add(this->pictureBox60);
			this->panel1->Controls->Add(this->pictureBox51);
			this->panel1->Controls->Add(this->pictureBox52);
			this->panel1->Controls->Add(this->pictureBox53);
			this->panel1->Controls->Add(this->pictureBox54);
			this->panel1->Controls->Add(this->pictureBox55);
			this->panel1->Controls->Add(this->pictureBox46);
			this->panel1->Controls->Add(this->pictureBox47);
			this->panel1->Controls->Add(this->pictureBox48);
			this->panel1->Controls->Add(this->pictureBox49);
			this->panel1->Controls->Add(this->pictureBox50);
			this->panel1->Controls->Add(this->pictureBox41);
			this->panel1->Controls->Add(this->pictureBox42);
			this->panel1->Controls->Add(this->pictureBox43);
			this->panel1->Controls->Add(this->pictureBox44);
			this->panel1->Controls->Add(this->pictureBox45);
			this->panel1->Controls->Add(this->pictureBox36);
			this->panel1->Controls->Add(this->pictureBox37);
			this->panel1->Controls->Add(this->pictureBox38);
			this->panel1->Controls->Add(this->pictureBox39);
			this->panel1->Controls->Add(this->pictureBox40);
			this->panel1->Controls->Add(this->pictureBox31);
			this->panel1->Controls->Add(this->pictureBox32);
			this->panel1->Controls->Add(this->pictureBox33);
			this->panel1->Controls->Add(this->pictureBox34);
			this->panel1->Controls->Add(this->pictureBox35);
			this->panel1->Controls->Add(this->pictureBox26);
			this->panel1->Controls->Add(this->pictureBox27);
			this->panel1->Controls->Add(this->pictureBox28);
			this->panel1->Controls->Add(this->pictureBox29);
			this->panel1->Controls->Add(this->pictureBox30);
			this->panel1->Controls->Add(this->pictureBox21);
			this->panel1->Controls->Add(this->pictureBox22);
			this->panel1->Controls->Add(this->pictureBox23);
			this->panel1->Controls->Add(this->pictureBox24);
			this->panel1->Controls->Add(this->pictureBox25);
			this->panel1->Controls->Add(this->pictureBox16);
			this->panel1->Controls->Add(this->pictureBox17);
			this->panel1->Controls->Add(this->pictureBox18);
			this->panel1->Controls->Add(this->pictureBox19);
			this->panel1->Controls->Add(this->pictureBox20);
			this->panel1->Controls->Add(this->pictureBox11);
			this->panel1->Controls->Add(this->pictureBox12);
			this->panel1->Controls->Add(this->pictureBox13);
			this->panel1->Controls->Add(this->pictureBox14);
			this->panel1->Controls->Add(this->pictureBox15);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox7);
			this->panel1->Controls->Add(this->pictureBox8);
			this->panel1->Controls->Add(this->pictureBox9);
			this->panel1->Controls->Add(this->pictureBox10);
			this->panel1->Controls->Add(this->textBox19);
			this->panel1->Controls->Add(this->textBox12);
			this->panel1->Controls->Add(this->textBox18);
			this->panel1->Controls->Add(this->textBox17);
			this->panel1->Controls->Add(this->textBox16);
			this->panel1->Controls->Add(this->textBox15);
			this->panel1->Controls->Add(this->textBox14);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->textBox11);
			this->panel1->Controls->Add(this->textBox10);
			this->panel1->Controls->Add(this->textBox9);
			this->panel1->Controls->Add(this->textBox8);
			this->panel1->Controls->Add(this->textBox7);
			this->panel1->Controls->Add(this->textBox6);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->textBox3);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 234.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1176, 510);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &abacus::panel1_Paint);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(40, 37);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 96;
			this->button3->Text = L"back";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &abacus::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(43, 391);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(73, 37);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 95;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &abacus::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(43, 348);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(73, 37);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 94;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &abacus::pictureBox2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(43, 305);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(73, 37);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 93;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &abacus::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(43, 132);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(73, 37);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 92;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &abacus::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(43, 434);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(73, 37);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 91;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &abacus::pictureBox5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 27.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(522, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(116, 45);
			this->label1->TabIndex = 90;
			this->label1->Text = L"Abacus";
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox61.BackgroundImage")));
			this->pictureBox61->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox61.Image")));
			this->pictureBox61->Location = System::Drawing::Point(551, 391);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(73, 37);
			this->pictureBox61->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox61->TabIndex = 84;
			this->pictureBox61->TabStop = false;
			this->pictureBox61->Click += gcnew System::EventHandler(this, &abacus::pictureBox61_Click);
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox62.BackgroundImage")));
			this->pictureBox62->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox62.Image")));
			this->pictureBox62->Location = System::Drawing::Point(551, 348);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(73, 37);
			this->pictureBox62->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox62->TabIndex = 83;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->Click += gcnew System::EventHandler(this, &abacus::pictureBox62_Click);
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox63.BackgroundImage")));
			this->pictureBox63->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox63.Image")));
			this->pictureBox63->Location = System::Drawing::Point(551, 305);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(73, 37);
			this->pictureBox63->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox63->TabIndex = 82;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->Click += gcnew System::EventHandler(this, &abacus::pictureBox63_Click);
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox64.BackgroundImage")));
			this->pictureBox64->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox64.Image")));
			this->pictureBox64->Location = System::Drawing::Point(551, 132);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(73, 37);
			this->pictureBox64->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox64->TabIndex = 81;
			this->pictureBox64->TabStop = false;
			this->pictureBox64->Click += gcnew System::EventHandler(this, &abacus::pictureBox64_Click);
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox65.BackgroundImage")));
			this->pictureBox65->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox65.Image")));
			this->pictureBox65->Location = System::Drawing::Point(551, 434);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(73, 37);
			this->pictureBox65->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox65->TabIndex = 80;
			this->pictureBox65->TabStop = false;
			this->pictureBox65->Click += gcnew System::EventHandler(this, &abacus::pictureBox65_Click);
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox56.BackgroundImage")));
			this->pictureBox56->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox56.Image")));
			this->pictureBox56->Location = System::Drawing::Point(633, 391);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(73, 37);
			this->pictureBox56->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox56->TabIndex = 79;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->Click += gcnew System::EventHandler(this, &abacus::pictureBox56_Click);
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox57.BackgroundImage")));
			this->pictureBox57->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox57.Image")));
			this->pictureBox57->Location = System::Drawing::Point(633, 348);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(73, 37);
			this->pictureBox57->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox57->TabIndex = 78;
			this->pictureBox57->TabStop = false;
			this->pictureBox57->Click += gcnew System::EventHandler(this, &abacus::pictureBox57_Click);
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox58.BackgroundImage")));
			this->pictureBox58->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox58.Image")));
			this->pictureBox58->Location = System::Drawing::Point(633, 305);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(73, 37);
			this->pictureBox58->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox58->TabIndex = 77;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->Click += gcnew System::EventHandler(this, &abacus::pictureBox58_Click);
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox59.BackgroundImage")));
			this->pictureBox59->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox59.Image")));
			this->pictureBox59->Location = System::Drawing::Point(633, 132);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(73, 37);
			this->pictureBox59->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox59->TabIndex = 76;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->Click += gcnew System::EventHandler(this, &abacus::pictureBox59_Click);
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox60.BackgroundImage")));
			this->pictureBox60->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox60.Image")));
			this->pictureBox60->Location = System::Drawing::Point(633, 434);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(73, 37);
			this->pictureBox60->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox60->TabIndex = 75;
			this->pictureBox60->TabStop = false;
			this->pictureBox60->Click += gcnew System::EventHandler(this, &abacus::pictureBox60_Click);
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox51.BackgroundImage")));
			this->pictureBox51->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox51.Image")));
			this->pictureBox51->Location = System::Drawing::Point(716, 391);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(73, 37);
			this->pictureBox51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox51->TabIndex = 74;
			this->pictureBox51->TabStop = false;
			this->pictureBox51->Click += gcnew System::EventHandler(this, &abacus::pictureBox51_Click);
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox52.BackgroundImage")));
			this->pictureBox52->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox52.Image")));
			this->pictureBox52->Location = System::Drawing::Point(716, 348);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(73, 37);
			this->pictureBox52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox52->TabIndex = 73;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->Click += gcnew System::EventHandler(this, &abacus::pictureBox52_Click);
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox53.BackgroundImage")));
			this->pictureBox53->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox53.Image")));
			this->pictureBox53->Location = System::Drawing::Point(716, 305);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(73, 37);
			this->pictureBox53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox53->TabIndex = 72;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->Click += gcnew System::EventHandler(this, &abacus::pictureBox53_Click);
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox54.BackgroundImage")));
			this->pictureBox54->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox54.Image")));
			this->pictureBox54->Location = System::Drawing::Point(716, 132);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(73, 37);
			this->pictureBox54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox54->TabIndex = 71;
			this->pictureBox54->TabStop = false;
			this->pictureBox54->Click += gcnew System::EventHandler(this, &abacus::pictureBox54_Click);
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox55.BackgroundImage")));
			this->pictureBox55->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox55.Image")));
			this->pictureBox55->Location = System::Drawing::Point(716, 434);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(73, 37);
			this->pictureBox55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox55->TabIndex = 70;
			this->pictureBox55->TabStop = false;
			this->pictureBox55->Click += gcnew System::EventHandler(this, &abacus::pictureBox55_Click);
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox46.BackgroundImage")));
			this->pictureBox46->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox46.Image")));
			this->pictureBox46->Location = System::Drawing::Point(802, 391);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(73, 37);
			this->pictureBox46->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox46->TabIndex = 69;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->Click += gcnew System::EventHandler(this, &abacus::pictureBox46_Click);
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox47.BackgroundImage")));
			this->pictureBox47->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox47.Image")));
			this->pictureBox47->Location = System::Drawing::Point(802, 348);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(73, 37);
			this->pictureBox47->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox47->TabIndex = 68;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->Click += gcnew System::EventHandler(this, &abacus::pictureBox47_Click);
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox48.BackgroundImage")));
			this->pictureBox48->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox48.Image")));
			this->pictureBox48->Location = System::Drawing::Point(802, 305);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(73, 37);
			this->pictureBox48->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox48->TabIndex = 67;
			this->pictureBox48->TabStop = false;
			this->pictureBox48->Click += gcnew System::EventHandler(this, &abacus::pictureBox48_Click);
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox49.BackgroundImage")));
			this->pictureBox49->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox49.Image")));
			this->pictureBox49->Location = System::Drawing::Point(802, 132);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(73, 37);
			this->pictureBox49->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox49->TabIndex = 66;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->Click += gcnew System::EventHandler(this, &abacus::pictureBox49_Click);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox50.BackgroundImage")));
			this->pictureBox50->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox50.Image")));
			this->pictureBox50->Location = System::Drawing::Point(802, 434);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(73, 37);
			this->pictureBox50->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox50->TabIndex = 65;
			this->pictureBox50->TabStop = false;
			this->pictureBox50->Click += gcnew System::EventHandler(this, &abacus::pictureBox50_Click);
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox41.BackgroundImage")));
			this->pictureBox41->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox41.Image")));
			this->pictureBox41->Location = System::Drawing::Point(887, 390);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(73, 37);
			this->pictureBox41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox41->TabIndex = 64;
			this->pictureBox41->TabStop = false;
			this->pictureBox41->Click += gcnew System::EventHandler(this, &abacus::pictureBox41_Click);
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox42.BackgroundImage")));
			this->pictureBox42->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox42.Image")));
			this->pictureBox42->Location = System::Drawing::Point(887, 347);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(73, 37);
			this->pictureBox42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox42->TabIndex = 63;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->Click += gcnew System::EventHandler(this, &abacus::pictureBox42_Click);
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox43.BackgroundImage")));
			this->pictureBox43->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox43.Image")));
			this->pictureBox43->Location = System::Drawing::Point(887, 304);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(73, 37);
			this->pictureBox43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox43->TabIndex = 62;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->Click += gcnew System::EventHandler(this, &abacus::pictureBox43_Click);
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox44.BackgroundImage")));
			this->pictureBox44->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox44.Image")));
			this->pictureBox44->Location = System::Drawing::Point(887, 131);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(73, 37);
			this->pictureBox44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox44->TabIndex = 61;
			this->pictureBox44->TabStop = false;
			this->pictureBox44->Click += gcnew System::EventHandler(this, &abacus::pictureBox44_Click);
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox45.BackgroundImage")));
			this->pictureBox45->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox45.Image")));
			this->pictureBox45->Location = System::Drawing::Point(887, 433);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(73, 37);
			this->pictureBox45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox45->TabIndex = 60;
			this->pictureBox45->TabStop = false;
			this->pictureBox45->Click += gcnew System::EventHandler(this, &abacus::pictureBox45_Click);
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox36.BackgroundImage")));
			this->pictureBox36->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox36.Image")));
			this->pictureBox36->Location = System::Drawing::Point(971, 391);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(73, 37);
			this->pictureBox36->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox36->TabIndex = 59;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->Click += gcnew System::EventHandler(this, &abacus::pictureBox36_Click);
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox37.BackgroundImage")));
			this->pictureBox37->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox37.Image")));
			this->pictureBox37->Location = System::Drawing::Point(971, 348);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(73, 37);
			this->pictureBox37->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox37->TabIndex = 58;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->Click += gcnew System::EventHandler(this, &abacus::pictureBox37_Click);
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox38.BackgroundImage")));
			this->pictureBox38->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox38.Image")));
			this->pictureBox38->Location = System::Drawing::Point(971, 305);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(73, 37);
			this->pictureBox38->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox38->TabIndex = 57;
			this->pictureBox38->TabStop = false;
			this->pictureBox38->Click += gcnew System::EventHandler(this, &abacus::pictureBox38_Click);
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox39.BackgroundImage")));
			this->pictureBox39->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox39.Image")));
			this->pictureBox39->Location = System::Drawing::Point(971, 132);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(73, 37);
			this->pictureBox39->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox39->TabIndex = 56;
			this->pictureBox39->TabStop = false;
			this->pictureBox39->Click += gcnew System::EventHandler(this, &abacus::pictureBox39_Click);
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox40.BackgroundImage")));
			this->pictureBox40->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox40.Image")));
			this->pictureBox40->Location = System::Drawing::Point(971, 434);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(73, 37);
			this->pictureBox40->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox40->TabIndex = 55;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->Click += gcnew System::EventHandler(this, &abacus::pictureBox40_Click);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox31.BackgroundImage")));
			this->pictureBox31->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox31.Image")));
			this->pictureBox31->Location = System::Drawing::Point(1055, 391);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(73, 37);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox31->TabIndex = 54;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &abacus::pictureBox31_Click);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox32.BackgroundImage")));
			this->pictureBox32->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox32.Image")));
			this->pictureBox32->Location = System::Drawing::Point(1055, 348);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(73, 37);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox32->TabIndex = 53;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &abacus::pictureBox32_Click);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox33.BackgroundImage")));
			this->pictureBox33->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox33.Image")));
			this->pictureBox33->Location = System::Drawing::Point(1055, 305);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(73, 37);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox33->TabIndex = 52;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &abacus::pictureBox33_Click);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox34.BackgroundImage")));
			this->pictureBox34->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox34.Image")));
			this->pictureBox34->Location = System::Drawing::Point(1055, 132);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(73, 37);
			this->pictureBox34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox34->TabIndex = 51;
			this->pictureBox34->TabStop = false;
			this->pictureBox34->Click += gcnew System::EventHandler(this, &abacus::pictureBox34_Click);
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox35.BackgroundImage")));
			this->pictureBox35->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox35.Image")));
			this->pictureBox35->Location = System::Drawing::Point(1055, 434);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(73, 37);
			this->pictureBox35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox35->TabIndex = 50;
			this->pictureBox35->TabStop = false;
			this->pictureBox35->Click += gcnew System::EventHandler(this, &abacus::pictureBox35_Click);
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox26.BackgroundImage")));
			this->pictureBox26->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox26.Image")));
			this->pictureBox26->Location = System::Drawing::Point(467, 391);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(73, 37);
			this->pictureBox26->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox26->TabIndex = 49;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->Click += gcnew System::EventHandler(this, &abacus::pictureBox26_Click);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.BackgroundImage")));
			this->pictureBox27->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox27.Image")));
			this->pictureBox27->Location = System::Drawing::Point(467, 348);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(73, 37);
			this->pictureBox27->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox27->TabIndex = 48;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->Click += gcnew System::EventHandler(this, &abacus::pictureBox27_Click);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.BackgroundImage")));
			this->pictureBox28->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox28.Image")));
			this->pictureBox28->Location = System::Drawing::Point(467, 305);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(73, 37);
			this->pictureBox28->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox28->TabIndex = 47;
			this->pictureBox28->TabStop = false;
			this->pictureBox28->Click += gcnew System::EventHandler(this, &abacus::pictureBox28_Click);
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox29.BackgroundImage")));
			this->pictureBox29->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox29.Image")));
			this->pictureBox29->Location = System::Drawing::Point(467, 132);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(73, 37);
			this->pictureBox29->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox29->TabIndex = 46;
			this->pictureBox29->TabStop = false;
			this->pictureBox29->Click += gcnew System::EventHandler(this, &abacus::pictureBox29_Click);
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox30.BackgroundImage")));
			this->pictureBox30->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox30.Image")));
			this->pictureBox30->Location = System::Drawing::Point(467, 434);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(73, 37);
			this->pictureBox30->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox30->TabIndex = 45;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->Click += gcnew System::EventHandler(this, &abacus::pictureBox30_Click);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox21.BackgroundImage")));
			this->pictureBox21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox21.Image")));
			this->pictureBox21->Location = System::Drawing::Point(381, 391);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(73, 37);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox21->TabIndex = 44;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &abacus::pictureBox21_Click);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox22.BackgroundImage")));
			this->pictureBox22->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox22.Image")));
			this->pictureBox22->Location = System::Drawing::Point(381, 348);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(73, 37);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox22->TabIndex = 43;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &abacus::pictureBox22_Click);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox23.BackgroundImage")));
			this->pictureBox23->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox23.Image")));
			this->pictureBox23->Location = System::Drawing::Point(381, 305);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(73, 37);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox23->TabIndex = 42;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &abacus::pictureBox23_Click);
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox24.BackgroundImage")));
			this->pictureBox24->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox24.Image")));
			this->pictureBox24->Location = System::Drawing::Point(381, 132);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(73, 37);
			this->pictureBox24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox24->TabIndex = 41;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->Click += gcnew System::EventHandler(this, &abacus::pictureBox24_Click);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox25.BackgroundImage")));
			this->pictureBox25->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox25.Image")));
			this->pictureBox25->Location = System::Drawing::Point(381, 434);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(73, 37);
			this->pictureBox25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox25->TabIndex = 40;
			this->pictureBox25->TabStop = false;
			this->pictureBox25->Click += gcnew System::EventHandler(this, &abacus::pictureBox25_Click);
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.BackgroundImage")));
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(296, 391);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(73, 37);
			this->pictureBox16->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox16->TabIndex = 39;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->Click += gcnew System::EventHandler(this, &abacus::pictureBox16_Click);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.BackgroundImage")));
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(296, 348);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(73, 37);
			this->pictureBox17->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox17->TabIndex = 38;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->Click += gcnew System::EventHandler(this, &abacus::pictureBox17_Click);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.BackgroundImage")));
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(296, 305);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(73, 37);
			this->pictureBox18->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox18->TabIndex = 37;
			this->pictureBox18->TabStop = false;
			this->pictureBox18->Click += gcnew System::EventHandler(this, &abacus::pictureBox18_Click);
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.BackgroundImage")));
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(296, 132);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(73, 37);
			this->pictureBox19->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox19->TabIndex = 36;
			this->pictureBox19->TabStop = false;
			this->pictureBox19->Click += gcnew System::EventHandler(this, &abacus::pictureBox19_Click);
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.BackgroundImage")));
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(296, 434);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(73, 37);
			this->pictureBox20->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox20->TabIndex = 35;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->Click += gcnew System::EventHandler(this, &abacus::pictureBox20_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.BackgroundImage")));
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(211, 391);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(73, 37);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 34;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &abacus::pictureBox11_Click);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.BackgroundImage")));
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(211, 348);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(73, 37);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox12->TabIndex = 33;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &abacus::pictureBox12_Click);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.BackgroundImage")));
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(211, 305);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(73, 37);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox13->TabIndex = 32;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &abacus::pictureBox13_Click);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.BackgroundImage")));
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(211, 132);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(73, 37);
			this->pictureBox14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox14->TabIndex = 31;
			this->pictureBox14->TabStop = false;
			this->pictureBox14->Click += gcnew System::EventHandler(this, &abacus::pictureBox14_Click);
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.BackgroundImage")));
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(211, 434);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(73, 37);
			this->pictureBox15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox15->TabIndex = 30;
			this->pictureBox15->TabStop = false;
			this->pictureBox15->Click += gcnew System::EventHandler(this, &abacus::pictureBox15_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(126, 391);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(73, 37);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &abacus::pictureBox6_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(126, 348);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(73, 37);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 28;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &abacus::pictureBox7_Click);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(126, 305);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(73, 37);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 27;
			this->pictureBox8->TabStop = false;
			this->pictureBox8->Click += gcnew System::EventHandler(this, &abacus::pictureBox8_Click);
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(126, 132);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(73, 37);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 26;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->Click += gcnew System::EventHandler(this, &abacus::pictureBox9_Click);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.BackgroundImage")));
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(126, 434);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(73, 37);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 25;
			this->pictureBox10->TabStop = false;
			this->pictureBox10->Click += gcnew System::EventHandler(this, &abacus::pictureBox10_Click);
			// 
			// panel2
			// 
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button);
			this->panel2->Controls->Add(this->div);
			this->panel2->Controls->Add(this->sub);
			this->panel2->Controls->Add(this->mul);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1176, 510);
			this->panel2->TabIndex = 1;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(13, 392);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(141, 32);
			this->button6->TabIndex = 8;
			this->button6->Text = L"Abacus";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &abacus::button6_Click);
			// 
			// button
			// 
			this->button->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button->Location = System::Drawing::Point(12, 232);
			this->button->Name = L"button";
			this->button->Size = System::Drawing::Size(141, 32);
			this->button->TabIndex = 7;
			this->button->Text = L"Addition";
			this->button->UseVisualStyleBackColor = true;
			this->button->Click += gcnew System::EventHandler(this, &abacus::button_Click_1);
			// 
			// div
			// 
			this->div->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->div->Location = System::Drawing::Point(12, 350);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(141, 32);
			this->div->TabIndex = 6;
			this->div->Text = L"Division";
			this->div->UseVisualStyleBackColor = true;
			this->div->Click += gcnew System::EventHandler(this, &abacus::div_Click);
			// 
			// sub
			// 
			this->sub->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->sub->Location = System::Drawing::Point(12, 273);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(141, 32);
			this->sub->TabIndex = 5;
			this->sub->Text = L"Subtraction";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->Click += gcnew System::EventHandler(this, &abacus::sub_Click);
			// 
			// mul
			// 
			this->mul->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->mul->Location = System::Drawing::Point(12, 311);
			this->mul->Name = L"mul";
			this->mul->Size = System::Drawing::Size(141, 32);
			this->mul->TabIndex = 4;
			this->mul->Text = L"Multiplication";
			this->mul->UseVisualStyleBackColor = true;
			this->mul->Click += gcnew System::EventHandler(this, &abacus::mul_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(12, 196);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 33);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Videos";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Buxton Sketch", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(12, 149);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 41);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Introduction";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Ink Free", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(540, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 39);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Abacus";
			// 
			// panel3
			// 
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->operation);
			this->panel3->Controls->Add(this->op1);
			this->panel3->Controls->Add(this->output);
			this->panel3->Controls->Add(this->op2);
			this->panel3->Controls->Add(this->op0);
			this->panel3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->panel3->Location = System::Drawing::Point(142, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(570, 516);
			this->panel3->TabIndex = 2;
			this->panel3->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &abacus::panel3_Paint);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"Impact", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(314, 155);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 34);
			this->label3->TabIndex = 17;
			this->label3->Text = L"=";
			// 
			// operation
			// 
			this->operation->Location = System::Drawing::Point(391, 7);
			this->operation->Name = L"operation";
			this->operation->Size = System::Drawing::Size(167, 26);
			this->operation->TabIndex = 16;
			// 
			// op1
			// 
			this->op1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->op1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->op1->Location = System::Drawing::Point(168, 157);
			this->op1->Name = L"op1";
			this->op1->Size = System::Drawing::Size(55, 26);
			this->op1->TabIndex = 5;
			// 
			// output
			// 
			this->output->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->output->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->output->Location = System::Drawing::Point(346, 160);
			this->output->Name = L"output";
			this->output->Size = System::Drawing::Size(70, 26);
			this->output->TabIndex = 3;
			// 
			// op2
			// 
			this->op2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->op2->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->op2->Location = System::Drawing::Point(258, 158);
			this->op2->Name = L"op2";
			this->op2->Size = System::Drawing::Size(54, 26);
			this->op2->TabIndex = 1;
			// 
			// op0
			// 
			this->op0->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->op0->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->op0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->op0->ForeColor = System::Drawing::Color::White;
			this->op0->Location = System::Drawing::Point(233, 157);
			this->op0->Name = L"op0";
			this->op0->Size = System::Drawing::Size(19, 28);
			this->op0->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Black;
			this->panel4->Controls->Add(this->BACK);
			this->panel4->Controls->Add(this->button10);
			this->panel4->Controls->Add(this->button12);
			this->panel4->Controls->Add(this->button4);
			this->panel4->Controls->Add(this->button11);
			this->panel4->Controls->Add(this->button5);
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->button7);
			this->panel4->Controls->Add(this->button8);
			this->panel4->Location = System::Drawing::Point(1, 6);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(141, 504);
			this->panel4->TabIndex = 15;
			// 
			// BACK
			// 
			this->BACK->BackColor = System::Drawing::Color::Green;
			this->BACK->Location = System::Drawing::Point(12, 26);
			this->BACK->Name = L"BACK";
			this->BACK->Size = System::Drawing::Size(115, 34);
			this->BACK->TabIndex = 15;
			this->BACK->Text = L"<-BACK";
			this->BACK->UseVisualStyleBackColor = false;
			this->BACK->Click += gcnew System::EventHandler(this, &abacus::BACK_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Green;
			this->button10->Location = System::Drawing::Point(2, 289);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 31);
			this->button10->TabIndex = 12;
			this->button10->Text = L"Level 5";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &abacus::button10_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::Green;
			this->button12->Location = System::Drawing::Point(3, 187);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(136, 31);
			this->button12->TabIndex = 14;
			this->button12->Text = L"Level 2";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &abacus::button12_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Green;
			this->button4->Location = System::Drawing::Point(2, 221);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 31);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Level 3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &abacus::button4_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Green;
			this->button11->Location = System::Drawing::Point(2, 152);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(136, 31);
			this->button11->TabIndex = 13;
			this->button11->Text = L"Level 1";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &abacus::button11_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button5->Location = System::Drawing::Point(2, 255);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(136, 31);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Level 4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &abacus::button5_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Green;
			this->button9->Location = System::Drawing::Point(2, 323);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 31);
			this->button9->TabIndex = 11;
			this->button9->Text = L"Level 6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &abacus::button9_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Green;
			this->button7->Location = System::Drawing::Point(2, 406);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 31);
			this->button7->TabIndex = 9;
			this->button7->Text = L"Time limit";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button8->Location = System::Drawing::Point(2, 356);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 31);
			this->button8->TabIndex = 10;
			this->button8->Text = L"Level 7";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &abacus::button8_Click);
			// 
			// abacus
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1176, 510);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Name = L"abacus";
			this->Text = L"abacus";
			this->Load += gcnew System::EventHandler(this, &abacus::abacus_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox1->Location != System::Drawing::Point(43,316))
				  { this->pictureBox1->Location = System::Drawing::Point(43,316);
			        this->pictureBox3->Location = System::Drawing::Point(43,230);
			        this->pictureBox2->Location = System::Drawing::Point(43,273);}
			 else { 
			        this->pictureBox1->Location = System::Drawing::Point(43,391);
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }		 
		 }
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox3->Location != System::Drawing::Point(43,230))
				  { this->pictureBox3->Location = System::Drawing::Point(43,230);}
			 else {
				    this->pictureBox3->Location = System::Drawing::Point(43,305);
			        this->pictureBox2->Location = System::Drawing::Point(43,348);
			        this->pictureBox1->Location = System::Drawing::Point(43,391);
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox2->Location != System::Drawing::Point(43,273))
				  { this->pictureBox2->Location = System::Drawing::Point(43,273);
			        this->pictureBox3->Location = System::Drawing::Point(43,230);}
			 else { 
				    this->pictureBox2->Location = System::Drawing::Point(43,348);
			        this->pictureBox1->Location = System::Drawing::Point(43,391);
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }
		 }
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox5->Location != System::Drawing::Point(43,359))
				  { this->pictureBox5->Location = System::Drawing::Point(43,359);
				    this->pictureBox1->Location = System::Drawing::Point(43,316);
			        this->pictureBox3->Location = System::Drawing::Point(43,230);
			        this->pictureBox2->Location = System::Drawing::Point(43,273);}
			 else { 
			        this->pictureBox5->Location = System::Drawing::Point(43,434);  }	
		 }
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox4->Location != System::Drawing::Point(43,170))
				 this->pictureBox4->Location = System::Drawing::Point(43,170);
			 else
			     this->pictureBox4->Location = System::Drawing::Point(43,132);
		 }
private: System::Void pictureBox9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox9->Location != System::Drawing::Point(126,170))
				 this->pictureBox9->Location = System::Drawing::Point(126,170);
			 else
			     this->pictureBox9->Location = System::Drawing::Point(126,132);
		 }
private: System::Void pictureBox14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox14->Location != System::Drawing::Point(211,170))
				 this->pictureBox14->Location = System::Drawing::Point(211,170);
			 else
			     this->pictureBox14->Location = System::Drawing::Point(211,132);
		 }
private: System::Void pictureBox19_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox19->Location != System::Drawing::Point(296,170))
				 this->pictureBox19->Location = System::Drawing::Point(296,170);
			 else
			     this->pictureBox19->Location = System::Drawing::Point(296,132);
		 }
private: System::Void pictureBox24_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox24->Location != System::Drawing::Point(381,170))
				 this->pictureBox24->Location = System::Drawing::Point(381,170);
			 else
			     this->pictureBox24->Location = System::Drawing::Point(381,132);
		 }
private: System::Void pictureBox29_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox29->Location != System::Drawing::Point(467,170))
				 this->pictureBox29->Location = System::Drawing::Point(467,170);
			 else
			     this->pictureBox29->Location = System::Drawing::Point(467,132);
		 }
private: System::Void pictureBox64_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox64->Location != System::Drawing::Point(551,170))
				 this->pictureBox64->Location = System::Drawing::Point(551,170);
			 else
			     this->pictureBox64->Location = System::Drawing::Point(551,132);
		 }
private: System::Void pictureBox59_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox59->Location != System::Drawing::Point(633,170))
				 this->pictureBox59->Location = System::Drawing::Point(633,170);
			 else
			     this->pictureBox59->Location = System::Drawing::Point(633,132);
		 }
private: System::Void pictureBox54_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox54->Location != System::Drawing::Point(716,170))
				 this->pictureBox54->Location = System::Drawing::Point(716,170);
			 else
			     this->pictureBox54->Location = System::Drawing::Point(716,132);
		 }
private: System::Void pictureBox49_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox49->Location != System::Drawing::Point(802,170))
				 this->pictureBox49->Location = System::Drawing::Point(802,170);
			 else
			     this->pictureBox49->Location = System::Drawing::Point(802,132);
		 }
private: System::Void pictureBox44_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox44->Location != System::Drawing::Point(887,170))
				 this->pictureBox44->Location = System::Drawing::Point(887,170);
			 else
			     this->pictureBox44->Location = System::Drawing::Point(887,132);
		 }
private: System::Void pictureBox39_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox39->Location != System::Drawing::Point(971,170))
				 this->pictureBox39->Location = System::Drawing::Point(971,170);
			 else
			     this->pictureBox39->Location = System::Drawing::Point(971,132);
		 }
private: System::Void pictureBox34_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox34->Location != System::Drawing::Point(1055,170))
				 this->pictureBox34->Location = System::Drawing::Point(1055,170);
			 else
			     this->pictureBox34->Location = System::Drawing::Point(1055,132);
		 }
private: System::Void pictureBox8_Click(System::Object^  sender, System::EventArgs^  e) {
             if( this->pictureBox8->Location != System::Drawing::Point(126,230))
				  { this->pictureBox8->Location = System::Drawing::Point(126,230);}
			 else {
				    this->pictureBox8->Location = System::Drawing::Point(126,305);
			        this->pictureBox7->Location = System::Drawing::Point(126,348);
			        this->pictureBox6->Location = System::Drawing::Point(126,391);
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }
		 }
private: System::Void pictureBox13_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox13->Location != System::Drawing::Point(211,230))
				  { this->pictureBox13->Location = System::Drawing::Point(211,230);}
			 else {
				    this->pictureBox13->Location = System::Drawing::Point(211,305);
			        this->pictureBox12->Location = System::Drawing::Point(211,348);
			        this->pictureBox11->Location = System::Drawing::Point(211,391);
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }
		 }
private: System::Void pictureBox18_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox18->Location != System::Drawing::Point(296,230))
				  { this->pictureBox18->Location = System::Drawing::Point(296,230);}
			 else {
				    this->pictureBox18->Location = System::Drawing::Point(296,305);
			        this->pictureBox17->Location = System::Drawing::Point(296,348);
			        this->pictureBox16->Location = System::Drawing::Point(296,391);
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }
		 }
private: System::Void pictureBox23_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox23->Location != System::Drawing::Point(381,230))
				  { this->pictureBox23->Location = System::Drawing::Point(381,230);}
			 else {
				    this->pictureBox23->Location = System::Drawing::Point(381,305);
			        this->pictureBox22->Location = System::Drawing::Point(381,348);
			        this->pictureBox21->Location = System::Drawing::Point(381,391);
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }
		 }
private: System::Void pictureBox28_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox28->Location != System::Drawing::Point(467,230))
				  { this->pictureBox28->Location = System::Drawing::Point(467,230);}
			 else {
				    this->pictureBox28->Location = System::Drawing::Point(467,305);
			        this->pictureBox27->Location = System::Drawing::Point(467,348);
			        this->pictureBox26->Location = System::Drawing::Point(467,391);
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }
		 }
private: System::Void pictureBox63_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox63->Location != System::Drawing::Point(551,230))
				  { this->pictureBox63->Location = System::Drawing::Point(551,230);}
			 else {
				    this->pictureBox63->Location = System::Drawing::Point(551,305);
			        this->pictureBox62->Location = System::Drawing::Point(551,348);
			        this->pictureBox61->Location = System::Drawing::Point(551,391);
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }
		 }
private: System::Void pictureBox58_Click(System::Object^  sender, System::EventArgs^  e) {
			    if( this->pictureBox58->Location != System::Drawing::Point(633,230))
				  { this->pictureBox58->Location = System::Drawing::Point(633,230);}
			 else {
				    this->pictureBox58->Location = System::Drawing::Point(633,305);
			        this->pictureBox57->Location = System::Drawing::Point(633,348);
			        this->pictureBox56->Location = System::Drawing::Point(633,391);
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }
		 }
private: System::Void pictureBox53_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox53->Location != System::Drawing::Point(716,230))
				  { this->pictureBox53->Location = System::Drawing::Point(716,230);}
			 else {
				    this->pictureBox53->Location = System::Drawing::Point(716,305);
			        this->pictureBox52->Location = System::Drawing::Point(716,348);
			        this->pictureBox51->Location = System::Drawing::Point(716,391);
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }
		 }
private: System::Void pictureBox48_Click(System::Object^  sender, System::EventArgs^  e) {
			    if( this->pictureBox48->Location != System::Drawing::Point(802,230))
				  { this->pictureBox48->Location = System::Drawing::Point(802,230);}
			 else {
				    this->pictureBox48->Location = System::Drawing::Point(802,305);
			        this->pictureBox47->Location = System::Drawing::Point(802,348);
			        this->pictureBox46->Location = System::Drawing::Point(802,391);
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }
		 }
private: System::Void pictureBox43_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox43->Location != System::Drawing::Point(887,230))
				  { this->pictureBox43->Location = System::Drawing::Point(887,230);}
			 else {
				    this->pictureBox43->Location = System::Drawing::Point(887,305);
			        this->pictureBox42->Location = System::Drawing::Point(887,348);
			        this->pictureBox41->Location = System::Drawing::Point(887,391);
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }
		 }
private: System::Void pictureBox38_Click(System::Object^  sender, System::EventArgs^  e) {
			    if( this->pictureBox38->Location != System::Drawing::Point(971,230))
				  { this->pictureBox38->Location = System::Drawing::Point(971,230);}
			 else {
				    this->pictureBox38->Location = System::Drawing::Point(971,305);
			        this->pictureBox37->Location = System::Drawing::Point(971,348);
			        this->pictureBox36->Location = System::Drawing::Point(971,391);
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }
		 }
private: System::Void pictureBox33_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox33->Location != System::Drawing::Point(1055,230))
				  { this->pictureBox33->Location = System::Drawing::Point(1055,230);}
			 else {
				    this->pictureBox33->Location = System::Drawing::Point(1055,305);
			        this->pictureBox32->Location = System::Drawing::Point(1055,348);
			        this->pictureBox31->Location = System::Drawing::Point(1055,391);
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);  }
		 }
private: System::Void pictureBox7_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox7->Location != System::Drawing::Point(126,273))
				  { this->pictureBox7->Location = System::Drawing::Point(126,273);
			        this->pictureBox8->Location = System::Drawing::Point(126,230);}
			 else { 
				    this->pictureBox7->Location = System::Drawing::Point(126,348);
			        this->pictureBox6->Location = System::Drawing::Point(126,391);
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }
		 }
private: System::Void pictureBox12_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox12->Location != System::Drawing::Point(211,273))
				  { this->pictureBox12->Location = System::Drawing::Point(211,273);
			        this->pictureBox13->Location = System::Drawing::Point(211,230);}
			 else { 
				    this->pictureBox12->Location = System::Drawing::Point(211,348);
			        this->pictureBox11->Location = System::Drawing::Point(211,391);
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }
		 }
private: System::Void pictureBox17_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox17->Location != System::Drawing::Point(296,273))
				  { this->pictureBox17->Location = System::Drawing::Point(296,273);
			        this->pictureBox18->Location = System::Drawing::Point(296,230);}
			 else { 
				    this->pictureBox17->Location = System::Drawing::Point(296,348);
			        this->pictureBox16->Location = System::Drawing::Point(296,391);
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }
		 }
private: System::Void pictureBox22_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox22->Location != System::Drawing::Point(381,273))
				  { this->pictureBox22->Location = System::Drawing::Point(381,273);
			        this->pictureBox23->Location = System::Drawing::Point(381,230);}
			 else { 
				    this->pictureBox22->Location = System::Drawing::Point(381,348);
			        this->pictureBox21->Location = System::Drawing::Point(381,391);
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }
		 }
private: System::Void pictureBox27_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox27->Location != System::Drawing::Point(467,273))
				  { this->pictureBox27->Location = System::Drawing::Point(467,273);
			        this->pictureBox28->Location = System::Drawing::Point(467,230);}
			 else { 
				    this->pictureBox27->Location = System::Drawing::Point(467,348);
			        this->pictureBox26->Location = System::Drawing::Point(467,391);
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }
		 }
private: System::Void pictureBox62_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox62->Location != System::Drawing::Point(551,273))
				  { this->pictureBox62->Location = System::Drawing::Point(551,273);
			        this->pictureBox63->Location = System::Drawing::Point(551,230);}
			 else { 
				    this->pictureBox62->Location = System::Drawing::Point(551,348);
			        this->pictureBox61->Location = System::Drawing::Point(551,391);
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }
		 }
private: System::Void pictureBox57_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox57->Location != System::Drawing::Point(633,273))
				  { this->pictureBox57->Location = System::Drawing::Point(633,273);
			        this->pictureBox58->Location = System::Drawing::Point(633,230);}
			 else { 
				    this->pictureBox57->Location = System::Drawing::Point(633,348);
			        this->pictureBox56->Location = System::Drawing::Point(633,391);
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }
		 }
private: System::Void pictureBox52_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox52->Location != System::Drawing::Point(716,273))
				  { this->pictureBox52->Location = System::Drawing::Point(716,273);
			        this->pictureBox53->Location = System::Drawing::Point(716,230);}
			 else { 
				    this->pictureBox52->Location = System::Drawing::Point(716,348);
			        this->pictureBox51->Location = System::Drawing::Point(716,391);
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }
		 }
private: System::Void pictureBox47_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox47->Location != System::Drawing::Point(802,273))
				  { this->pictureBox47->Location = System::Drawing::Point(802,273);
			        this->pictureBox48->Location = System::Drawing::Point(802,230);}
			 else { 
				    this->pictureBox47->Location = System::Drawing::Point(802,348);
			        this->pictureBox46->Location = System::Drawing::Point(802,391);
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }
		 }
private: System::Void pictureBox42_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox42->Location != System::Drawing::Point(887,273))
				  { this->pictureBox42->Location = System::Drawing::Point(887,273);
			        this->pictureBox43->Location = System::Drawing::Point(887,230);}
			 else { 
				    this->pictureBox42->Location = System::Drawing::Point(887,348);
			        this->pictureBox41->Location = System::Drawing::Point(887,391);
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }
		 }
private: System::Void pictureBox37_Click(System::Object^  sender, System::EventArgs^  e) {
			   if( this->pictureBox37->Location != System::Drawing::Point(971,273))
				  { this->pictureBox37->Location = System::Drawing::Point(971,273);
			        this->pictureBox38->Location = System::Drawing::Point(971,230);}
			 else { 
				    this->pictureBox37->Location = System::Drawing::Point(971,348);
			        this->pictureBox36->Location = System::Drawing::Point(971,391);
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }
		 }
private: System::Void pictureBox32_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox32->Location != System::Drawing::Point(1055,273))
				  { this->pictureBox32->Location = System::Drawing::Point(1055,273);
			        this->pictureBox33->Location = System::Drawing::Point(1055,230);}
			 else { 
				    this->pictureBox32->Location = System::Drawing::Point(1055,348);
			        this->pictureBox31->Location = System::Drawing::Point(1055,391);
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);  }
		 }





private: System::Void pictureBox6_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox6->Location != System::Drawing::Point(126,316))
				  { this->pictureBox6->Location = System::Drawing::Point(126,316);
			        this->pictureBox8->Location = System::Drawing::Point(126,230);
			        this->pictureBox7->Location = System::Drawing::Point(126,273);}
			 else { 
			        this->pictureBox6->Location = System::Drawing::Point(126,391);
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }	
		 }
private: System::Void pictureBox11_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox11->Location != System::Drawing::Point(211,316))
				  { this->pictureBox11->Location = System::Drawing::Point(211,316);
			        this->pictureBox13->Location = System::Drawing::Point(211,230);
			        this->pictureBox12->Location = System::Drawing::Point(211,273);}
			 else { 
			        this->pictureBox11->Location = System::Drawing::Point(211,391);
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }	
		 }
private: System::Void pictureBox16_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox16->Location != System::Drawing::Point(296,316))
				  { this->pictureBox16->Location = System::Drawing::Point(296,316);
			        this->pictureBox18->Location = System::Drawing::Point(296,230);
			        this->pictureBox17->Location = System::Drawing::Point(296,273);}
			 else { 
			        this->pictureBox16->Location = System::Drawing::Point(296,391);
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }	
		 }
private: System::Void pictureBox21_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox21->Location != System::Drawing::Point(381,316))
				  { this->pictureBox21->Location = System::Drawing::Point(381,316);
			        this->pictureBox23->Location = System::Drawing::Point(381,230);
			        this->pictureBox22->Location = System::Drawing::Point(381,273);}
			 else { 
			        this->pictureBox21->Location = System::Drawing::Point(381,391);
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }	
		 }
private: System::Void pictureBox26_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox26->Location != System::Drawing::Point(467,316))
				  { this->pictureBox26->Location = System::Drawing::Point(467,316);
			        this->pictureBox28->Location = System::Drawing::Point(467,230);
			        this->pictureBox27->Location = System::Drawing::Point(467,273);}
			 else { 
			        this->pictureBox26->Location = System::Drawing::Point(467,391);
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }	
		 }
private: System::Void pictureBox61_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox61->Location != System::Drawing::Point(551,316))
				  { this->pictureBox61->Location = System::Drawing::Point(551,316);
			        this->pictureBox63->Location = System::Drawing::Point(551,230);
			        this->pictureBox62->Location = System::Drawing::Point(551,273);}
			 else { 
			        this->pictureBox61->Location = System::Drawing::Point(551,391);
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }	
		 }
private: System::Void pictureBox56_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox56->Location != System::Drawing::Point(633,316))
				  { this->pictureBox56->Location = System::Drawing::Point(633,316);
			        this->pictureBox58->Location = System::Drawing::Point(633,230);
			        this->pictureBox57->Location = System::Drawing::Point(633,273);}
			 else { 
			        this->pictureBox56->Location = System::Drawing::Point(633,391);
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }	
		 }
private: System::Void pictureBox51_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox51->Location != System::Drawing::Point(716,316))
				  { this->pictureBox51->Location = System::Drawing::Point(716,316);
			        this->pictureBox53->Location = System::Drawing::Point(716,230);
			        this->pictureBox52->Location = System::Drawing::Point(716,273);}
			 else { 
			        this->pictureBox51->Location = System::Drawing::Point(716,391);
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }	
		 }
private: System::Void pictureBox46_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox46->Location != System::Drawing::Point(802,316))
				  { this->pictureBox46->Location = System::Drawing::Point(802,316);
			        this->pictureBox48->Location = System::Drawing::Point(802,230);
			        this->pictureBox47->Location = System::Drawing::Point(802,273);}
			 else { 
			        this->pictureBox46->Location = System::Drawing::Point(802,391);
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }	
		 }
private: System::Void pictureBox41_Click(System::Object^  sender, System::EventArgs^  e) {

			  if( this->pictureBox41->Location != System::Drawing::Point(887,316))
				  { this->pictureBox41->Location = System::Drawing::Point(887,316);
			        this->pictureBox43->Location = System::Drawing::Point(887,230);
			        this->pictureBox42->Location = System::Drawing::Point(887,273);}
			 else { 
			        this->pictureBox41->Location = System::Drawing::Point(887,391);
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }	
		 }
private: System::Void pictureBox36_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox36->Location != System::Drawing::Point(971,316))
				  { this->pictureBox36->Location = System::Drawing::Point(971,316);
			        this->pictureBox38->Location = System::Drawing::Point(971,230);
			        this->pictureBox37->Location = System::Drawing::Point(971,273);}
			 else { 
			        this->pictureBox36->Location = System::Drawing::Point(971,391);
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }	
		 }
private: System::Void pictureBox31_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox31->Location != System::Drawing::Point(1055,316))
				  { this->pictureBox31->Location = System::Drawing::Point(1055,316);
			        this->pictureBox33->Location = System::Drawing::Point(1055,230);
			        this->pictureBox32->Location = System::Drawing::Point(1055,273);}
			 else { 
			        this->pictureBox31->Location = System::Drawing::Point(1055,391);
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);  }	
		 }

private: System::Void pictureBox10_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox10->Location != System::Drawing::Point(126,359))
				  { this->pictureBox10->Location = System::Drawing::Point(126,359);
				    this->pictureBox6->Location = System::Drawing::Point(126,316);
			        this->pictureBox8->Location = System::Drawing::Point(126,230);
			        this->pictureBox7->Location = System::Drawing::Point(126,273);}
			 else { 
			        this->pictureBox10->Location = System::Drawing::Point(126,434);  }
		 }
private: System::Void pictureBox15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox15->Location != System::Drawing::Point(211,359))
				  { this->pictureBox15->Location = System::Drawing::Point(211,359);
				    this->pictureBox11->Location = System::Drawing::Point(211,316);
			        this->pictureBox13->Location = System::Drawing::Point(211,230);
			        this->pictureBox12->Location = System::Drawing::Point(211,273);}
			 else { 
			        this->pictureBox15->Location = System::Drawing::Point(211,434);  }
		 }
private: System::Void pictureBox20_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox20->Location != System::Drawing::Point(296,359))
				  { this->pictureBox20->Location = System::Drawing::Point(296,359);
				    this->pictureBox16->Location = System::Drawing::Point(296,316);
			        this->pictureBox18->Location = System::Drawing::Point(296,230);
			        this->pictureBox17->Location = System::Drawing::Point(296,273);}
			 else { 
			        this->pictureBox20->Location = System::Drawing::Point(296,434);  }
		 }
private: System::Void pictureBox25_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox25->Location != System::Drawing::Point(381,359))
				  { this->pictureBox25->Location = System::Drawing::Point(381,359);
				    this->pictureBox21->Location = System::Drawing::Point(381,316);
			        this->pictureBox23->Location = System::Drawing::Point(381,230);
			        this->pictureBox22->Location = System::Drawing::Point(381,273);}
			 else { 
			        this->pictureBox25->Location = System::Drawing::Point(381,434);  }
		 }
private: System::Void pictureBox30_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox30->Location != System::Drawing::Point(467,359))
				  { this->pictureBox30->Location = System::Drawing::Point(467,359);
				    this->pictureBox26->Location = System::Drawing::Point(467,316);
			        this->pictureBox28->Location = System::Drawing::Point(467,230);
			        this->pictureBox27->Location = System::Drawing::Point(467,273);}
			 else { 
			        this->pictureBox30->Location = System::Drawing::Point(467,434);  }
		 }
private: System::Void pictureBox65_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox65->Location != System::Drawing::Point(551,359))
				  { this->pictureBox65->Location = System::Drawing::Point(551,359);
				    this->pictureBox61->Location = System::Drawing::Point(551,316);
			        this->pictureBox63->Location = System::Drawing::Point(551,230);
			        this->pictureBox62->Location = System::Drawing::Point(551,273);}
			 else { 
			        this->pictureBox65->Location = System::Drawing::Point(551,434);  }
		 }
private: System::Void pictureBox60_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox60->Location != System::Drawing::Point(633,359))
				  { this->pictureBox60->Location = System::Drawing::Point(633,359);
				    this->pictureBox56->Location = System::Drawing::Point(633,316);
			        this->pictureBox58->Location = System::Drawing::Point(633,230);
			        this->pictureBox57->Location = System::Drawing::Point(633,273);}
			 else { 
			        this->pictureBox60->Location = System::Drawing::Point(633,434);  }
		 }
private: System::Void pictureBox55_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox55->Location != System::Drawing::Point(716,359))
				  { this->pictureBox55->Location = System::Drawing::Point(716,359);
				    this->pictureBox51->Location = System::Drawing::Point(716,316);
			        this->pictureBox53->Location = System::Drawing::Point(716,230);
			        this->pictureBox52->Location = System::Drawing::Point(716,273);}
			 else { 
			        this->pictureBox55->Location = System::Drawing::Point(716,434);  }
		 }
private: System::Void pictureBox50_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox50->Location != System::Drawing::Point(802,359))
				  { this->pictureBox50->Location = System::Drawing::Point(802,359);
				    this->pictureBox46->Location = System::Drawing::Point(802,316);
			        this->pictureBox48->Location = System::Drawing::Point(802,230);
			        this->pictureBox47->Location = System::Drawing::Point(802,273);}
			 else { 
			        this->pictureBox50->Location = System::Drawing::Point(802,434);  }
		 }
private: System::Void pictureBox45_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox45->Location != System::Drawing::Point(887,359))
				  { this->pictureBox45->Location = System::Drawing::Point(887,359);
				    this->pictureBox41->Location = System::Drawing::Point(887,316);
			        this->pictureBox43->Location = System::Drawing::Point(887,230);
			        this->pictureBox42->Location = System::Drawing::Point(887,273);}
			 else { 
			        this->pictureBox45->Location = System::Drawing::Point(887,434);  }
		 }
private: System::Void pictureBox40_Click(System::Object^  sender, System::EventArgs^  e) {
			  if( this->pictureBox40->Location != System::Drawing::Point(971,359))
				  { this->pictureBox40->Location = System::Drawing::Point(971,359);
				    this->pictureBox36->Location = System::Drawing::Point(971,316);
			        this->pictureBox38->Location = System::Drawing::Point(971,230);
			        this->pictureBox37->Location = System::Drawing::Point(971,273);}
			 else { 
			        this->pictureBox40->Location = System::Drawing::Point(971,434);  }
		 }
private: System::Void pictureBox35_Click(System::Object^  sender, System::EventArgs^  e) {
			 if( this->pictureBox35->Location != System::Drawing::Point(1055,359))
				  { this->pictureBox35->Location = System::Drawing::Point(1055,359);
				    this->pictureBox31->Location = System::Drawing::Point(1055,316);
			        this->pictureBox33->Location = System::Drawing::Point(1055,230);
			        this->pictureBox32->Location = System::Drawing::Point(1055,273);}
			 else { 
			        this->pictureBox35->Location = System::Drawing::Point(1055,434);  }
		 }

private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			     int a=rand()%3+2;
				 int b;
				 op1->Text=""+a;
			if(operation->Text == "Addition")
			 {  b=rand()%4+1;
				op2->Text=""+b;
				output->Text=""+(a+b);  }
			else if(operation->Text=="Subtraction")
			{   b=rand()%a+1;
			    op2->Text=""+b;
			    output->Text=""+(a-b);   }
			else if(operation->Text == "Multiplication")
			{   b=rand()%3+1;
			    op2->Text=""+b;
			    output->Text=""+(a*b);   }
			else if(operation->Text == "Division")
			{   b=rand()%2+1;
			    a=rand()%3+1;
			    op1->Text=""+(a*b);
			    op2->Text=""+a;
			    output->Text=""+b;       }
		 }
private: System::Void button_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Addition";
			 this->op0->Text="+";
			 this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;
			 this->panel4->Visible=true;
		 }
private: System::Void sub_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Subtraction";
			 this->op0->Text="-";
			  this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;
			 this->panel4->Visible=true;
		 }
private: System::Void mul_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Multiplication";
			 this->op0->Text="*";
			  this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;
			 this->panel4->Visible=true;
		 }
private: System::Void div_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->operation->Text="Division";
			 this->op0->Text="/";
			  this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=true;
			 this->panel4->Visible=true;
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			    int a=rand()%3+4;
			     int b;
				 op1->Text=""+a;
			if(operation->Text == "Addition")
			 {  b=rand()%4+1;
				op2->Text=""+b;
				output->Text=""+(a+b);  }
			else if(operation->Text=="Subtraction")
			{   b=rand()%a+1;
			    op2->Text=""+b;
			    output->Text=""+(a-b);   }
			else if(operation->Text == "Multiplication")
			{   b=rand()%3+1;
			    op2->Text=""+b;
			    output->Text=""+(a*b);   }
			else if(operation->Text == "Division")
			{   b=rand()%3+1;
			    a=rand()%4+1;
			    op1->Text=""+(a*b);
			    op2->Text=""+a;
			    output->Text=""+b;       }
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			      int a=rand()%5+4;
				 int b;
				 op1->Text=""+a;
			if(operation->Text == "Addition")
			 {  b=rand()%6+4;
				op2->Text=""+b;
				output->Text=""+(a+b);  }
			else if(operation->Text=="Subtraction")
			{   b=rand()%a+1;
			    op2->Text=""+b;
			    output->Text=""+(a-b);   }
			else if(operation->Text == "Multiplication")
			{   b=rand()%5+1;
			    op2->Text=""+b;
			    output->Text=""+(a*b);   }
			else if(operation->Text == "Division")
			{   b=rand()%5+1;
			    a=rand()%5+2;
			    op1->Text=""+(a*b);
			    op2->Text=""+a;
			    output->Text=""+b;       }
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			      int a=rand()%15+5;
				 int b;
				 op1->Text=""+a;
			if(operation->Text == "Addition")
			 {  b=rand()%13+8;
				op2->Text=""+b;
				output->Text=""+(a+b);  }
			else if(operation->Text=="Subtraction")
			{   b=rand()%a+1;
			    op2->Text=""+b;
			    output->Text=""+(a-b);   }
			else if(operation->Text == "Multiplication")
			{   b=rand()%6+2;
			    op2->Text=""+b;
			    output->Text=""+(a*b);   }
			else if(operation->Text == "Division")
			{   b=rand()%6+2;
			    a=rand()%7+2;
			    op1->Text=""+(a*b);
			    op2->Text=""+a;
			    output->Text=""+b;       }
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			      int a=rand()%30+10;
				 int b;
				 op1->Text=""+a;
			if(operation->Text == "Addition")
			 {  b=rand()%20+21;
				op2->Text=""+b;
				output->Text=""+(a+b);  }
			else if(operation->Text=="Subtraction")
			{   b=rand()%a+1;
			    op2->Text=""+b;
			    output->Text=""+(a-b);   }
			else if(operation->Text == "Multiplication")
			{   b=rand()%7+3;
			    op2->Text=""+b;
			    output->Text=""+(a*b);   }
			else if(operation->Text == "Division")
			{   b=rand()%7+3;
			    a=rand()%10+3;
			    op1->Text=""+(a*b);
			    op2->Text=""+a;
			    output->Text=""+b;       }
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			      int a=rand()%45+25;
				 int b;
				 op1->Text=""+a;
			if(operation->Text == "Addition")
			 {  b=rand()%40+30;
				op2->Text=""+b;
				output->Text=""+(a+b);  }
			else if(operation->Text=="Subtraction")
			{   b=rand()%(a-10)+9;
			    op2->Text=""+b;
			    output->Text=""+(a-b);   }
			else if(operation->Text == "Multiplication")
			{   b=rand()%10+5;
			    op2->Text=""+b;
			    output->Text=""+(a*b);   }
			else if(operation->Text == "Division")
			{   b=rand()%20+1;
			    a=rand()%12+5;
			    op1->Text=""+(a*b);
			    op2->Text=""+a;
			    output->Text=""+b;       }
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			      int a=rand()%50+50;
				 int b;
				 op1->Text=""+a;
			if(operation->Text == "Addition")
			 {  b=rand()%70+30;
				op2->Text=""+b;
				output->Text=""+(a+b);  }
			else if(operation->Text=="Subtraction")
			{   b=rand()%(a-10)+9;
			    op2->Text=""+b;
			    output->Text=""+(a-b);   }
			else if(operation->Text == "Multiplication")
			{   b=rand()%20+1;
			    op2->Text=""+b;
			    output->Text=""+(a*b);   }
			else if(operation->Text == "Division")
			{   b=rand()%18+3;
			    a=rand()%20+5;
			    op1->Text=""+(a*b);
			    op2->Text=""+a;
			    output->Text=""+b;       }
		 }
private: System::Void panel3_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
private: System::Void abacus_Load(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Visible=false;
			 this->panel2->Visible=true;
			 this->panel3->Visible=false;
			 this->panel4->Visible=false;
		 }
private: System::Void BACK_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->panel1->Visible=false;
			 this->panel2->Visible=true;
			 this->panel3->Visible=false;
			 this->panel4->Visible=false;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->panel1->Visible=false;
			 this->panel2->Visible=true;
			 this->panel3->Visible=false;
			 this->panel4->Visible=false;
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			  this->panel1->Visible=true;
			 this->panel2->Visible=false;
			 this->panel3->Visible=false;
			 this->panel4->Visible=false;
		 }
};
}

