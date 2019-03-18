#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#pragma once

				 
namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for operatorFilling
	/// </summary>
	public ref class operatorFilling : public System::Windows::Forms::Form
	{
	public:
		operatorFilling(void)
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
		~operatorFilling()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  number1;
	private: System::Windows::Forms::Label^  oper1;
	private: System::Windows::Forms::Label^  number2;
	private: System::Windows::Forms::Label^  oper2;
	private: System::Windows::Forms::Label^  number3;
	protected: 





	private: System::Windows::Forms::Label^  equalSign;
	private: System::Windows::Forms::Label^  answer;
	private: System::Windows::Forms::Label^  text1;
	private: System::Windows::Forms::Label^  text2;
	private: System::Windows::Forms::TextBox^  inputOp1;
	private: System::Windows::Forms::TextBox^  inputOp2;
	private: System::Windows::Forms::Button^  submit;


	protected: 







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
			this->number1 = (gcnew System::Windows::Forms::Label());
			this->oper1 = (gcnew System::Windows::Forms::Label());
			this->number2 = (gcnew System::Windows::Forms::Label());
			this->oper2 = (gcnew System::Windows::Forms::Label());
			this->number3 = (gcnew System::Windows::Forms::Label());
			this->equalSign = (gcnew System::Windows::Forms::Label());
			this->answer = (gcnew System::Windows::Forms::Label());
			this->text1 = (gcnew System::Windows::Forms::Label());
			this->text2 = (gcnew System::Windows::Forms::Label());
			this->inputOp1 = (gcnew System::Windows::Forms::TextBox());
			this->inputOp2 = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// number1
			// 
			this->number1->AutoSize = true;
			this->number1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number1->Location = System::Drawing::Point(12, 70);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(65, 25);
			this->number1->TabIndex = 0;
			this->number1->Text = L"num1";
			this->number1->Click += gcnew System::EventHandler(this, &operatorFilling::num1_Click);
			// 
			// oper1
			// 
			this->oper1->AutoSize = true;
			this->oper1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oper1->Location = System::Drawing::Point(78, 131);
			this->oper1->Name = L"oper1";
			this->oper1->Size = System::Drawing::Size(48, 25);
			this->oper1->TabIndex = 1;
			this->oper1->Text = L"op1";
			// 
			// number2
			// 
			this->number2->AutoSize = true;
			this->number2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number2->Location = System::Drawing::Point(162, 70);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(65, 25);
			this->number2->TabIndex = 2;
			this->number2->Text = L"num2";
			// 
			// oper2
			// 
			this->oper2->AutoSize = true;
			this->oper2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->oper2->Location = System::Drawing::Point(241, 131);
			this->oper2->Name = L"oper2";
			this->oper2->Size = System::Drawing::Size(48, 25);
			this->oper2->TabIndex = 3;
			this->oper2->Text = L"op2";
			// 
			// number3
			// 
			this->number3->AutoSize = true;
			this->number3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number3->Location = System::Drawing::Point(306, 70);
			this->number3->Name = L"number3";
			this->number3->Size = System::Drawing::Size(65, 25);
			this->number3->TabIndex = 4;
			this->number3->Text = L"num3";
			this->number3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// equalSign
			// 
			this->equalSign->AutoSize = true;
			this->equalSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->equalSign->Location = System::Drawing::Point(419, 70);
			this->equalSign->Name = L"equalSign";
			this->equalSign->Size = System::Drawing::Size(24, 25);
			this->equalSign->TabIndex = 5;
			this->equalSign->Text = L"=";
			// 
			// answer
			// 
			this->answer->AutoSize = true;
			this->answer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->answer->Location = System::Drawing::Point(449, 70);
			this->answer->Name = L"answer";
			this->answer->Size = System::Drawing::Size(47, 25);
			this->answer->TabIndex = 6;
			this->answer->Text = L"ans";
			// 
			// text1
			// 
			this->text1->AutoSize = true;
			this->text1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->text1->Location = System::Drawing::Point(137, 70);
			this->text1->Name = L"text1";
			this->text1->Size = System::Drawing::Size(19, 25);
			this->text1->TabIndex = 7;
			this->text1->Text = L"(";
			// 
			// text2
			// 
			this->text2->AutoSize = true;
			this->text2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->text2->Location = System::Drawing::Point(377, 70);
			this->text2->Name = L"text2";
			this->text2->Size = System::Drawing::Size(19, 25);
			this->text2->TabIndex = 8;
			this->text2->Text = L")";
			// 
			// inputOp1
			// 
			this->inputOp1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->inputOp1->Location = System::Drawing::Point(83, 70);
			this->inputOp1->Name = L"inputOp1";
			this->inputOp1->Size = System::Drawing::Size(40, 31);
			this->inputOp1->TabIndex = 9;
			// 
			// inputOp2
			// 
			this->inputOp2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->inputOp2->Location = System::Drawing::Point(246, 70);
			this->inputOp2->Name = L"inputOp2";
			this->inputOp2->Size = System::Drawing::Size(39, 31);
			this->inputOp2->TabIndex = 10;
			// 
			// submit
			// 
			this->submit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->submit->Location = System::Drawing::Point(382, 132);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(133, 35);
			this->submit->TabIndex = 11;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &operatorFilling::submit_Click);
			// 
			// operatorFilling
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(527, 251);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->inputOp2);
			this->Controls->Add(this->inputOp1);
			this->Controls->Add(this->text2);
			this->Controls->Add(this->text1);
			this->Controls->Add(this->answer);
			this->Controls->Add(this->equalSign);
			this->Controls->Add(this->number3);
			this->Controls->Add(this->oper2);
			this->Controls->Add(this->number2);
			this->Controls->Add(this->oper1);
			this->Controls->Add(this->number1);
			this->Name = L"operatorFilling";
			this->Text = L"operatorFilling";
			this->Load += gcnew System::EventHandler(this, &operatorFilling::operatorFilling_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
int num1,num2 , num3  ,level;

private : System::Void GenerateQuestion (int level)
{

				 array<System::String ^>^ s = gcnew array<System::String ^>  { "+" , "-" , "*" , "/" } ;

				 long int ans;


				 int range ;
				 double temp=2;
				 range = pow( temp , level + 3 );
				 
				 int op1,op2;
				 op1 = rand()%2;

				 num1 = rand() % range;
				 num2 = rand() % range;

				 op2 = rand()%4;

				 ans = 0;
				 if ( op2 >= 2) 
				 {
					if( range < 50 )
					{
						range /= 2 ;
						num3 = 1 + rand() % range;
					}

					else
					{
						num3 = 1 + rand() % ( rand() % 50 );
					}

					if ( op2 == 2)
					{
						ans = num2 * num3;		
					}

					else
					{
						range = pow( temp , level );
						ans = rand() % range + 1 ;

						num3 = rand() % range + 1 ;

						if(num3 > 30)
						{
							num3 = rand() % 30 +1 ;					
						}

						num2 = num3 * ans;
					
					}
				 }
					
				 else
				 {
					num3 = rand() % range;
					
					if( op2 == 0)
					{
						ans = num2 + num3;	
					}

					else if(op2 == 1 )
					{
						ans = num2 - num3;	
					}

					else
					{
						MessageBox::Show("Error");
					}
				 }

				 if(op1 == 0)
				 {
					ans += num1;
				 }

				 else
				 {
					ans -= num1;
					ans *= -1 ;
				 }

				 number1 -> Text = System::Convert::ToString(num1);
				 number2 -> Text = System::Convert::ToString(num2);

				 oper1 -> Text = s[op1]; 
				 oper2 -> Text = s[op2];

				 number3 -> Text = System::Convert::ToString(num3);
				 answer -> Text = System::Convert::ToString(ans);
		  
}

private: System::Void operatorFilling_Load(System::Object^  sender, System::EventArgs^  e) {
			
			 level=1;
			 
			 GenerateQuestion(level);


			 }
private: System::Void num1_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {

			long int ans; 

			if( inputOp2->Text == "+")
			{
				ans = num2 + num3;
			}

			else if ( inputOp2->Text =="-")
			{
				ans = num2 - num3;
			}

			else if ( inputOp2->Text == "*")
			{
				ans = num2 * num3;
			}

			else if ( inputOp2->Text == "/")
			{
				ans = num2 / num3;
			}

			if( inputOp1->Text == "+")
			{
				ans += num1;
			}

			else if ( inputOp1->Text =="-")
			{
				ans = num1 - ans;
			}

			else if ( inputOp1->Text == "*")
			{
				ans *= num1 ;
			}

			else if ( inputOp1->Text == "/")
			{
				if (ans == 0)
				{
					goto l1;
				}

				ans = num1 / ans ;
			}
			
			if ( System::Convert::ToString(ans) == answer->Text )
			{
				MessageBox::Show("Correct");
				GenerateQuestion(level);
			}

			else
			{
				l1:
				MessageBox::Show("Wrong");			
			}

			inputOp1->Text = "";
			inputOp2->Text = "";


			/*
			MessageBox::Show(System::Convert::ToString(ans));
			MessageBox::Show(System::Convert::ToString(num1));
			MessageBox::Show(System::Convert::ToString(num2));
			MessageBox::Show(System::Convert::ToString(num3));
			*/
		 }
};
}
