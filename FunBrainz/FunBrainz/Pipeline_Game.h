#pragma once
#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include<utility>
#include<vector>
#include<algorithm>

//typedef enum RotateFlipType {
//	RotateNoneFlipNone,
//	Rotate90FlipNone,
//	Rotate180FlipNone,
//	Rotate270FlipNone,
//	RotateNoneFlipX,
//	Rotate90FlipX,
//	Rotate180FlipX,
//	Rotate270FlipX,
//	RotateNoneFlipY,
//	Rotate90FlipY,
//	Rotate180FlipY,
//	Rotate270FlipY,
//	RotateNoneFlipXY,
//	Rotate90FlipXY,
//	Rotate180FlipXY,
//	Rotate270FlipXY
//} ;

using namespace std;
using namespace System::Data::OleDb;

namespace FunBrainz {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pipeline_Game
	/// </summary>
	public ref class Pipeline_Game : public System::Windows::Forms::Form
	{
	public:
		Pipeline_Game(void)
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
		~Pipeline_Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  PB_11;
	private: System::Windows::Forms::PictureBox^  PB_33;
	protected: 

	protected: 

	private: System::Windows::Forms::PictureBox^  PB_32;

	private: System::Windows::Forms::PictureBox^  PB_31;

	private: System::Windows::Forms::PictureBox^  PB_24;


	private: System::Windows::Forms::PictureBox^  PB_23;

	private: System::Windows::Forms::PictureBox^  PB_22;

	private: System::Windows::Forms::PictureBox^  PB_21;

	private: System::Windows::Forms::PictureBox^  PB_14;

	private: System::Windows::Forms::PictureBox^  PB_13;

	private: System::Windows::Forms::PictureBox^  PB_12;
	private: System::Windows::Forms::PictureBox^  PB_34;
	private: System::Windows::Forms::PictureBox^  PB_44;



	private: System::Windows::Forms::PictureBox^  PB_43;

	private: System::Windows::Forms::PictureBox^  PB_42;

	private: System::Windows::Forms::PictureBox^  PB_41;
	private: System::Windows::Forms::Button^  btn_Back_To_Main_From_Pipeline_Game;



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
			this->PB_11 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_33 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_32 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_31 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_24 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_23 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_22 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_21 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_14 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_13 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_12 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_34 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_44 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_43 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_42 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_41 = (gcnew System::Windows::Forms::PictureBox());
			this->btn_Back_To_Main_From_Pipeline_Game = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_41))->BeginInit();
			this->SuspendLayout();
			// 
			// PB_11
			// 
			this->PB_11->Location = System::Drawing::Point(121, 33);
			this->PB_11->Name = L"PB_11";
			this->PB_11->Size = System::Drawing::Size(90, 90);
			this->PB_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_11->TabIndex = 0;
			this->PB_11->TabStop = false;
			this->PB_11->UseWaitCursor = true;
			this->PB_11->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_33
			// 
			this->PB_33->Location = System::Drawing::Point(301, 213);
			this->PB_33->Name = L"PB_33";
			this->PB_33->Size = System::Drawing::Size(90, 90);
			this->PB_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_33->TabIndex = 1;
			this->PB_33->TabStop = false;
			this->PB_33->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_32
			// 
			this->PB_32->Location = System::Drawing::Point(211, 213);
			this->PB_32->Name = L"PB_32";
			this->PB_32->Size = System::Drawing::Size(90, 90);
			this->PB_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_32->TabIndex = 2;
			this->PB_32->TabStop = false;
			this->PB_32->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_31
			// 
			this->PB_31->Location = System::Drawing::Point(121, 213);
			this->PB_31->Name = L"PB_31";
			this->PB_31->Size = System::Drawing::Size(90, 90);
			this->PB_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_31->TabIndex = 3;
			this->PB_31->TabStop = false;
			this->PB_31->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_24
			// 
			this->PB_24->Location = System::Drawing::Point(391, 123);
			this->PB_24->Name = L"PB_24";
			this->PB_24->Size = System::Drawing::Size(90, 90);
			this->PB_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_24->TabIndex = 4;
			this->PB_24->TabStop = false;
			this->PB_24->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_23
			// 
			this->PB_23->Location = System::Drawing::Point(301, 123);
			this->PB_23->Name = L"PB_23";
			this->PB_23->Size = System::Drawing::Size(90, 90);
			this->PB_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_23->TabIndex = 5;
			this->PB_23->TabStop = false;
			this->PB_23->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_22
			// 
			this->PB_22->Location = System::Drawing::Point(211, 123);
			this->PB_22->Name = L"PB_22";
			this->PB_22->Size = System::Drawing::Size(90, 90);
			this->PB_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_22->TabIndex = 6;
			this->PB_22->TabStop = false;
			this->PB_22->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_21
			// 
			this->PB_21->Location = System::Drawing::Point(121, 123);
			this->PB_21->Name = L"PB_21";
			this->PB_21->Size = System::Drawing::Size(90, 90);
			this->PB_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_21->TabIndex = 7;
			this->PB_21->TabStop = false;
			this->PB_21->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_14
			// 
			this->PB_14->Location = System::Drawing::Point(391, 33);
			this->PB_14->Name = L"PB_14";
			this->PB_14->Size = System::Drawing::Size(90, 90);
			this->PB_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_14->TabIndex = 8;
			this->PB_14->TabStop = false;
			this->PB_14->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_13
			// 
			this->PB_13->Location = System::Drawing::Point(301, 33);
			this->PB_13->Name = L"PB_13";
			this->PB_13->Size = System::Drawing::Size(90, 90);
			this->PB_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_13->TabIndex = 9;
			this->PB_13->TabStop = false;
			this->PB_13->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_12
			// 
			this->PB_12->Location = System::Drawing::Point(211, 33);
			this->PB_12->Name = L"PB_12";
			this->PB_12->Size = System::Drawing::Size(90, 90);
			this->PB_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_12->TabIndex = 10;
			this->PB_12->TabStop = false;
			this->PB_12->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_34
			// 
			this->PB_34->Location = System::Drawing::Point(391, 213);
			this->PB_34->Name = L"PB_34";
			this->PB_34->Size = System::Drawing::Size(90, 90);
			this->PB_34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_34->TabIndex = 11;
			this->PB_34->TabStop = false;
			this->PB_34->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_44
			// 
			this->PB_44->Location = System::Drawing::Point(391, 303);
			this->PB_44->Name = L"PB_44";
			this->PB_44->Size = System::Drawing::Size(90, 90);
			this->PB_44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_44->TabIndex = 12;
			this->PB_44->TabStop = false;
			this->PB_44->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_43
			// 
			this->PB_43->Location = System::Drawing::Point(301, 303);
			this->PB_43->Name = L"PB_43";
			this->PB_43->Size = System::Drawing::Size(90, 90);
			this->PB_43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_43->TabIndex = 13;
			this->PB_43->TabStop = false;
			this->PB_43->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_42
			// 
			this->PB_42->Location = System::Drawing::Point(211, 303);
			this->PB_42->Name = L"PB_42";
			this->PB_42->Size = System::Drawing::Size(90, 90);
			this->PB_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_42->TabIndex = 14;
			this->PB_42->TabStop = false;
			this->PB_42->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB_41
			// 
			this->PB_41->Location = System::Drawing::Point(121, 303);
			this->PB_41->Name = L"PB_41";
			this->PB_41->Size = System::Drawing::Size(90, 90);
			this->PB_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_41->TabIndex = 15;
			this->PB_41->TabStop = false;
			this->PB_41->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// btn_Back_To_Main_From_Pipeline_Game
			// 
			this->btn_Back_To_Main_From_Pipeline_Game->Location = System::Drawing::Point(669, 79);
			this->btn_Back_To_Main_From_Pipeline_Game->Name = L"btn_Back_To_Main_From_Pipeline_Game";
			this->btn_Back_To_Main_From_Pipeline_Game->Size = System::Drawing::Size(75, 23);
			this->btn_Back_To_Main_From_Pipeline_Game->TabIndex = 16;
			this->btn_Back_To_Main_From_Pipeline_Game->Text = L"BACK";
			this->btn_Back_To_Main_From_Pipeline_Game->UseVisualStyleBackColor = true;
			// 
			// Pipeline_Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(847, 482);
			this->Controls->Add(this->btn_Back_To_Main_From_Pipeline_Game);
			this->Controls->Add(this->PB_41);
			this->Controls->Add(this->PB_42);
			this->Controls->Add(this->PB_43);
			this->Controls->Add(this->PB_44);
			this->Controls->Add(this->PB_34);
			this->Controls->Add(this->PB_12);
			this->Controls->Add(this->PB_13);
			this->Controls->Add(this->PB_14);
			this->Controls->Add(this->PB_21);
			this->Controls->Add(this->PB_22);
			this->Controls->Add(this->PB_23);
			this->Controls->Add(this->PB_24);
			this->Controls->Add(this->PB_31);
			this->Controls->Add(this->PB_32);
			this->Controls->Add(this->PB_33);
			this->Controls->Add(this->PB_11);
			this->Name = L"Pipeline_Game";
			this->Text = L"Pipeline_Game";
			this->Load += gcnew System::EventHandler(this, &Pipeline_Game::Pipeline_Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_41))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		static int **visited;
		static int count_2=0;
		static vector<int> *v;
		static int **encoding_of_image_loaded;
		//left=0
		//right=1;
		//up=2
		//down=3
				void making_encodings(){
			//MessageBox::Show("stage1");
			String^ vector_path = "";
			for(int i=0;i<v->size();i++){
				if(v->at(i) == 0){
					vector_path+=L'L';
				}
					if(v->at(i) == 1){
						vector_path+=L'R';
					}
					if(v->at(i) == 2){
						vector_path+=L'U';
					}
					if(v->at(i) == 3){
						vector_path+=L'D';
					}
				//MessageBox::Show(System::Convert::ToString(v->at(i)));
			}
			//MessageBox::Show(vector_path);
			int prev_x=0;
			int prev_y=0;
			//1 for type A
			//2 for type B
			//3 for type C
			//-1 for garbage
			int type_of_image[4][4];
			int answer_matrix[4][4];
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					answer_matrix[i][j]=-1;
				}
			}
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					type_of_image[i][j]=-1;
				}
			}
			//MessageBox::Show("stage2");
			type_of_image[0][0]=3;
			type_of_image[3][3]=3;
			//MessageBox::Show("stage3");
			if(v->at(0)==1){
				prev_x=0;
				prev_y=1;
				answer_matrix[0][0]=0;
			}
			if(v->at(0)==3){
				prev_x=1;
				prev_y=0;
				answer_matrix[0][0]=1;
			}
			int curr_x=0;
			int curr_y=0;
			if(v->at(0)==1){
				curr_y++;
			}
			if(v->at(0)==0){
				curr_y--;
			}
			if(v->at(0)==2){
				curr_x--;
			}
			if(v->at(0)==3){
				curr_x++;
			}
			for(int i=1;i<v->size();i++){
				if(v->at(i)==1){
					curr_y++;
				}
				if(v->at(i)==0){
					curr_y--;
				}
				if(v->at(i)==2){
					curr_x--;
				}
				if(v->at(i)==3){
					curr_x++;
				}
				//MessageBox::Show("stage4");
				int val2=v->at(i);
				int val1=v->at(i-1);
				if(val1==val2){
					type_of_image[prev_x][prev_y]=1;
					if(val1==1 || val1==0){
						answer_matrix[prev_x][prev_y]=0;
					}else{
						answer_matrix[prev_x][prev_y]=1;
					}
				}else{
					type_of_image[prev_x][prev_y]=2;
					if(val1==0 && val2==2){
						answer_matrix[prev_x][prev_y]=3;
					}
					if(val1==0 && val2==3){
						answer_matrix[prev_x][prev_y]=0;
					}
					if(val1==1 && val2==2){
						answer_matrix[prev_x][prev_y]=2;
					}
					if(val1==1 && val2==3){
						answer_matrix[prev_x][prev_y]=1;
					}
					if(val1==2 && val2==0){
						answer_matrix[prev_x][prev_y]=1;
					}
					if(val1==3 && val2==0){
						answer_matrix[prev_x][prev_y]=2;
					}
					if(val1==2 && val2==1){
						answer_matrix[prev_x][prev_y]=0;
					}
					if(val1==3 && val2==1){
						answer_matrix[prev_x][prev_y]=3;
					}
				}
				prev_x=curr_x;
				prev_y=curr_y;
			}
			if(v->at(v->size()-1)==1){
				answer_matrix[3][3]=2;
			}
			if(v->at(v->size()-1)==3){
				answer_matrix[3][3]=3;
			}
			//MessageBox::Show("type is coming");
			String^ type_of_image_string = "";
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(type_of_image[i][j]==-1){
						type_of_image_string+=L'G';
					}
					if(type_of_image[i][j]==1){
						type_of_image_string+=L'A';
					}
					if(type_of_image[i][j]==2){
						type_of_image_string+=L'B';
					}
					if(type_of_image[i][j]==3){
						type_of_image_string+=L'C';
					}
					//type_of_image_string+=System::Convert::ToString(type_of_image[i][j]);
					//Debug::WriteLine(System::Convert::ToString(type_of_image[i][j]))
					//MessageBox::Show(System::Convert::ToString(type_of_image[i][j]));
					//cout<<type_of_image[i][j]<<" ";
				}
				//cout<<endl;
			}
			String^ Answer_Matrix = "";
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					if(answer_matrix[i][j]==-1){
						Answer_Matrix+=System::Convert::ToString(5);
						continue;
					}
					//MessageBox::Show(System::Convert::ToString(answer_matrix[i][j]));
					Answer_Matrix+=System::Convert::ToString(answer_matrix[i][j]);
				}
			}

			//MessageBox::Show("type ended");

			//*******************************
			try{
				OleDbConnection ^ DB_Connection = gcnew OleDbConnection();
				DB_Connection->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
				//Debug::WriteLine(firstname);
				//Debug::WriteLine("\n\n\n");
				String ^ insertString = "insert into Pipeline_Game([Type_Of_Image_String],[Path_Vector],[Answer_Matrix]) VALUES('" +type_of_image_string+ "', '" +vector_path+ "', '" +Answer_Matrix+"');";
				//Debug::WriteLine(insertString);
				//Debug::WriteLine("\n\n\n");

				//OleDbDataReader ^ dr;
				DB_Connection->Open();
				OleDbCommand ^ cmd = gcnew OleDbCommand(insertString, DB_Connection);
				//dr = cmd->ExecuteReader();
				//cmd->ExecuteNonQuery();
				cmd->Parameters->Add(gcnew OleDbParameter("@Type_Of_Image_String",type_of_image_string));
				cmd->Parameters->Add(gcnew OleDbParameter("@Path_Vector",vector_path));
				cmd->Parameters->Add(gcnew OleDbParameter("@Answer_Matrix",Answer_Matrix));
				cmd->ExecuteNonQuery();
				DB_Connection->Close();

			}

			catch(Exception ^ ex)
			{
				MessageBox::Show(ex->Message);
			}
		}

		int func(int x,int y,int n,int turn){
			if(x<0 || x>n-1){
				return 0;
			}
			if(y<0 || y>n-1){
				return 0;
			}
			if(visited[x][y]==true){
				return 0;
			}else{
				visited[x][y]=true;
			}
			if(turn==0)
			{
				v->push_back(0);
			}
			if(turn==1)
			{
				v->push_back(1);
			}
			if(turn==2)
			{
				v->push_back(2);
			}
			if(turn==3)
			{
				v->push_back(3);
			}
			// cout<<"fnsein"<<endl;

			if(x==n-1 && y==n-1){
				/*if(count_2>=1){
					return 1;
				}*/
				count_2++;
				making_encodings();
				if(turn==0)
				{
					v->erase(v->begin()+v->size()-1);
				}
				if(turn==1)
				{
					v->erase(v->begin()+v->size()-1);
				}
				if(turn==2)
				{
					v->erase(v->begin()+v->size()-1);
				}
				if(turn==3)
				{
					v->erase(v->begin()+v->size()-1);
				}

				return 1;
			}

			int l=func(x-1,y,n,0);
			if(l==1){
				visited[x-1][y]=false;
			}
			int r=func(x+1,y,n,1);
			if(r==1){
				visited[x+1][y]=false;
			}
			int u=func(x,y-1,n,2);
			if(u==1){
				visited[x][y-1]=false;
			}
			int d=func(x,y+1,n,3);
			if(d==1){
				visited[x][y+1]=false;
			}
			visited[x][y]=false;
			if(turn==0)
			{
				v->erase(v->begin()+v->size()-1);
			}
			if(turn==1)
			{
				v->erase(v->begin()+v->size()-1);
			}
			if(turn==2)
			{
				v->erase(v->begin()+v->size()-1);
			}
			if(turn==3)
			{
				v->erase(v->begin()+v->size()-1);
			}
			return 0;
		}
	private: System::Void Pipeline_Game_Load(System::Object^  sender, System::EventArgs^  e) {
				 encoding_of_image_loaded=new int*[4];
				 for(int i=0;i<4;i++){
					 encoding_of_image_loaded[i]=new int[4];
					 for(int j=0;j<4;j++){
						 encoding_of_image_loaded[i][j]=-1;
					 }
				 }

				 int n=4;
				 visited=new int*[n];
				 for(int i=0;i<n;i++){
					 visited[i]=new int[n];
					 for(int j=0;j<n;j++){
						 visited[i][j]=false;
					 }
				 }
				 v=new vector<int>[1000];
				 String^ dummy="";
				 String^ dummy2="";
				 //func(0,0,4,-1);
				  try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					 //EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN STUID
					 int stuID = 757;

					 String ^ Sql = "Select [Type_Of_Image_String] from Pipeline_Game where [Player_ID] = " + stuID + ";";
					 String ^ Sq2 = "Select [Answer_Matrix] from Pipeline_Game where [Player_ID] = " + stuID + ";";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 OleDb::OleDbCommand ^ command2 = gcnew OleDb::OleDbCommand(Sq2, con);
					 con->Open();
					 dummy = (String^)(command->ExecuteScalar());
					 dummy2=(String^)(command2->ExecuteScalar());
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }
				 String ^ str = "media\\Type_A.jpg";
				 Image^ Type_A = gcnew Bitmap(str);

				 String ^ str2 = "media\\Type_B.jpg";
				 Image^ Type_B = gcnew Bitmap(str2);
				 MessageBox::Show(dummy);
				 MessageBox::Show(dummy2);
				 array<PictureBox^,2> ^ image_array={ { PB_11, PB_12, PB_13, PB_14 }, { PB_21, PB_22, PB_23, PB_24 }, { PB_31, PB_32, PB_33, PB_34 }, { PB_41, PB_42, PB_43, PB_44 } };
				 ///*PB_11->Image=Type_B;
				 //ima*/ge_array[0,1]->Image=Type_A;
				 for(int i=0;i<4;i++){
					 for(int j=0;j<4;j++){
						 int random_position;
						 while(1){
							 random_position=rand()%4;
							 if(random_position!=System::Int64::Parse(System::Convert::ToString(dummy2[j+i*4]))){
								 break;
							 }
						 }
						 encoding_of_image_loaded[i][j]=random_position;
						 if(System::Convert::ToString(dummy[j+i*4])=="G"){
							 int rand_type=rand()%2;
							 if(rand_type==0){
								 image_array[i,j]->Image=Type_A;
							 }else{
								 image_array[i,j]->Image=Type_B;
							 }
							 int rand_orientation=rand()%4;
							 encoding_of_image_loaded[i][j]=rand_orientation;
						 }

						 if(System::Convert::ToString(dummy[j+i*4])=="A" || System::Convert::ToString(dummy[j+i*4])=="C"){
							 
							 image_array[i,j]->Image=Type_A;
							 /*Bitmap^ var;
							  var=(Bitmap^)(image_array[i,j]->Image);
							  var->RotateFlip(RotateFlipType::Rotate90FlipNone);
							  image_array[i,j]->Image=var;*/
							 
							 
						 }else{
							 if(System::Convert::ToString(dummy[j+i*4])=="B"){
								 image_array[i,j]->Image=Type_B;
								 /*Bitmap^ var;
								 var=(Bitmap^)(image_array[i,j]->Image);
								 var->RotateFlip(RotateFlipType::Rotate90FlipNone);
								 image_array[i,j]->Image=var;*/
							 }
						 }
						 //MessageBox::Show("start");
						 //MessageBox::Show(System::Convert::ToString(random_position));
						 //if(random_position==1){
							// //MessageBox::Show("type1");
							// Bitmap^ var;
							// var=(Bitmap^)(image_array[i,j]->Image);
							// var->RotateFlip(RotateFlipType::Rotate90FlipNone);
							// image_array[i,j]->Image=var;
						 //}
						 //if(random_position==2){
							//  //MessageBox::Show("type2");
							// Bitmap^ var2;
							// var2=(Bitmap^)(image_array[i,j]->Image);
							// var2->RotateFlip(RotateFlipType::Rotate180FlipNone);
							// image_array[i,j]->Image=var2;
						 //}
						 //if(random_position==3){
							//  //MessageBox::Show("type3");
							// Bitmap^ var3;
							// var3=(Bitmap^)(image_array[i,j]->Image);
							// var3->RotateFlip(RotateFlipType::Rotate270FlipNone);
							// image_array[i,j]->Image=var3;
						 //}
						 //MessageBox::Show("end");
					 }
				 }

				 /*Bitmap^ var3;
				  var3=(Bitmap^)(image_array[0,2]->Image);
				  var3->RotateFlip(RotateFlipType::Rotate90FlipNone);*/
				  PB_13->Image->RotateFlip(RotateFlipType::Rotate90FlipNone);

				 for(int i=0;i<4;i++){
					 for(int j=0;j<4;j++){
						// MessageBox::Show(System::Convert::ToString(encoding_of_image_loaded[i][j]));
					 }
				 }
			 }
	private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 
				 PictureBox^ pb = ((PictureBox^)sender);
				 Bitmap^ var;
				 var=(Bitmap^)(pb->Image);
				 var->RotateFlip(RotateFlipType::Rotate270FlipNone);
				 pb->Image=var;
				 String^ var2 = pb->Name;
				 //MessageBox::Show(var2);
				 //MessageBox::Show(System::Convert::ToString(var2->Length));
				 //MessageBox::Show(System::Convert::ToString(var2[var2->Length()-2]));
				 encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]=(encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]+1)%4;
			 }
};
}
