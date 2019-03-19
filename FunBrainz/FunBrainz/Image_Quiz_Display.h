#pragma once
#include<vector>
#include<ctime>
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
		Image_Quiz_Display(void)
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
		~Image_Quiz_Display()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PB_Quiz_Image;
	private: System::Windows::Forms::Button^  btnNext;
	private: System::Windows::Forms::Label^  label1;
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
			this->btnNext = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Quiz_Image))->BeginInit();
			this->SuspendLayout();
			// 
			// PB_Quiz_Image
			// 
			this->PB_Quiz_Image->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PB_Quiz_Image.Image")));
			this->PB_Quiz_Image->Location = System::Drawing::Point(347, 12);
			this->PB_Quiz_Image->Name = L"PB_Quiz_Image";
			this->PB_Quiz_Image->Size = System::Drawing::Size(316, 231);
			this->PB_Quiz_Image->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_Quiz_Image->TabIndex = 0;
			this->PB_Quiz_Image->TabStop = false;
			// 
			// btnNext
			// 
			this->btnNext->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->btnNext->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->btnNext->Location = System::Drawing::Point(806, 82);
			this->btnNext->Name = L"btnNext";
			this->btnNext->Size = System::Drawing::Size(105, 89);
			this->btnNext->TabIndex = 1;
			this->btnNext->Text = L"NEXT";
			this->btnNext->UseVisualStyleBackColor = false;
			this->btnNext->Click += gcnew System::EventHandler(this, &Image_Quiz_Display::btnNext_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(37, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Animal";
			// 
			// Image_Quiz_Display
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnNext);
			this->Controls->Add(this->PB_Quiz_Image);
			this->Name = L"Image_Quiz_Display";
			this->Text = L"Image_Quiz_Display";
			this->Load += gcnew System::EventHandler(this, &Image_Quiz_Display::Image_Quiz_Display_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PB_Quiz_Image))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		static array<String^>^ image_file_name = gcnew array<String^>(1000);
		static array<String^>^ image_name = gcnew array<String^>(1000);
		static array<bool>^ visited_image = gcnew array<bool>(1000);
		static int counter_image = 0;
		static int length_of_answer = 0;
	public:
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
			x = x + 75;

			clear->Location = System::Drawing::Point(x, y);
			clear->Name = L"clear";
			clear->Size = System::Drawing::Size(70,45);
			clear->TabIndex = 1;
			clear->Text = "clear";
			clear->UseVisualStyleBackColor = false;
			this->Controls->Add(clear);
			x = x + 75;

			back->Location = System::Drawing::Point(x, y);
			back->Name = L"back";
			back->Size = System::Drawing::Size(70,45);
			back->TabIndex = 1;
			back->Text = "back";
			back->UseVisualStyleBackColor = false;
			this->Controls->Add(back);
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
			Button^ btn = ((Button^)sender);
			Control^ random = this->Controls[L"0"];
			random->Text = btn->Text;
		}

		void refresh_image(){
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
				return;
			}
			while (1){
				random_index = rand() % counter_image;
				if (visited_image[random_index] == false){
					visited_image[random_index] = true;
					break;
				}
			}
			String ^ str = "media\\" + image_file_name[random_index];
			//String ^ str = "C:\\Users\\Vakul Gupta\\Desktop\\Software-3\\Child-Education\\FunBrainz\\FunBrainz\\media\\" + image_file_name[random_index];
			image1 = gcnew Bitmap(str);
			PB_Quiz_Image->Image = image1;
			//PB_Quiz_Image->Name = image_name[random_index];
			
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
				 srand(time(0));
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String^ domain = "Camel";
					 String ^ Sql = "Select * from Image_Quiz_Display where [Domain] = '" + label1->Text + "';";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 //MessageBox::Show(command->ExecuteScalar()->ToString());
					 OleDb::OleDbDataReader ^ reader = command->ExecuteReader();
					 while (reader->Read()){
						 String^ dum =  reader[0]->ToString();
						 //int index = System::Int64::Parse(dum);
						 image_file_name[counter_image] = reader[2]->ToString();
						 image_name[counter_image] = reader[3] -> ToString();
						 visited_image[counter_image++] = false;

					 }
					 con->Close();
					 refresh_image();

				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
	}
	private: System::Void btnNext_Click(System::Object^  sender, System::EventArgs^  e) {
				 
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
	

				 refresh_image();
	}
};
}