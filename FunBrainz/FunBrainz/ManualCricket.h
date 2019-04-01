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
			this->label1->Location = System::Drawing::Point(157, 50);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(168, 29);
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
			this->label2->Location = System::Drawing::Point(22, 88);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(473, 108);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// ManualCricket
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(506, 314);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(522, 353);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(522, 353);
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
					 label2->Text ="1. 2048 is played on a 4×4 grid, with numbered tiles that slide smoothly\n  when a player moves them using the four arrow keys.\r\n 2. Every turn, a new tile will randomly appear in an empty spot on the\r\n board with a value of either 2 or 4.\r\n 3. Tiles slide as far as possible in the chosen direction until they are\r\n  stopped by either another tile or the edge of the grid.\r\n 4. If two tiles of the same number collide while moving, they will \r\n  merge into a tile with the total value of the two tiles that collided.\r\n 5. The user's score starts at zero, and is incremented whenever \r\n two tiles combine, by the value of the new tile.\r\n 6. When the player has no legal moves, game ends. ";
				 }

				 //imagequiz
				 if(typex==3)
				 {
					 label2->Text =  "1.Select from various fields provided on this page to proceed.\r\n 2. Questions consist of an image for which you have to enter the \r\ncorrect English word.\r\n 3. Alphabet which is being clicked will fill leftmost empty box. \r\n 4. The letters which user can choose are in black colour and used\r\none will be green in colour.\r\n 5. Press on Hint button for a quick hint!!\r\n 6. Solving of the question gradually will lead to increase in level.";
				 }

				 //pipeline
				 if(typex==4)
				 {
					 label2->Text = "1. Choose toughness and level which you want (can choose a level if he\r\nhas completed all previous levels). There are five stages and 50 level for each stages.\r\n2. User will be given 60sec to \r\nsolve the puzzle.\r\n3. In this puzzle user needs to form a path using pieces of pipes to \r\ngo from upper left corner to lower right corner.\r\n4. By clicking on any grid piece you can rotate it clockwise by\r\n90-degree.\r\n5. User have to complete the path to win the game and move \r\nto next level. ";
				 }

				// operator filling
				 if(typex==5)
				 {
					 label2->Text = "1. Enter the correct operators in the  given text boxes.\r\n2.Enter within the given time frame to get points\r\n3.If you fail to enter within 30 sec you will lose a try.\r\n4.You will get a total  of three tries.\r\n5.For your help hint will be provided exactly once in the game.\r\n6.There are 5 levels each having 5 questions.\r\n";
				 }


				 // cloud
				 if(typex==5)
				 {
					 label2->Text = "1. Enter the correct operators in the  given text boxes.\r\n2.Enter within the given time frame to get points\r\n3.If you fail to enter within 30 sec you will lose a try.\r\n4.You will get a total  of three tries.\r\n5.For your help hint will be provided exactly once in the game.\r\n6.There are 5 levels each having 5 questions.\r\n";
				 }



			 }
	};
}
