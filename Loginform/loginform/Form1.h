#pragma once
#include "Homepage.h"
#include "Signup.h"
namespace loginform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Web;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	   
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  signupbtn;
	private: System::Windows::Forms::Button^  loginbtn;
	private: System::Windows::Forms::CheckBox^  showpass;
	private: System::Windows::Forms::Button^  Forget;



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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->signupbtn = (gcnew System::Windows::Forms::Button());
			this->loginbtn = (gcnew System::Windows::Forms::Button());
			this->showpass = (gcnew System::Windows::Forms::CheckBox());
			this->Forget = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(309, 126);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 25);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Password";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(309, 66);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 25);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Username";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(324, 320);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"If you don\'t have an account";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(460, 126);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(245, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(460, 69);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 22);
			this->textBox1->TabIndex = 8;
			// 
			// signupbtn
			// 
			this->signupbtn->Location = System::Drawing::Point(605, 295);
			this->signupbtn->Margin = System::Windows::Forms::Padding(4);
			this->signupbtn->Name = L"signupbtn";
			this->signupbtn->Size = System::Drawing::Size(136, 50);
			this->signupbtn->TabIndex = 5;
			this->signupbtn->Text = L"Sign up";
			this->signupbtn->UseVisualStyleBackColor = true;
			this->signupbtn->Click += gcnew System::EventHandler(this, &Form1::signupbtn_Click);
			// 
			// loginbtn
			// 
			this->loginbtn->Location = System::Drawing::Point(429, 191);
			this->loginbtn->Margin = System::Windows::Forms::Padding(4);
			this->loginbtn->Name = L"loginbtn";
			this->loginbtn->Size = System::Drawing::Size(136, 50);
			this->loginbtn->TabIndex = 6;
			this->loginbtn->Text = L"Login";
			this->loginbtn->UseVisualStyleBackColor = true;
			this->loginbtn->Click += gcnew System::EventHandler(this, &Form1::loginbtn_Click);
			// 
			// showpass
			// 
			this->showpass->Location = System::Drawing::Point(664, 191);
			this->showpass->Name = L"showpass";
			this->showpass->Size = System::Drawing::Size(186, 24);
			this->showpass->TabIndex = 12;
			this->showpass->Text = L"Showpassword";
			this->showpass->UseVisualStyleBackColor = true;
			this->showpass->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Forget
			// 
			this->Forget->Location = System::Drawing::Point(71, 218);
			this->Forget->Name = L"Forget";
			this->Forget->Size = System::Drawing::Size(150, 23);
			this->Forget->TabIndex = 13;
			this->Forget->Text = L"ForgetPasssword";
			this->Forget->UseVisualStyleBackColor = true;
			this->Forget->Click += gcnew System::EventHandler(this, &Form1::Forget_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1024, 411);
			this->Controls->Add(this->Forget);
			this->Controls->Add(this->showpass);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->signupbtn);
			this->Controls->Add(this->loginbtn);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
			 {
                textBox1->Text="";
			    textBox2->Text="";	
				textBox2->PasswordChar='*';

			 }

	private: System :: Void cleartext()
			 {
				 textBox1->Text="";
				  textBox2->Text="";
				  showpass->Checked=false;
			 }
     private: System::Void loginbtn_Click(System::Object^  sender, System::EventArgs^  e)
		 
		 
		 {
		
				 
		
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
			      con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";
					
					 String ^ access1 = "SELECT UserName,ID  FROM database_ikya WHERE UserName = '" + textBox1->Text + "' and Password = '" + textBox2->Text + "' ";
					 con->Open();
					 OleDb::OleDbDataReader ^ reader;
					 int count=0;
				     try{
								 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
								 reader = command->ExecuteReader();
								 
								 if (reader->HasRows)
								 {
									 while (reader->Read() == true)
									 {
										 count++;
									 }
								 }
								 else
								 {
									 cleartext();
									 MessageBox::Show("enter valid ones");
								 }
								 reader->Close();
								 con->Close();
					    }
					  catch(Exception ^ ex)
						{
								 reader->Close();
								 con->Close();
								 MessageBox::Show(ex->Message);
								 return ;
						}
					  if(count==1)
					  {
						  
										 String ^ x = textBox1->Text;
										 cleartext();
										 Homepage ^ f3 = gcnew Homepage(this);
										 this->Hide();
										 f3->user = x;
										 f3->ShowDialog();
										 this->Show();
					  }
		 }
private: System::Void signupbtn_Click(System::Object^  sender, System::EventArgs^  e)
		 {

			                 cleartext();
			                 Signup ^ f = gcnew Signup(this);
							 this->Hide();  
							 f->ShowDialog();
		 }

private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		 {
			     if (showpass->Checked)
				 {
					 textBox2->PasswordChar='\0';
				 }
				 else
				 {
					 textBox2->PasswordChar='*';
				 } 
		 }


          int send(String ^ email)
			 {

			   try{
					 MailMessage ^ mail = gcnew MailMessage("trakeshreddy1999@gmail.com", email, "Your New Password", "rakrak");
					 SmtpClient ^ client = gcnew SmtpClient("smtp.gmail.com");
					 client->Port = 587;
					 client->Credentials = gcnew System::Net::NetworkCredential("trakeshreddy1999@gmail.com", "rakeshreddy");
					 client->EnableSsl = true;
					 client->Send(mail);
					 MessageBox::Show("mail sent succesfully");
					 return 1;
				 }
				 catch (Exception ^ ex)
				 {
					 MessageBox::Show(ex->Message);
					 return 0;
				 }
				 return 0;

			 }

private: System::Void update()
		 {   


              
		
			     	 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
			      con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";

			           String ^ access1 = "update [database_ikya] set  [Password] = 'rakrak'  WHERE  UserName  = '"+ textBox1->Text + "' ";
					//  " update database_ikya set FirstName= '" + textBox1->Text + "', LastName= '" + textBox2->Text + "', Class= '" + textBox3->Text + "', DateOfBirth= '" + strDate + "', Gender= '" + Gendertxt->Text + "', MobileNumber= '" + textBox6->Text + "', Email= '" + textBox7->Text + "' WHERE  UserName  = '" + user + "' ";
				 	 	 con->Open();
					   try{
							  OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
                              command->ExecuteNonQuery();
							  con->Close();
				              MessageBox::Show("Password changed");
			             }
			          catch (Exception ^ ex)
			           {
						     MessageBox::Show(ex->Message);
					          MessageBox::Show("something wrong with updating password");
							  con->Close();
				        }

		 }
private: System::Void Forget_Click(System::Object^  sender, System::EventArgs^  e) 
		 {

			        
		
				 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
			      con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=ikya_database.accdb;";
			        String ^ access1 = "SELECT Email  FROM database_ikya WHERE UserName = '" + textBox1->Text + "'  ";
					 con->Open();
					 OleDb::OleDbDataReader ^ reader;
					 int count=0;
					 String ^  email;
				     try{
								 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(access1, con);
								  reader = command->ExecuteReader();
								 
								 if (reader->HasRows)
								 {
									 while (reader->Read() == true)
									 {
										 count++;
										 email=reader->GetString(0);
									 }
								 }
								 else
								 {
									 cleartext();
									 MessageBox::Show("enter valid username");
									 return;
								 }
								 reader->Close();
								 con->Close();
					    }
					  catch(Exception ^ ex)
						{
								 reader->Close();
								 con->Close();
								 MessageBox::Show(ex->Message);
								 MessageBox::Show("enter valid username");
								  return;
						}
					  if(count==1)
					  {
					        if(send(email))
							 {
								 update();
								 MessageBox::Show("email was sent");
								 
							 }
						     else
							  {
								   MessageBox::Show("Forget Password Currently Unaviabale");
							  }
					  }
		 }
};
}

