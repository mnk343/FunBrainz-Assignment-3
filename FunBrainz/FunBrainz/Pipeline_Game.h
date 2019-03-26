#pragma once
#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include<utility>
#include<vector>
#include<algorithm>


using namespace std;
using namespace System::Data::OleDb;
using namespace System::Diagnostics;

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
		Pipeline_Game(Form^ obj1)
		{
			InitializeComponent();
			caller = obj1;
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


	protected: 

	protected: 





























	private: System::Windows::Forms::Button^  btn_Back_To_Main_From_Pipeline_Game;
	private: System::Windows::Forms::Panel^  panel_4X4;

















	private: System::Windows::Forms::PictureBox^  PB_41;
	private: System::Windows::Forms::PictureBox^  PB_42;
	private: System::Windows::Forms::PictureBox^  PB_43;
	private: System::Windows::Forms::PictureBox^  PB_44;
	private: System::Windows::Forms::PictureBox^  PB_34;
	private: System::Windows::Forms::PictureBox^  PB_12;
	private: System::Windows::Forms::PictureBox^  PB_13;
	private: System::Windows::Forms::PictureBox^  PB_14;
	private: System::Windows::Forms::PictureBox^  PB_21;
	private: System::Windows::Forms::PictureBox^  PB_22;
	private: System::Windows::Forms::PictureBox^  PB_23;
	private: System::Windows::Forms::PictureBox^  PB_24;
	private: System::Windows::Forms::PictureBox^  PB_31;
	private: System::Windows::Forms::PictureBox^  PB_32;
	private: System::Windows::Forms::PictureBox^  PB_33;
	private: System::Windows::Forms::PictureBox^  PB_11;
	private: System::Windows::Forms::Panel^  panel_5X5;
	private: System::Windows::Forms::PictureBox^  PB5_55;
	private: System::Windows::Forms::PictureBox^  PB5_51;
	private: System::Windows::Forms::PictureBox^  PB5_52;
	private: System::Windows::Forms::PictureBox^  PB5_53;
	private: System::Windows::Forms::PictureBox^  PB5_54;
	private: System::Windows::Forms::PictureBox^  PB5_45;
	private: System::Windows::Forms::PictureBox^  PB5_35;
	private: System::Windows::Forms::PictureBox^  PB5_15;
	private: System::Windows::Forms::PictureBox^  PB5_25;
	private: System::Windows::Forms::PictureBox^  PB5_41;
	private: System::Windows::Forms::PictureBox^  PB5_42;
	private: System::Windows::Forms::PictureBox^  PB5_43;
	private: System::Windows::Forms::PictureBox^  PB5_44;
	private: System::Windows::Forms::PictureBox^  PB5_34;
	private: System::Windows::Forms::PictureBox^  PB5_12;
	private: System::Windows::Forms::PictureBox^  PB5_13;
	private: System::Windows::Forms::PictureBox^  PB5_14;
	private: System::Windows::Forms::PictureBox^  PB5_21;
	private: System::Windows::Forms::PictureBox^  PB5_22;
	private: System::Windows::Forms::PictureBox^  PB5_23;
	private: System::Windows::Forms::PictureBox^  PB5_24;
	private: System::Windows::Forms::PictureBox^  PB5_31;
	private: System::Windows::Forms::PictureBox^  PB5_32;
	private: System::Windows::Forms::PictureBox^  PB5_33;
	private: System::Windows::Forms::PictureBox^  PB5_11;






































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
			this->btn_Back_To_Main_From_Pipeline_Game = (gcnew System::Windows::Forms::Button());
			this->panel_4X4 = (gcnew System::Windows::Forms::Panel());
			this->PB_41 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_42 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_43 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_44 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_34 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_12 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_13 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_14 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_21 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_22 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_23 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_24 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_31 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_32 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_33 = (gcnew System::Windows::Forms::PictureBox());
			this->PB_11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_5X5 = (gcnew System::Windows::Forms::Panel());
			this->PB5_55 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_51 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_52 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_53 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_54 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_45 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_35 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_15 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_25 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_41 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_42 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_43 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_44 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_34 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_12 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_13 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_14 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_21 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_22 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_23 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_24 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_31 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_32 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_33 = (gcnew System::Windows::Forms::PictureBox());
			this->PB5_11 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_4X4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_11))->BeginInit();
			this->panel_5X5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_11))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_Back_To_Main_From_Pipeline_Game
			// 
			this->btn_Back_To_Main_From_Pipeline_Game->Location = System::Drawing::Point(881, 42);
			this->btn_Back_To_Main_From_Pipeline_Game->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Back_To_Main_From_Pipeline_Game->Name = L"btn_Back_To_Main_From_Pipeline_Game";
			this->btn_Back_To_Main_From_Pipeline_Game->Size = System::Drawing::Size(75, 23);
			this->btn_Back_To_Main_From_Pipeline_Game->TabIndex = 16;
			this->btn_Back_To_Main_From_Pipeline_Game->Text = L"BACK";
			this->btn_Back_To_Main_From_Pipeline_Game->UseVisualStyleBackColor = true;
			this->btn_Back_To_Main_From_Pipeline_Game->Click += gcnew System::EventHandler(this, &Pipeline_Game::btn_Back_To_Main_From_Pipeline_Game_Click);
			// 
			// panel_4X4
			// 
			this->panel_4X4->Controls->Add(this->PB_41);
			this->panel_4X4->Controls->Add(this->PB_42);
			this->panel_4X4->Controls->Add(this->PB_43);
			this->panel_4X4->Controls->Add(this->PB_44);
			this->panel_4X4->Controls->Add(this->PB_34);
			this->panel_4X4->Controls->Add(this->PB_12);
			this->panel_4X4->Controls->Add(this->PB_13);
			this->panel_4X4->Controls->Add(this->PB_14);
			this->panel_4X4->Controls->Add(this->PB_21);
			this->panel_4X4->Controls->Add(this->PB_22);
			this->panel_4X4->Controls->Add(this->PB_23);
			this->panel_4X4->Controls->Add(this->PB_24);
			this->panel_4X4->Controls->Add(this->PB_31);
			this->panel_4X4->Controls->Add(this->PB_32);
			this->panel_4X4->Controls->Add(this->PB_33);
			this->panel_4X4->Controls->Add(this->PB_11);
			this->panel_4X4->Location = System::Drawing::Point(61, 22);
			this->panel_4X4->Name = L"panel_4X4";
			this->panel_4X4->Size = System::Drawing::Size(621, 578);
			this->panel_4X4->TabIndex = 17;
			this->panel_4X4->Visible = false;
			// 
			// PB_41
			// 
			this->PB_41->Location = System::Drawing::Point(84, 290);
			this->PB_41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_41->Name = L"PB_41";
			this->PB_41->Size = System::Drawing::Size(91, 90);
			this->PB_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_41->TabIndex = 31;
			this->PB_41->TabStop = false;
			// 
			// PB_42
			// 
			this->PB_42->Location = System::Drawing::Point(174, 290);
			this->PB_42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_42->Name = L"PB_42";
			this->PB_42->Size = System::Drawing::Size(91, 90);
			this->PB_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_42->TabIndex = 30;
			this->PB_42->TabStop = false;
			// 
			// PB_43
			// 
			this->PB_43->Location = System::Drawing::Point(264, 290);
			this->PB_43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_43->Name = L"PB_43";
			this->PB_43->Size = System::Drawing::Size(91, 90);
			this->PB_43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_43->TabIndex = 29;
			this->PB_43->TabStop = false;
			// 
			// PB_44
			// 
			this->PB_44->Location = System::Drawing::Point(354, 290);
			this->PB_44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_44->Name = L"PB_44";
			this->PB_44->Size = System::Drawing::Size(91, 90);
			this->PB_44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_44->TabIndex = 28;
			this->PB_44->TabStop = false;
			// 
			// PB_34
			// 
			this->PB_34->Location = System::Drawing::Point(354, 200);
			this->PB_34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_34->Name = L"PB_34";
			this->PB_34->Size = System::Drawing::Size(91, 90);
			this->PB_34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_34->TabIndex = 27;
			this->PB_34->TabStop = false;
			// 
			// PB_12
			// 
			this->PB_12->Location = System::Drawing::Point(174, 20);
			this->PB_12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_12->Name = L"PB_12";
			this->PB_12->Size = System::Drawing::Size(91, 90);
			this->PB_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_12->TabIndex = 26;
			this->PB_12->TabStop = false;
			// 
			// PB_13
			// 
			this->PB_13->Location = System::Drawing::Point(264, 20);
			this->PB_13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_13->Name = L"PB_13";
			this->PB_13->Size = System::Drawing::Size(91, 90);
			this->PB_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_13->TabIndex = 25;
			this->PB_13->TabStop = false;
			// 
			// PB_14
			// 
			this->PB_14->Location = System::Drawing::Point(354, 20);
			this->PB_14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_14->Name = L"PB_14";
			this->PB_14->Size = System::Drawing::Size(91, 90);
			this->PB_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_14->TabIndex = 24;
			this->PB_14->TabStop = false;
			// 
			// PB_21
			// 
			this->PB_21->Location = System::Drawing::Point(84, 110);
			this->PB_21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_21->Name = L"PB_21";
			this->PB_21->Size = System::Drawing::Size(91, 90);
			this->PB_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_21->TabIndex = 23;
			this->PB_21->TabStop = false;
			// 
			// PB_22
			// 
			this->PB_22->Location = System::Drawing::Point(174, 110);
			this->PB_22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_22->Name = L"PB_22";
			this->PB_22->Size = System::Drawing::Size(91, 90);
			this->PB_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_22->TabIndex = 22;
			this->PB_22->TabStop = false;
			// 
			// PB_23
			// 
			this->PB_23->Location = System::Drawing::Point(264, 110);
			this->PB_23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_23->Name = L"PB_23";
			this->PB_23->Size = System::Drawing::Size(91, 90);
			this->PB_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_23->TabIndex = 21;
			this->PB_23->TabStop = false;
			// 
			// PB_24
			// 
			this->PB_24->Location = System::Drawing::Point(354, 110);
			this->PB_24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_24->Name = L"PB_24";
			this->PB_24->Size = System::Drawing::Size(91, 90);
			this->PB_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_24->TabIndex = 20;
			this->PB_24->TabStop = false;
			// 
			// PB_31
			// 
			this->PB_31->Location = System::Drawing::Point(84, 200);
			this->PB_31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_31->Name = L"PB_31";
			this->PB_31->Size = System::Drawing::Size(91, 90);
			this->PB_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_31->TabIndex = 19;
			this->PB_31->TabStop = false;
			// 
			// PB_32
			// 
			this->PB_32->Location = System::Drawing::Point(174, 200);
			this->PB_32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_32->Name = L"PB_32";
			this->PB_32->Size = System::Drawing::Size(91, 90);
			this->PB_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_32->TabIndex = 18;
			this->PB_32->TabStop = false;
			// 
			// PB_33
			// 
			this->PB_33->Location = System::Drawing::Point(264, 200);
			this->PB_33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_33->Name = L"PB_33";
			this->PB_33->Size = System::Drawing::Size(91, 90);
			this->PB_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_33->TabIndex = 17;
			this->PB_33->TabStop = false;
			// 
			// PB_11
			// 
			this->PB_11->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->PB_11->Location = System::Drawing::Point(84, 20);
			this->PB_11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB_11->Name = L"PB_11";
			this->PB_11->Size = System::Drawing::Size(91, 90);
			this->PB_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB_11->TabIndex = 16;
			this->PB_11->TabStop = false;
			this->PB_11->UseWaitCursor = true;
			// 
			// panel_5X5
			// 
			this->panel_5X5->Controls->Add(this->PB5_55);
			this->panel_5X5->Controls->Add(this->PB5_51);
			this->panel_5X5->Controls->Add(this->PB5_52);
			this->panel_5X5->Controls->Add(this->PB5_53);
			this->panel_5X5->Controls->Add(this->PB5_54);
			this->panel_5X5->Controls->Add(this->PB5_45);
			this->panel_5X5->Controls->Add(this->PB5_35);
			this->panel_5X5->Controls->Add(this->PB5_15);
			this->panel_5X5->Controls->Add(this->PB5_25);
			this->panel_5X5->Controls->Add(this->PB5_41);
			this->panel_5X5->Controls->Add(this->PB5_42);
			this->panel_5X5->Controls->Add(this->PB5_43);
			this->panel_5X5->Controls->Add(this->PB5_44);
			this->panel_5X5->Controls->Add(this->PB5_34);
			this->panel_5X5->Controls->Add(this->PB5_12);
			this->panel_5X5->Controls->Add(this->PB5_13);
			this->panel_5X5->Controls->Add(this->PB5_14);
			this->panel_5X5->Controls->Add(this->PB5_21);
			this->panel_5X5->Controls->Add(this->PB5_22);
			this->panel_5X5->Controls->Add(this->PB5_23);
			this->panel_5X5->Controls->Add(this->PB5_24);
			this->panel_5X5->Controls->Add(this->PB5_31);
			this->panel_5X5->Controls->Add(this->PB5_32);
			this->panel_5X5->Controls->Add(this->PB5_33);
			this->panel_5X5->Controls->Add(this->PB5_11);
			this->panel_5X5->Location = System::Drawing::Point(193, 71);
			this->panel_5X5->Name = L"panel_5X5";
			this->panel_5X5->Size = System::Drawing::Size(621, 578);
			this->panel_5X5->TabIndex = 34;
			// 
			// PB5_55
			// 
			this->PB5_55->Location = System::Drawing::Point(443, 380);
			this->PB5_55->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_55->Name = L"PB5_55";
			this->PB5_55->Size = System::Drawing::Size(91, 90);
			this->PB5_55->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_55->TabIndex = 40;
			this->PB5_55->TabStop = false;
			this->PB5_55->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_51
			// 
			this->PB5_51->Location = System::Drawing::Point(84, 380);
			this->PB5_51->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_51->Name = L"PB5_51";
			this->PB5_51->Size = System::Drawing::Size(91, 90);
			this->PB5_51->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_51->TabIndex = 39;
			this->PB5_51->TabStop = false;
			this->PB5_51->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_52
			// 
			this->PB5_52->Location = System::Drawing::Point(174, 380);
			this->PB5_52->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_52->Name = L"PB5_52";
			this->PB5_52->Size = System::Drawing::Size(91, 90);
			this->PB5_52->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_52->TabIndex = 38;
			this->PB5_52->TabStop = false;
			this->PB5_52->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_53
			// 
			this->PB5_53->Location = System::Drawing::Point(264, 380);
			this->PB5_53->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_53->Name = L"PB5_53";
			this->PB5_53->Size = System::Drawing::Size(91, 90);
			this->PB5_53->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_53->TabIndex = 37;
			this->PB5_53->TabStop = false;
			this->PB5_53->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_54
			// 
			this->PB5_54->Location = System::Drawing::Point(354, 380);
			this->PB5_54->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_54->Name = L"PB5_54";
			this->PB5_54->Size = System::Drawing::Size(91, 90);
			this->PB5_54->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_54->TabIndex = 36;
			this->PB5_54->TabStop = false;
			this->PB5_54->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_45
			// 
			this->PB5_45->Location = System::Drawing::Point(443, 290);
			this->PB5_45->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_45->Name = L"PB5_45";
			this->PB5_45->Size = System::Drawing::Size(91, 90);
			this->PB5_45->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_45->TabIndex = 35;
			this->PB5_45->TabStop = false;
			this->PB5_45->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_35
			// 
			this->PB5_35->Location = System::Drawing::Point(443, 200);
			this->PB5_35->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_35->Name = L"PB5_35";
			this->PB5_35->Size = System::Drawing::Size(91, 90);
			this->PB5_35->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_35->TabIndex = 34;
			this->PB5_35->TabStop = false;
			this->PB5_35->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_15
			// 
			this->PB5_15->Location = System::Drawing::Point(443, 20);
			this->PB5_15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_15->Name = L"PB5_15";
			this->PB5_15->Size = System::Drawing::Size(91, 90);
			this->PB5_15->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_15->TabIndex = 33;
			this->PB5_15->TabStop = false;
			this->PB5_15->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_25
			// 
			this->PB5_25->Location = System::Drawing::Point(443, 110);
			this->PB5_25->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_25->Name = L"PB5_25";
			this->PB5_25->Size = System::Drawing::Size(91, 90);
			this->PB5_25->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_25->TabIndex = 32;
			this->PB5_25->TabStop = false;
			this->PB5_25->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_41
			// 
			this->PB5_41->Location = System::Drawing::Point(84, 290);
			this->PB5_41->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_41->Name = L"PB5_41";
			this->PB5_41->Size = System::Drawing::Size(91, 90);
			this->PB5_41->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_41->TabIndex = 31;
			this->PB5_41->TabStop = false;
			this->PB5_41->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_42
			// 
			this->PB5_42->Location = System::Drawing::Point(174, 290);
			this->PB5_42->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_42->Name = L"PB5_42";
			this->PB5_42->Size = System::Drawing::Size(91, 90);
			this->PB5_42->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_42->TabIndex = 30;
			this->PB5_42->TabStop = false;
			this->PB5_42->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_43
			// 
			this->PB5_43->Location = System::Drawing::Point(264, 290);
			this->PB5_43->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_43->Name = L"PB5_43";
			this->PB5_43->Size = System::Drawing::Size(91, 90);
			this->PB5_43->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_43->TabIndex = 29;
			this->PB5_43->TabStop = false;
			this->PB5_43->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_44
			// 
			this->PB5_44->Location = System::Drawing::Point(354, 290);
			this->PB5_44->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_44->Name = L"PB5_44";
			this->PB5_44->Size = System::Drawing::Size(91, 90);
			this->PB5_44->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_44->TabIndex = 28;
			this->PB5_44->TabStop = false;
			this->PB5_44->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_34
			// 
			this->PB5_34->Location = System::Drawing::Point(354, 200);
			this->PB5_34->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_34->Name = L"PB5_34";
			this->PB5_34->Size = System::Drawing::Size(91, 90);
			this->PB5_34->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_34->TabIndex = 27;
			this->PB5_34->TabStop = false;
			this->PB5_34->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_12
			// 
			this->PB5_12->Location = System::Drawing::Point(174, 20);
			this->PB5_12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_12->Name = L"PB5_12";
			this->PB5_12->Size = System::Drawing::Size(91, 90);
			this->PB5_12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_12->TabIndex = 26;
			this->PB5_12->TabStop = false;
			this->PB5_12->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_13
			// 
			this->PB5_13->Location = System::Drawing::Point(264, 20);
			this->PB5_13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_13->Name = L"PB5_13";
			this->PB5_13->Size = System::Drawing::Size(91, 90);
			this->PB5_13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_13->TabIndex = 25;
			this->PB5_13->TabStop = false;
			this->PB5_13->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_14
			// 
			this->PB5_14->Location = System::Drawing::Point(354, 20);
			this->PB5_14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_14->Name = L"PB5_14";
			this->PB5_14->Size = System::Drawing::Size(91, 90);
			this->PB5_14->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_14->TabIndex = 24;
			this->PB5_14->TabStop = false;
			this->PB5_14->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_21
			// 
			this->PB5_21->Location = System::Drawing::Point(84, 110);
			this->PB5_21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_21->Name = L"PB5_21";
			this->PB5_21->Size = System::Drawing::Size(91, 90);
			this->PB5_21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_21->TabIndex = 23;
			this->PB5_21->TabStop = false;
			this->PB5_21->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_22
			// 
			this->PB5_22->Location = System::Drawing::Point(174, 110);
			this->PB5_22->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_22->Name = L"PB5_22";
			this->PB5_22->Size = System::Drawing::Size(91, 90);
			this->PB5_22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_22->TabIndex = 22;
			this->PB5_22->TabStop = false;
			this->PB5_22->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_23
			// 
			this->PB5_23->Location = System::Drawing::Point(264, 110);
			this->PB5_23->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_23->Name = L"PB5_23";
			this->PB5_23->Size = System::Drawing::Size(91, 90);
			this->PB5_23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_23->TabIndex = 21;
			this->PB5_23->TabStop = false;
			this->PB5_23->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_24
			// 
			this->PB5_24->Location = System::Drawing::Point(354, 110);
			this->PB5_24->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_24->Name = L"PB5_24";
			this->PB5_24->Size = System::Drawing::Size(91, 90);
			this->PB5_24->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_24->TabIndex = 20;
			this->PB5_24->TabStop = false;
			this->PB5_24->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_31
			// 
			this->PB5_31->Location = System::Drawing::Point(84, 200);
			this->PB5_31->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_31->Name = L"PB5_31";
			this->PB5_31->Size = System::Drawing::Size(91, 90);
			this->PB5_31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_31->TabIndex = 19;
			this->PB5_31->TabStop = false;
			this->PB5_31->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_32
			// 
			this->PB5_32->Location = System::Drawing::Point(174, 200);
			this->PB5_32->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_32->Name = L"PB5_32";
			this->PB5_32->Size = System::Drawing::Size(91, 90);
			this->PB5_32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_32->TabIndex = 18;
			this->PB5_32->TabStop = false;
			this->PB5_32->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_33
			// 
			this->PB5_33->Location = System::Drawing::Point(264, 200);
			this->PB5_33->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_33->Name = L"PB5_33";
			this->PB5_33->Size = System::Drawing::Size(91, 90);
			this->PB5_33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_33->TabIndex = 17;
			this->PB5_33->TabStop = false;
			this->PB5_33->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// PB5_11
			// 
			this->PB5_11->Cursor = System::Windows::Forms::Cursors::WaitCursor;
			this->PB5_11->Location = System::Drawing::Point(84, 20);
			this->PB5_11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PB5_11->Name = L"PB5_11";
			this->PB5_11->Size = System::Drawing::Size(91, 90);
			this->PB5_11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->PB5_11->TabIndex = 16;
			this->PB5_11->TabStop = false;
			this->PB5_11->UseWaitCursor = true;
			this->PB5_11->Click += gcnew System::EventHandler(this, &Pipeline_Game::pictureBox_Click);
			// 
			// Pipeline_Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1006, 721);
			this->Controls->Add(this->panel_5X5);
			this->Controls->Add(this->panel_4X4);
			this->Controls->Add(this->btn_Back_To_Main_From_Pipeline_Game);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Pipeline_Game";
			this->Text = L"Pipeline_Game";
			this->Load += gcnew System::EventHandler(this, &Pipeline_Game::Pipeline_Game_Load);
			this->panel_4X4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB_11))->EndInit();
			this->panel_5X5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->PB5_11))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		Form^ caller;
		static int **visited;
		static int count_2=0;
		static vector<int> *v;
		static int **encoding_of_image_loaded;
		static char **type_of_image_loaded;
		static array<String^>^ answer_type = gcnew array<String^>(10000);
		static array<String^>^ answer_index = gcnew array<String^>(10000);
		static int count=0;
		static String ^ str_1 = "media\\Type_A[0].jpg";
		static Image^ Type_A_0 = gcnew Bitmap(str_1);
		static String ^ str_2 = "media\\Type_A[1].jpg";
		static Image^ Type_A_1 = gcnew Bitmap(str_2);
		static String ^ str_3 = "media\\Type_A[0].jpg";
		static Image^ Type_A_2 = gcnew Bitmap(str_3);
		static String ^ str_4 = "media\\Type_A[1].jpg";
		static Image^ Type_A_3 = gcnew Bitmap(str_4);

		static String ^ str1 = "media\\Type_B[0].jpg";
		static Image^ Type_B_0 = gcnew Bitmap(str1);
		static String ^ str2 = "media\\Type_B[1].jpg";
		static Image^ Type_B_1 = gcnew Bitmap(str2);
		static String ^ str3 = "media\\Type_B[2].jpg";
		static Image^ Type_B_2 = gcnew Bitmap(str3);
		static String ^ str4 = "media\\Type_B[3].jpg";
		static Image^ Type_B_3 = gcnew Bitmap(str4);
		//left=0
		//right=1;
		//up=2
		//down=3
		void making_encodings(int n){
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
			int **type_of_image=new int*[n];
			int **answer_matrix=new int*[n];
			for(int i=0;i<n;i++){
				answer_matrix[i]=new int[n];
				for(int j=0;j<n;j++){
					answer_matrix[i][j]=-1;
				}
			}
			for(int i=0;i<n;i++){
				type_of_image[i]=new int[n];
				for(int j=0;j<n;j++){
					type_of_image[i][j]=-1;
				}
			}
			//MessageBox::Show("stage2");
			type_of_image[0][0]=3;
			type_of_image[n-1][n-1]=3;
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
				answer_matrix[n-1][n-1]=2;
			}
			if(v->at(v->size()-1)==3){
				answer_matrix[n-1][n-1]=3;
			}
			//MessageBox::Show("type is coming");
			String^ type_of_image_string = "";
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
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
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
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
				making_encodings(n);
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
				 count=0;
				  int n=5;
				 encoding_of_image_loaded=new int*[n];
				 for(int i=0;i<n;i++){
					 encoding_of_image_loaded[i]=new int[n];
					 for(int j=0;j<n;j++){
						 encoding_of_image_loaded[i][j]=-1;
					 }
				 }
				 type_of_image_loaded=new char*[n];
				 for(int i=0;i<n;i++){
					 type_of_image_loaded[i]=new char[n];
					 for(int j=0;j<n;j++){
						 type_of_image_loaded[i][j]='G';
					 }

				 }

				
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
				 //func(0,0,5,-1);
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";

					 //EXTRACT STUDENT_id FROM LOGIN PAGE DATA AND STORE IN 6
					 int stuID = 962;

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



				 MessageBox::Show(dummy);
				 MessageBox::Show(dummy2);
				 array<PictureBox^,2> ^ image_array_4={ { PB_11, PB_12, PB_13, PB_14 }, { PB_21, PB_22, PB_23, PB_24 }, { PB_31, PB_32, PB_33, PB_34 }, { PB_41, PB_42, PB_43, PB_44 } };
				 array<PictureBox^,2> ^ image_array_5={ { PB5_11, PB5_12, PB5_13, PB5_14,PB5_15 }, { PB5_21, PB5_22, PB5_23, PB5_24,PB5_25 },{ PB5_31, PB5_32, PB5_33, PB5_34,PB5_35 }, { PB5_41, PB5_42, PB5_43, PB5_44,PB5_45 },{ PB5_51, PB5_52, PB5_53, PB5_54,PB5_55 } };

				 for(int i=0;i<n;i++){
					 for(int j=0;j<n;j++){
						 int random_position;
						 while(1){
							 random_position=rand()%4;
							 if(random_position!=System::Int64::Parse(System::Convert::ToString(dummy2[j+i*n]))){
								 break;
							 }
						 }
						 encoding_of_image_loaded[i][j]=random_position;
						 if(System::Convert::ToString(dummy[j+i*n])=="G"){
							 //MessageBox::Show("G");
							 int rand_orientation;
							 int rand_type=rand()%2;
							 if(rand_type==0){
								 rand_orientation=rand()%4;
								 if(rand_orientation==0){
									 if(n==4){
										image_array_4[i,j]->Image=Type_A_0;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_0;
									 }
									 
								 }
								 if(rand_orientation==1){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_A_1;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_1;
									 }
									 
								 }
								 if(rand_orientation==2){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_A_2;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_2;
									 }									 
								 }
								 if(rand_orientation==3){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_A_3;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_3;
									 }
									 
								 }
								 type_of_image_loaded[i][j]='A';
								 encoding_of_image_loaded[i][j]=(rand_orientation%2);
							 }else{
								 rand_orientation=rand()%4;
								 if(rand_orientation==0){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_0;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_0;
									 }									 
								 }
								 if(rand_orientation==1){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_1;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_1;
									 }									 
								 }
								 if(rand_orientation==2){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_2;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_2;
									 }									 
								 }
								 if(rand_orientation==3){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_3;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_3;
									 }									 
								 }
								 type_of_image_loaded[i][j]='B';
								 encoding_of_image_loaded[i][j]=rand_orientation;

							 }


						 }
						 if(System::Convert::ToString(dummy[j+i*n])=="A"){
							 //MessageBox::Show("A");
							 if(random_position==0){
								 if(n==4){
									 image_array_4[i,j]->Image=Type_A_0;
								 }
								 if(n==5){
									 image_array_5[i,j]->Image=Type_A_0;
								 }
							 }
							 if(random_position==1){
								 if(n==4){
									 image_array_4[i,j]->Image=Type_A_1;
								 }
								 if(n==5){
									 image_array_5[i,j]->Image=Type_A_1;
								 }
							 }
							 if(random_position==2){
								 if(n==4){
									 image_array_4[i,j]->Image=Type_A_2;
								 }
								 if(n==5){
									 image_array_5[i,j]->Image=Type_A_2;
								 }
							 }
							 if(random_position==3){
								 if(n==4){
									 image_array_4[i,j]->Image=Type_A_3;
								 }
								 if(n==5){
									 image_array_5[i,j]->Image=Type_A_3;
								 }
							 }
							 type_of_image_loaded[i][j]='A';
							 encoding_of_image_loaded[i][j]=random_position%2;
						 }else{
							 if(System::Convert::ToString(dummy[j+i*n])=="B"){
								 //MessageBox::Show("B");
								 if(random_position==0){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_0;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_0;
									 }
								 }
								 if(random_position==1){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_1;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_1;
									 }
								 }
								 if(random_position==2){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_2;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_2;
									 }
								 }
								 if(random_position==3){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_B_3;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_B_3;
									 }
								 }
								 type_of_image_loaded[i][j]='B';
								 encoding_of_image_loaded[i][j]=random_position;
							 }
							 if(System::Convert::ToString(dummy[j+i*n])=="C"){
								 //MessageBox::Show("A");
								 if(random_position==0){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_A_0;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_0;
									 }
								 }
								 if(random_position==1){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_A_1;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_1;
									 }
								 }
								 if(random_position==2){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_A_2;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_2;
									 }
								 }
								 if(random_position==3){
									 if(n==4){
										 image_array_4[i,j]->Image=Type_A_3;
									 }
									 if(n==5){
										 image_array_5[i,j]->Image=Type_A_3;
									 }
								 }
								 type_of_image_loaded[i][j]='C';
								 encoding_of_image_loaded[i][j]=random_position%4;
							 }
						 }
					 }
				 }
				 type_of_image_loaded[0][0]='C';
				 type_of_image_loaded[n-1][n-1]='C';
				 try {
					 OleDb::OleDbConnection ^ con = gcnew OleDb::OleDbConnection();
					 con->ConnectionString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=FunBrainzForKids.accdb;";
					 String ^ Sql = "Select * from Pipeline_Game";
					 OleDb::OleDbCommand ^ command = gcnew OleDb::OleDbCommand(Sql, con);
					 con->Open();
					 OleDb::OleDbDataReader ^ reader = command->ExecuteReader();
					 while (reader->Read()){
						 String^ type_string =  reader[2]->ToString();
						 String^ answer_string = reader[5]->ToString();
						 answer_type[count]=type_string;
						 answer_index[count++]=answer_string;
						 Debug::WriteLine(System::Convert::ToString(count));
						 Debug::WriteLine(answer_type[count-1]);
						 Debug::WriteLine(answer_index[count-1]);
					 }
					 con->Close();
				 }
				 catch (Exception ^ ex) {
					 MessageBox::Show(ex->Message);
				 }

			 }
	private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
				 PictureBox^ pb = ((PictureBox^)sender);
				 String^ var2 = pb->Name;
				 int I=System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1;
				 int J=System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1;
				 int n=5;

				 if(type_of_image_loaded[I][J]=='A'){
					 if(encoding_of_image_loaded[I][J]==0){
						 pb->Image=Type_A_1;
					 }
					 if(encoding_of_image_loaded[I][J]==1){
						 pb->Image=Type_A_2;
					 }
				 }else{
					 if(type_of_image_loaded[I][J]=='B'){
						 if(encoding_of_image_loaded[I][J]==0){
							 pb->Image=Type_B_1;
						 }
						 if(encoding_of_image_loaded[I][J]==1){
							 pb->Image=Type_B_2;
						 }
						 if(encoding_of_image_loaded[I][J]==2){
							 pb->Image=Type_B_3;
						 }
						 if(encoding_of_image_loaded[I][J]==3){
							 pb->Image=Type_B_0;
						 }
					 }
					 if(type_of_image_loaded[I][J]=='C'){
						 if(encoding_of_image_loaded[I][J]==0){
							 pb->Image=Type_A_1;
						 }
						 if(encoding_of_image_loaded[I][J]==1){
							 pb->Image=Type_A_2;
						 }
						 if(encoding_of_image_loaded[I][J]==2){
							 pb->Image=Type_A_3;
						 }
						 if(encoding_of_image_loaded[I][J]==3){
							 pb->Image=Type_A_0;
						 }
					 }
				 }
				 encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]=(encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]+1)%4;
				 if(type_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]=='A'){
					 encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1]=(encoding_of_image_loaded[System::Int64::Parse(System::Convert::ToString(var2[var2->Length-2]))-1][System::Int64::Parse(System::Convert::ToString(var2[var2->Length-1]))-1])%2;
				 }
				 String ^ var_A="";
				 String ^ var_T="";

				 for (int i=0;i<n;i++){
					 String^ str = gcnew String(type_of_image_loaded[i]);	
					 //MessageBox::Show(str->Substring(0,4));
					 for(int j=0;j<n;j++){

						 var_A+=(System::Convert::ToString(encoding_of_image_loaded[i][j]));
						 var_T+=str[j];
					 }
				 }
				 /* MessageBox::Show(var_A);
				 MessageBox::Show(var_T);*/

				 int isSolved=0;
				 for(int i=0;i<count;i++){
					 isSolved=1;
					 for(int j=0;j<n*n;j++){
						 if(answer_index[i][j]=='5'){
							 continue;
						 }
						 if(answer_index[i][j]!=var_A[j] || answer_type[i][j]!=var_T[j]){
							 //MessageBox::Show("rejected");
							 isSolved=0;
							 break;
						 }
					 }
					 if(isSolved==1){
						 MessageBox::Show("Correct answer");
						 break;
					 }
				 }
			 }
	private: System::Void btn_Back_To_Main_From_Pipeline_Game_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Hide();
				 caller->Show();
			 }

	};
}
