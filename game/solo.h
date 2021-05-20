#pragma once
#include "board5x5.h"
#include "board8x8.h"
#include "board10x10.h"
#include<windows.h>
#include <iostream>
#include <cliext/list>
#include <algorithm>
#include <iterator>
#include "joueur.h"
namespace game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for solo
	/// </summary>
	public ref class solo : public System::Windows::Forms::Form
	{
	public:
		solo(void)
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
		~solo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Panel^ panel1;





	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(solo::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Gilroy ExtraBold", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::DarkGoldenrod;
			this->button1->Location = System::Drawing::Point(32, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(137, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Jouer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &solo::button1_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(41, 112);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Pseudo du joueur :";
			this->label1->Click += gcnew System::EventHandler(this, &solo::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::White;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox1->ForeColor = System::Drawing::Color::YellowGreen;
			this->textBox1->Location = System::Drawing::Point(302, 114);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 27);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &solo::textBox1_TextChanged_1);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::DarkGray;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold));
			this->checkBox1->ForeColor = System::Drawing::Color::Azure;
			this->checkBox1->Location = System::Drawing::Point(46, 368);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(222, 50);
			this->checkBox1->TabIndex = 5;
			this->checkBox1->Text = L"      Facile     ";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &solo::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox3->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::DarkGray;
			this->checkBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"checkBox3.BackgroundImage")));
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold));
			this->checkBox3->ForeColor = System::Drawing::Color::Azure;
			this->checkBox3->Location = System::Drawing::Point(948, 368);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(224, 50);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"Tres difficile";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &solo::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::DarkGray;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold));
			this->checkBox4->ForeColor = System::Drawing::Color::Azure;
			this->checkBox4->Location = System::Drawing::Point(662, 368);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(229, 50);
			this->checkBox4->TabIndex = 8;
			this->checkBox4->Text = L"     Difficile    ";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &solo::checkBox4_CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::DarkGray;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold));
			this->checkBox5->ForeColor = System::Drawing::Color::Azure;
			this->checkBox5->Location = System::Drawing::Point(365, 368);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(220, 50);
			this->checkBox5->TabIndex = 9;
			this->checkBox5->Text = L"  Moyenne   ";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &solo::checkBox5_CheckedChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 20.8F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(62, 307);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 41);
			this->label2->TabIndex = 10;
			this->label2->Text = L"DIFFICULTE :";
			this->label2->Click += gcnew System::EventHandler(this, &solo::label2_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Location = System::Drawing::Point(1075, 759);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 57);
			this->button4->TabIndex = 11;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &solo::button4_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"a26b0c89c4bf869ae7a903bfd9d63617.jpg");
			this->imageList1->Images->SetKeyName(1, L"1606.m00.i104.n025.S.c12.181015754-Eskimo-cold-house-from-ice-blocks-in-Antarctic"
				L"a-vector-illustration-[Converti].jpg");
			this->imageList1->Images->SetKeyName(2, L"wp3804050.png");
			// 
			// button67
			// 
			this->button67->BackColor = System::Drawing::Color::Transparent;
			this->button67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button67.BackgroundImage")));
			this->button67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button67->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button67->FlatAppearance->BorderSize = 0;
			this->button67->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
			this->button67->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button67->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button67->Location = System::Drawing::Point(12, 757);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(97, 60);
			this->button67->TabIndex = 153;
			this->button67->UseVisualStyleBackColor = false;
			this->button67->Click += gcnew System::EventHandler(this, &solo::button67_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(958, 635);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 103);
			this->panel1->TabIndex = 155;
			// 
			// solo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(62)));
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1223, 828);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"solo";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"solo";
			this->Load += gcnew System::EventHandler(this, &solo::solo_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		public:int lvl;
		
		public: String^ Getplayer1name() {
			return (textBox1->Text);
		}
	private: System::Void solo_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (textBox1->Text != "") {
			if (lvl==1) {
				Difficulty^ diff = gcnew Difficulty(lvl);
				joueur^ p = gcnew joueur(textBox1->Text,true);
				InAr^ IA = gcnew InAr(diff, "IA");
				this->Hide();
				board5x5^ br5 = gcnew board5x5;	
				br5->InA = IA;
				br5->jr = p;
				br5->Setplayer1name(br5->jr->getname());
				br5->Setplayer2name("IA");
				br5->Show();
			}
			if (lvl==2) {
				Difficulty^ diff = gcnew Difficulty(lvl);
				joueur^ p = gcnew joueur(textBox1->Text, true);
				InAr^ IA = gcnew InAr(diff, "IA");
				this->Hide();
				board8x8^ br8 = gcnew board8x8;
				br8->InA = IA;
				br8->jr = p;
				br8->Setplayer1name(br8->jr->getname());
				br8->Setplayer2name("IA");
				br8->Show();
			}
			if (lvl==3) {
				Difficulty^ diff = gcnew Difficulty(lvl);
				joueur^ p = gcnew joueur(textBox1->Text, true);
				InAr^ IA = gcnew InAr(diff, "IA");
				this->Hide();
				board10x10^ br10 = gcnew board10x10;
				br10->InA = IA;
				br10->jr = p;
				br10->Show();
				br10->Setplayer1name(br10->jr->getname());
				br10->Setplayer2name("IA");
			}
			if (lvl==4) {
				Difficulty^ diff = gcnew Difficulty(lvl);
				joueur^ p = gcnew joueur(textBox1->Text, true);
				InAr^ IA = gcnew InAr(diff, "IA");
				this->Hide();
				board10x10^ br10 = gcnew board10x10;
				br10->InA = IA;
				br10->jr = p;
				br10->Show();
				br10->Setplayer1name(br10->jr->getname());
				br10->Setplayer2name("IA");
			}
		}
		else
		{
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Il faut ecrire votre pseudo", "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	lvl = 2;
	this->checkBox3->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox4->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox1->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->BackgroundImage = imageList1->Images[1];

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	lvl = 1;
	this->checkBox3->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox4->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox5->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->BackgroundImage = imageList1->Images[0];


}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	lvl = 3;
	this->checkBox3->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox1->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox5->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->BackgroundImage = imageList1->Images[2];

}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	lvl = 4;
	this->checkBox1->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox4->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox5->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->BackgroundImage = imageList1->Images[2];

}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
