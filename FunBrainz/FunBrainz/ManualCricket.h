#pragma once

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManualCricket
	/// </summary>
	public ref class ManualCricket : public System::Windows::Forms::Form
	{
	public:
		ManualCricket(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		ManualCricket(int ty)
		{
			InitializeComponent();
			typex = ty;
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManualCricket()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ManualCricket::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Georgia", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(209, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 35);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Instructions";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(43, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(599, 144);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// ManualCricket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(672, 378);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(690, 425);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(690, 425);
			this->Name = L"ManualCricket";
			this->Text = L"ManualCricket";
			this->Load += gcnew System::EventHandler(this, &ManualCricket::ManualCricket_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int typex;
	private: System::Void ManualCricket_Load(System::Object^  sender, System::EventArgs^  e) {
				 if(typex==1)
				 {
					 label2->Text = "1. Enter the correct answer of the question and click submit.\r\n \r\n 2. Stop the slider by clicking stop and the outcome that the slider\r\n points to will be the outcome. \r\n \r\n3. Chase down the target to win the game and ENJOY!!";
				 }
				 //2048
				 if(typex==2)
				 {
					 label2->Text = "1. Enter the correct answer of the question and click submit.\r\n \r\n 2. Stop the slider by clicking stop and the outcome that the slider\r\n points to will be the outcome. \r\n \r\n3. Chase down the target to win the game and ENJOY!!";
				 }
				 //imagequiz
				 if(typex==3)
				 {
					 label2->Text = "1. Enter the correct answer of the question and click submit.\r\n \r\n 2. Stop the slider by clicking stop and the outcome that the slider\r\n points to will be the outcome. \r\n \r\n3. Chase down the target to win the game and ENJOY!!";
				 }
				 //pipeline
				 if(typex==4)
				 {
					 label2->Text = "1. Enter the correct answer of the question and click submit.\r\n \r\n 2. Stop the slider by clicking stop and the outcome that the slider\r\n points to will be the outcome. \r\n \r\n3. Chase down the target to win the game and ENJOY!!";
				 }
			 }
	};
}
