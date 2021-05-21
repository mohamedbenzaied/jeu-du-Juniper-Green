#pragma once
#include "board8x8mp.h"
#include "board10x10mp.h"
#include "board5x5mp.h"
#include "joueur.h"
namespace game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for multiplayer
	/// </summary>
	public ref class multiplayer : public System::Windows::Forms::Form
	{
	public:
		multiplayer(void)
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
		~multiplayer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::Button^ button67;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::ComponentModel::IContainer^ components;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(multiplayer::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button67 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox1->Location = System::Drawing::Point(401, 152);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(189, 34);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &multiplayer::textBox1_TextChanged);
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
			this->label1->Location = System::Drawing::Point(65, 157);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(252, 29);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Pseudo du joueur 2 :";
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold));
			this->textBox2->Location = System::Drawing::Point(401, 101);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(189, 34);
			this->textBox2->TabIndex = 8;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &multiplayer::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(65, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 29);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Pseudo du joueur 1 :";
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
			this->button1->Location = System::Drawing::Point(30, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 45);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Jouer";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &multiplayer::button1_Click);
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
			this->button4->Location = System::Drawing::Point(1093, 762);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(118, 54);
			this->button4->TabIndex = 12;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &multiplayer::button4_Click);
			// 
			// checkBox5
			// 
			this->checkBox5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox5->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox5->AutoSize = true;
			this->checkBox5->BackColor = System::Drawing::Color::DarkGray;
			this->checkBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold));
			this->checkBox5->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->checkBox5->Location = System::Drawing::Point(555, 352);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(120, 50);
			this->checkBox5->TabIndex = 15;
			this->checkBox5->Text = L"  8x8  ";
			this->checkBox5->UseVisualStyleBackColor = false;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &multiplayer::checkBox5_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox4->Appearance = System::Windows::Forms::Appearance::Button;
			this->checkBox4->AutoSize = true;
			this->checkBox4->BackColor = System::Drawing::Color::DarkGray;
			this->checkBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Arial", 20, System::Drawing::FontStyle::Bold));
			this->checkBox4->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->checkBox4->Location = System::Drawing::Point(980, 352);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(122, 50);
			this->checkBox4->TabIndex = 14;
			this->checkBox4->Text = L"10x10";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &multiplayer::checkBox4_CheckedChanged);
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
			this->checkBox1->ForeColor = System::Drawing::Color::LightSkyBlue;
			this->checkBox1->Location = System::Drawing::Point(107, 352);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(120, 50);
			this->checkBox1->TabIndex = 13;
			this->checkBox1->Text = L"  5x5  ";
			this->checkBox1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &multiplayer::checkBox1_CheckedChanged);
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
			this->button67->Location = System::Drawing::Point(12, 753);
			this->button67->Name = L"button67";
			this->button67->Size = System::Drawing::Size(114, 62);
			this->button67->TabIndex = 153;
			this->button67->UseVisualStyleBackColor = false;
			this->button67->Click += gcnew System::EventHandler(this, &multiplayer::button67_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Location = System::Drawing::Point(963, 478);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(200, 103);
			this->panel1->TabIndex = 154;
			// 
			// multiplayer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1223, 828);
			this->Controls->Add(this->button67);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"multiplayer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"multiplayer";
			this->Load += gcnew System::EventHandler(this, &multiplayer::multiplayer_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void multiplayer_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "" && textBox2->Text != "") {
		if (this->checkBox1->Checked == true){
		this->Hide();
		board5x5mp^ br5= gcnew board5x5mp;
		joueur^ p1 = gcnew joueur(textBox2->Text,true);
		joueur^ p2 = gcnew joueur(textBox1->Text,false);
		br5->jr1 = p1;
		br5->jr2 = p2;
		br5->Setplayer1name(br5->jr1->getname());
			
		br5->Setplayer2name(br5->jr2->getname());
		br5->Show();

	}
	
		if (this->checkBox5->Checked == true) {
			this->Hide();
			board8x8mp^ br8 = gcnew board8x8mp;
			joueur^ p1 = gcnew joueur(textBox2->Text, true);
			joueur^ p2 = gcnew joueur(textBox1->Text, false);
			br8->jr1 = p1;
			br8->jr2 = p2;
			br8->Show();
			br8->Setplayer1name(textBox2->Text);
			br8->Setplayer2name(textBox1->Text);

		}
		if (this->checkBox4->Checked == true) {
			this->Hide();
			board10x10mp^ br10 = gcnew board10x10mp;
			joueur^ p1 = gcnew joueur(textBox2->Text, true);
			joueur^ p2 = gcnew joueur(textBox1->Text, false);
			br10->jr1 = p1;
			br10->jr2 = p2;
			br10->Show();
			br10->Setplayer1name(textBox2->Text);
			br10->Setplayer2name(textBox1->Text);
		}
	}

		else
			System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Il faut ecrire votre pseudo", "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->checkBox4->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox5->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->BackgroundImage = imageList1->Images[0];

}
private: System::Void checkBox5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->checkBox4->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox1->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->BackgroundImage = imageList1->Images[1];


}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	this->checkBox1->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->checkBox5->CheckState = System::Windows::Forms::CheckState::Unchecked;
	this->BackgroundImage = imageList1->Images[2];

}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Restart();
}
};
}
