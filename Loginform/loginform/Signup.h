#pragma once
#include "Homepage.h"
namespace loginform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;


	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  Gendertxt;
	private: System::Windows::Forms::DateTimePicker^  DOBtxt;



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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Gendertxt = (gcnew System::Windows::Forms::ComboBox());
			this->DOBtxt = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(117, 352);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 17);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Email ID";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(117, 315);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 17);
			this->label8->TabIndex = 23;
			this->label8->Text = L"Mobile Number";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(145, 206);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(42, 17);
			this->label7->TabIndex = 19;
			this->label7->Text = L"Class";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(132, 278);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Gender";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(132, 241);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 17);
			this->label5->TabIndex = 21;
			this->label5->Text = L"Date of Birth";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(117, 174);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(76, 17);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(117, 142);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 17);
			this->label3->TabIndex = 15;
			this->label3->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(117, 110);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Password";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(116, 66);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(119, 25);
			this->label1->TabIndex = 17;
			this->label1->Text = L"User Name";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(265, 348);
			this->textBox9->Margin = System::Windows::Forms::Padding(4);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(197, 22);
			this->textBox9->TabIndex = 14;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(265, 311);
			this->textBox8->Margin = System::Windows::Forms::Padding(4);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(197, 22);
			this->textBox8->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(265, 197);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(197, 22);
			this->textBox5->TabIndex = 7;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(265, 165);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(197, 22);
			this->textBox4->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(265, 133);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(197, 22);
			this->textBox3->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(265, 101);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(197, 22);
			this->textBox2->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(265, 69);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 22);
			this->textBox1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(305, 395);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 37);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Sign Up";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Signup::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(64, 404);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 28);
			this->button2->TabIndex = 24;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Signup::button2_Click);
			// 
			// Gendertxt
			// 
			this->Gendertxt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Gendertxt->FormattingEnabled = true;
			this->Gendertxt->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Male", L"Female", L"Others"});
			this->Gendertxt->Location = System::Drawing::Point(265, 275);
			this->Gendertxt->Name = L"Gendertxt";
			this->Gendertxt->Size = System::Drawing::Size(197, 24);
			this->Gendertxt->TabIndex = 25;
			// 
			// DOBtxt
			// 
			this->DOBtxt->CustomFormat = L"dd-mm-yyyy";
			this->DOBtxt->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOBtxt->Location = System::Drawing::Point(265, 236);
			this->DOBtxt->MinDate = System::DateTime(2005, 1, 1, 0, 0, 0, 0);
			this->DOBtxt->Name = L"DOBtxt";
			this->DOBtxt->Size = System::Drawing::Size(197, 22);
			this->DOBtxt->TabIndex = 26;
			// 
			// Signup
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(722, 497);
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
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Signup";
			this->Text = L"Signup";
			this->Load += gcnew System::EventHandler(this, &Signup::Signup_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Signup_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private : System::Boolean uservalidate ( String ^ s )
    {
					if(!userdatavalidate(s)) 
					{
						MessageBox::Show("enter valid  username");
						return false;
					}
    	     
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";
					 String ^ access1 = "SELECT ID  FROM database_ikya WHERE UserName = '" + textBox1->Text + "' ";
					 con->Open();
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
					 OleDb::OleDbDataReader ^ reader = command->ExecuteReader();
				    try{
								 if (reader->HasRows)
								 {
									 reader->Close();
									 con->Close();
									 MessageBox::Show("UserName Already taken");
									 return false;
								 }
								 reader->Close();
								 con->Close();
								 return true;
			   					 }
								 catch(Exception ^ ex)
								 {
									 reader->Close();
								 	 con->Close();
									 MessageBox::Show(ex->Message);
									 return false;
					            }
				 return false;

	}
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
					  for (int  i = 0; i < s->Length; i++)
					  {
						  if (s[i] == '@') return true;
					  }
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
							  if (!(s[i] >= 'a'&&s[i] <= 'z')) return false;
						  }
						  return true;
			 }
			        private: System::String ^ updatetext(String ^ s)
					   {
									s = s->TrimEnd(' ');
									s = s->TrimStart(' ');
									return s;
					   }
			        private: System::Boolean ^ datavalid()
					   {
									 
									  textBox1->Text=updatetext(textBox1->Text);
									  textBox5->Text=updatetext(textBox5->Text);
									  textBox8->Text=updatetext(textBox8->Text);
									  textBox9->Text=updatetext(textBox9->Text);
									  textBox3->Text=updatetext(textBox3->Text->ToLower());
									  textBox4->Text=updatetext(textBox4->Text->ToLower());
									  if(!uservalidate(textBox1->Text))  return false ;
									  if(!classvalidate(textBox5->Text))  {MessageBox::Show("enter cvalid class between 1-10");return false ;}
									  if(!Mobilevalidate(textBox8->Text)) {MessageBox::Show("enter valid Mobile Number");return false ;}
									  if(!Emailvalidate(textBox9->Text))  {MessageBox::Show("enter valid Email");return false;}
									  if(!namevalidate(textBox3->Text))   {MessageBox::Show("enter valid FirstName");return false;}
									  if(!namevalidate(textBox4->Text))   {MessageBox::Show("enter valid LastName");return false;}
					                   return true;
							 }

		
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		 DateTime ^ var = DOBtxt->Value;
		 String ^  strDate = var->ToString("dd-MM-yyyy");
		 if(!datavalid()) return ;
	   try{
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
				 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";
				 String ^ access1 = "insert into database_ikya ([UserName],[Password],[FirstName],[LastName],[Class],[DateOfBirth],[Gender],[MobileNumber],[Email]) values('" + textBox1->Text + "','" + textBox2->Text + "','" + textBox3->Text + "','" + textBox4->Text + "','" + textBox5->Text + "','" + strDate + "','" + Gendertxt->Text + "','"+ textBox8->Text + "','"+ textBox9->Text + "')";
				 con->Open();
				 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
                 command->ExecuteNonQuery();
				 MessageBox::Show("Succefully Added");
				 con->Close();
				 Homepage ^ f3 = gcnew Homepage(obj);
		         this->Hide();
				  f3->user = textBox1->Text;
				  f3->ShowDialog();
		 }
			 catch (Exception ^ ex)
			 {
				 MessageBox::Show(ex->Message);
			 }
			 

			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
		 {
			   obj->Show();
			   this->Hide();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
		 {

		 }
};
}
