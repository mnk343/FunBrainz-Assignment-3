#pragma once
#include<iostream>
#include <stdlib.h>
#include <string>
#include <ctime>
#include<utility>
#include<vector>
#include<algorithm>
using namespace std;

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
			this->SuspendLayout();
			// 
			// Pipeline_Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Name = L"Pipeline_Game";
			this->Text = L"Pipeline_Game";
			this->Load += gcnew System::EventHandler(this, &Pipeline_Game::Pipeline_Game_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	public:
		static int **visited;
		static int count_2=0;
		static vector<int> *v;
		//left=0
		//right=1;
		//up=2
		//down=3

		void making_encodings(){
			MessageBox::Show("stage1");
			for(int i=0;i<v->size();i++){
				MessageBox::Show(System::Convert::ToString(v->at(i)));
			}
			int prev_x=0;
			int prev_y=0;
			//1 for type A
			//2 for type B
			//3 for type C
			//-1 for garbage
			int type_of_image[4][4];
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					type_of_image[i][j]=-1;
				}
			}
			MessageBox::Show("stage2");
			type_of_image[0][0]=3;
			type_of_image[3][3]=3;
			MessageBox::Show("stage3");
			if(v->at(0)==1){
				prev_x=0;
				prev_y=1;
			}
			if(v->at(0)==3){
				prev_x=1;
				prev_y=0;
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

				}else{
					type_of_image[prev_x][prev_y]=2;
				}
				prev_x=curr_x;
				prev_y=curr_y;
			}
			MessageBox::Show("type is coming");
			for(int i=0;i<4;i++){
				for(int j=0;j<4;j++){
					MessageBox::Show(System::Convert::ToString(type_of_image[i][j]));
					//cout<<type_of_image[i][j]<<" ";
				}
				cout<<endl;
			}
			MessageBox::Show("type ended");
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
				if(count_2>=1){
					return 1;
				}
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
				 int n=4;
				 visited=new int*[n];
				 for(int i=0;i<n;i++){
					 visited[i]=new int[n];
					 for(int j=0;j<n;j++){
						 visited[i][j]=false;
					 }
				 }
				 v=new vector<int>[1000];
				 func(0,0,4,-1);
				 MessageBox::Show(System::Convert::ToString(count_2));
			 }
	};
}
