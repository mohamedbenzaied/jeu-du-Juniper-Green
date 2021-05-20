#pragma once
#include <cliext\algorithm>
#include <cliext\iterator>
#include <cliext\vector>
#include <windows.h>
#include <string>
#include <vcclr.h>
#include  <random>
#include "liste.h"
#include "IA.h"
#include "joueur.h"
namespace game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for board10x10
	/// </summary>
	public ref class board10x10 : public System::Windows::Forms::Form
	{
	public:
		board10x10(void)
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
		~board10x10()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button10;
    private: System::Windows::Forms::Button^ button11;
    private: System::Windows::Forms::Button^ button12;
    private: System::Windows::Forms::Button^ button13;
    private: System::Windows::Forms::Button^ button14;
    private: System::Windows::Forms::Button^ button15;
    private: System::Windows::Forms::Button^ button16;
    private: System::Windows::Forms::Button^ button17;
    private: System::Windows::Forms::Button^ button18;
    private: System::Windows::Forms::Button^ button19;
    private: System::Windows::Forms::Button^ button20;
    private: System::Windows::Forms::Button^ button21;
    private: System::Windows::Forms::Button^ button22;
    private: System::Windows::Forms::Button^ button23;
    private: System::Windows::Forms::Button^ button24;
    private: System::Windows::Forms::Button^ button25;
    private: System::Windows::Forms::Button^ button26;
    private: System::Windows::Forms::Button^ button27;
    private: System::Windows::Forms::Button^ button28;
    private: System::Windows::Forms::Button^ button29;
    private: System::Windows::Forms::Button^ button30;
    private: System::Windows::Forms::Button^ button31;
    private: System::Windows::Forms::Button^ button32;
    private: System::Windows::Forms::Button^ button33;
    private: System::Windows::Forms::Button^ button34;
    private: System::Windows::Forms::Button^ button35;
    private: System::Windows::Forms::Button^ button36;
    private: System::Windows::Forms::Button^ button37;
    private: System::Windows::Forms::Button^ button38;
    private: System::Windows::Forms::Button^ button39;
    private: System::Windows::Forms::Button^ button40;
    private: System::Windows::Forms::Button^ button41;
    private: System::Windows::Forms::Button^ button42;
    private: System::Windows::Forms::Button^ button43;
    private: System::Windows::Forms::Button^ button44;
    private: System::Windows::Forms::Button^ button45;
    private: System::Windows::Forms::Button^ button46;
    private: System::Windows::Forms::Button^ button47;
    private: System::Windows::Forms::Button^ button48;
    private: System::Windows::Forms::Button^ button49;
    private: System::Windows::Forms::Button^ button50;
    private: System::Windows::Forms::Button^ button51;
    private: System::Windows::Forms::Button^ button52;
    private: System::Windows::Forms::Button^ button53;
    private: System::Windows::Forms::Button^ button54;
    private: System::Windows::Forms::Button^ button55;
    private: System::Windows::Forms::Button^ button56;
    private: System::Windows::Forms::Button^ button57;
    private: System::Windows::Forms::Button^ button58;
    private: System::Windows::Forms::Button^ button59;
    private: System::Windows::Forms::Button^ button60;
    private: System::Windows::Forms::Button^ button61;
    private: System::Windows::Forms::Button^ button62;
    private: System::Windows::Forms::Button^ button63;
    private: System::Windows::Forms::Button^ button64;
    private: System::Windows::Forms::Button^ button65;
    private: System::Windows::Forms::Button^ button66;
    private: System::Windows::Forms::Button^ button67;
    private: System::Windows::Forms::Button^ button68;
    private: System::Windows::Forms::Button^ button69;
    private: System::Windows::Forms::Button^ button70;
    private: System::Windows::Forms::Button^ button71;
    private: System::Windows::Forms::Button^ button72;
    private: System::Windows::Forms::Button^ button73;
    private: System::Windows::Forms::Button^ button74;
    private: System::Windows::Forms::Button^ button75;
    private: System::Windows::Forms::Button^ button76;
    private: System::Windows::Forms::Button^ button77;
    private: System::Windows::Forms::Button^ button78;
    private: System::Windows::Forms::Button^ button79;
    private: System::Windows::Forms::Button^ button80;
    private: System::Windows::Forms::Button^ button81;
    private: System::Windows::Forms::Button^ button82;
    private: System::Windows::Forms::Button^ button83;
    private: System::Windows::Forms::Button^ button84;
    private: System::Windows::Forms::Button^ button85;
    private: System::Windows::Forms::Button^ button86;
    private: System::Windows::Forms::Button^ button87;
    private: System::Windows::Forms::Button^ button88;
    private: System::Windows::Forms::Button^ button89;
    private: System::Windows::Forms::Button^ button90;
    private: System::Windows::Forms::Button^ button91;
    private: System::Windows::Forms::Button^ button92;
    private: System::Windows::Forms::Button^ button93;
    private: System::Windows::Forms::Button^ button94;
    private: System::Windows::Forms::Button^ button95;
    private: System::Windows::Forms::Button^ button96;
    private: System::Windows::Forms::Button^ button97;
    private: System::Windows::Forms::Button^ button98;
    private: System::Windows::Forms::Button^ button99;
    private: System::Windows::Forms::Button^ button100;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Button^ button101;
private: System::Windows::Forms::Panel^ panel1;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Button^ button102;
private: System::Windows::Forms::Timer^ timer1;
private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel6;
private: System::Windows::Forms::Button^ button103;
private: System::ComponentModel::IContainer^ components;
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(board10x10::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->button36 = (gcnew System::Windows::Forms::Button());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->button38 = (gcnew System::Windows::Forms::Button());
            this->button39 = (gcnew System::Windows::Forms::Button());
            this->button40 = (gcnew System::Windows::Forms::Button());
            this->button41 = (gcnew System::Windows::Forms::Button());
            this->button42 = (gcnew System::Windows::Forms::Button());
            this->button43 = (gcnew System::Windows::Forms::Button());
            this->button44 = (gcnew System::Windows::Forms::Button());
            this->button45 = (gcnew System::Windows::Forms::Button());
            this->button46 = (gcnew System::Windows::Forms::Button());
            this->button47 = (gcnew System::Windows::Forms::Button());
            this->button48 = (gcnew System::Windows::Forms::Button());
            this->button49 = (gcnew System::Windows::Forms::Button());
            this->button50 = (gcnew System::Windows::Forms::Button());
            this->button51 = (gcnew System::Windows::Forms::Button());
            this->button52 = (gcnew System::Windows::Forms::Button());
            this->button53 = (gcnew System::Windows::Forms::Button());
            this->button54 = (gcnew System::Windows::Forms::Button());
            this->button55 = (gcnew System::Windows::Forms::Button());
            this->button56 = (gcnew System::Windows::Forms::Button());
            this->button57 = (gcnew System::Windows::Forms::Button());
            this->button58 = (gcnew System::Windows::Forms::Button());
            this->button59 = (gcnew System::Windows::Forms::Button());
            this->button60 = (gcnew System::Windows::Forms::Button());
            this->button61 = (gcnew System::Windows::Forms::Button());
            this->button62 = (gcnew System::Windows::Forms::Button());
            this->button63 = (gcnew System::Windows::Forms::Button());
            this->button64 = (gcnew System::Windows::Forms::Button());
            this->button65 = (gcnew System::Windows::Forms::Button());
            this->button66 = (gcnew System::Windows::Forms::Button());
            this->button67 = (gcnew System::Windows::Forms::Button());
            this->button68 = (gcnew System::Windows::Forms::Button());
            this->button69 = (gcnew System::Windows::Forms::Button());
            this->button70 = (gcnew System::Windows::Forms::Button());
            this->button71 = (gcnew System::Windows::Forms::Button());
            this->button72 = (gcnew System::Windows::Forms::Button());
            this->button73 = (gcnew System::Windows::Forms::Button());
            this->button74 = (gcnew System::Windows::Forms::Button());
            this->button75 = (gcnew System::Windows::Forms::Button());
            this->button76 = (gcnew System::Windows::Forms::Button());
            this->button77 = (gcnew System::Windows::Forms::Button());
            this->button78 = (gcnew System::Windows::Forms::Button());
            this->button79 = (gcnew System::Windows::Forms::Button());
            this->button80 = (gcnew System::Windows::Forms::Button());
            this->button81 = (gcnew System::Windows::Forms::Button());
            this->button82 = (gcnew System::Windows::Forms::Button());
            this->button83 = (gcnew System::Windows::Forms::Button());
            this->button84 = (gcnew System::Windows::Forms::Button());
            this->button85 = (gcnew System::Windows::Forms::Button());
            this->button86 = (gcnew System::Windows::Forms::Button());
            this->button87 = (gcnew System::Windows::Forms::Button());
            this->button88 = (gcnew System::Windows::Forms::Button());
            this->button89 = (gcnew System::Windows::Forms::Button());
            this->button90 = (gcnew System::Windows::Forms::Button());
            this->button91 = (gcnew System::Windows::Forms::Button());
            this->button92 = (gcnew System::Windows::Forms::Button());
            this->button93 = (gcnew System::Windows::Forms::Button());
            this->button94 = (gcnew System::Windows::Forms::Button());
            this->button95 = (gcnew System::Windows::Forms::Button());
            this->button96 = (gcnew System::Windows::Forms::Button());
            this->button97 = (gcnew System::Windows::Forms::Button());
            this->button98 = (gcnew System::Windows::Forms::Button());
            this->button99 = (gcnew System::Windows::Forms::Button());
            this->button100 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->button101 = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->button102 = (gcnew System::Windows::Forms::Button());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->button103 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel6->SuspendLayout();
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Transparent;
            this->button1->Enabled = false;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::White;
            this->button1->Location = System::Drawing::Point(85, 106);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(50, 50);
            this->button1->TabIndex = 1;
            this->button1->Text = L"1";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &board10x10::button1_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Transparent;
            this->button2->Enabled = false;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::White;
            this->button2->Location = System::Drawing::Point(134, 106);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(50, 50);
            this->button2->TabIndex = 2;
            this->button2->Text = L"2";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &board10x10::button2_Click);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Transparent;
            this->button3->Enabled = false;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::White;
            this->button3->Location = System::Drawing::Point(183, 106);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(50, 50);
            this->button3->TabIndex = 3;
            this->button3->Text = L"3";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &board10x10::button3_Click);
            // 
            // button4
            // 
            this->button4->BackColor = System::Drawing::Color::Transparent;
            this->button4->Enabled = false;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::White;
            this->button4->Location = System::Drawing::Point(232, 106);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(50, 50);
            this->button4->TabIndex = 4;
            this->button4->Text = L"4";
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &board10x10::button4_Click);
            // 
            // button5
            // 
            this->button5->BackColor = System::Drawing::Color::Transparent;
            this->button5->Enabled = false;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::White;
            this->button5->Location = System::Drawing::Point(281, 106);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(50, 50);
            this->button5->TabIndex = 5;
            this->button5->Text = L"5";
            this->button5->UseVisualStyleBackColor = false;
            this->button5->Click += gcnew System::EventHandler(this, &board10x10::button5_Click);
            // 
            // button6
            // 
            this->button6->BackColor = System::Drawing::Color::Transparent;
            this->button6->Enabled = false;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::White;
            this->button6->Location = System::Drawing::Point(330, 106);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(50, 50);
            this->button6->TabIndex = 6;
            this->button6->Text = L"6";
            this->button6->UseVisualStyleBackColor = false;
            this->button6->Click += gcnew System::EventHandler(this, &board10x10::button6_Click);
            // 
            // button7
            // 
            this->button7->BackColor = System::Drawing::Color::Transparent;
            this->button7->Enabled = false;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::White;
            this->button7->Location = System::Drawing::Point(379, 106);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(50, 50);
            this->button7->TabIndex = 7;
            this->button7->Text = L"7";
            this->button7->UseVisualStyleBackColor = false;
            this->button7->Click += gcnew System::EventHandler(this, &board10x10::button7_Click);
            // 
            // button8
            // 
            this->button8->BackColor = System::Drawing::Color::Transparent;
            this->button8->Enabled = false;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::White;
            this->button8->Location = System::Drawing::Point(428, 106);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(50, 50);
            this->button8->TabIndex = 8;
            this->button8->Text = L"8";
            this->button8->UseVisualStyleBackColor = false;
            this->button8->Click += gcnew System::EventHandler(this, &board10x10::button8_Click);
            // 
            // button9
            // 
            this->button9->BackColor = System::Drawing::Color::Transparent;
            this->button9->Enabled = false;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::White;
            this->button9->Location = System::Drawing::Point(477, 106);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(50, 50);
            this->button9->TabIndex = 9;
            this->button9->Text = L"9";
            this->button9->UseVisualStyleBackColor = false;
            this->button9->Click += gcnew System::EventHandler(this, &board10x10::button9_Click);
            // 
            // button10
            // 
            this->button10->BackColor = System::Drawing::Color::Transparent;
            this->button10->Enabled = false;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::Color::White;
            this->button10->Location = System::Drawing::Point(526, 106);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(50, 50);
            this->button10->TabIndex = 10;
            this->button10->Text = L"10";
            this->button10->UseVisualStyleBackColor = false;
            this->button10->Click += gcnew System::EventHandler(this, &board10x10::button10_Click);
            // 
            // button11
            // 
            this->button11->BackColor = System::Drawing::Color::Transparent;
            this->button11->Enabled = false;
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::Color::White;
            this->button11->Location = System::Drawing::Point(85, 155);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(50, 50);
            this->button11->TabIndex = 20;
            this->button11->Text = L"11";
            this->button11->UseVisualStyleBackColor = false;
            this->button11->Click += gcnew System::EventHandler(this, &board10x10::button11_Click);
            // 
            // button12
            // 
            this->button12->BackColor = System::Drawing::Color::Transparent;
            this->button12->Enabled = false;
            this->button12->FlatAppearance->BorderSize = 0;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->ForeColor = System::Drawing::Color::White;
            this->button12->Location = System::Drawing::Point(134, 155);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(50, 50);
            this->button12->TabIndex = 19;
            this->button12->Text = L"12";
            this->button12->UseVisualStyleBackColor = false;
            this->button12->Click += gcnew System::EventHandler(this, &board10x10::button12_Click);
            // 
            // button13
            // 
            this->button13->BackColor = System::Drawing::Color::Transparent;
            this->button13->Enabled = false;
            this->button13->FlatAppearance->BorderSize = 0;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->ForeColor = System::Drawing::Color::White;
            this->button13->Location = System::Drawing::Point(183, 155);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(50, 50);
            this->button13->TabIndex = 18;
            this->button13->Text = L"13";
            this->button13->UseVisualStyleBackColor = false;
            this->button13->Click += gcnew System::EventHandler(this, &board10x10::button13_Click);
            // 
            // button14
            // 
            this->button14->BackColor = System::Drawing::Color::Transparent;
            this->button14->Enabled = false;
            this->button14->FlatAppearance->BorderSize = 0;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->ForeColor = System::Drawing::Color::White;
            this->button14->Location = System::Drawing::Point(232, 155);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(50, 50);
            this->button14->TabIndex = 17;
            this->button14->Text = L"14";
            this->button14->UseVisualStyleBackColor = false;
            this->button14->Click += gcnew System::EventHandler(this, &board10x10::button14_Click);
            // 
            // button15
            // 
            this->button15->BackColor = System::Drawing::Color::Transparent;
            this->button15->Enabled = false;
            this->button15->FlatAppearance->BorderSize = 0;
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->ForeColor = System::Drawing::Color::White;
            this->button15->Location = System::Drawing::Point(281, 155);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(50, 50);
            this->button15->TabIndex = 16;
            this->button15->Text = L"15";
            this->button15->UseVisualStyleBackColor = false;
            this->button15->Click += gcnew System::EventHandler(this, &board10x10::button15_Click);
            // 
            // button16
            // 
            this->button16->BackColor = System::Drawing::Color::Transparent;
            this->button16->Enabled = false;
            this->button16->FlatAppearance->BorderSize = 0;
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->ForeColor = System::Drawing::Color::White;
            this->button16->Location = System::Drawing::Point(330, 155);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(50, 50);
            this->button16->TabIndex = 15;
            this->button16->Text = L"16";
            this->button16->UseVisualStyleBackColor = false;
            this->button16->Click += gcnew System::EventHandler(this, &board10x10::button16_Click);
            // 
            // button17
            // 
            this->button17->BackColor = System::Drawing::Color::Transparent;
            this->button17->Enabled = false;
            this->button17->FlatAppearance->BorderSize = 0;
            this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->ForeColor = System::Drawing::Color::White;
            this->button17->Location = System::Drawing::Point(379, 155);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(50, 50);
            this->button17->TabIndex = 14;
            this->button17->Text = L"17";
            this->button17->UseVisualStyleBackColor = false;
            this->button17->Click += gcnew System::EventHandler(this, &board10x10::button17_Click);
            // 
            // button18
            // 
            this->button18->BackColor = System::Drawing::Color::Transparent;
            this->button18->Enabled = false;
            this->button18->FlatAppearance->BorderSize = 0;
            this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->ForeColor = System::Drawing::Color::White;
            this->button18->Location = System::Drawing::Point(428, 155);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(50, 50);
            this->button18->TabIndex = 13;
            this->button18->Text = L"18";
            this->button18->UseVisualStyleBackColor = false;
            this->button18->Click += gcnew System::EventHandler(this, &board10x10::button18_Click);
            // 
            // button19
            // 
            this->button19->BackColor = System::Drawing::Color::Transparent;
            this->button19->Enabled = false;
            this->button19->FlatAppearance->BorderSize = 0;
            this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->ForeColor = System::Drawing::Color::White;
            this->button19->Location = System::Drawing::Point(477, 155);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(50, 50);
            this->button19->TabIndex = 12;
            this->button19->Text = L"19";
            this->button19->UseVisualStyleBackColor = false;
            this->button19->Click += gcnew System::EventHandler(this, &board10x10::button19_Click);
            // 
            // button20
            // 
            this->button20->BackColor = System::Drawing::Color::Transparent;
            this->button20->Enabled = false;
            this->button20->FlatAppearance->BorderSize = 0;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->ForeColor = System::Drawing::Color::White;
            this->button20->Location = System::Drawing::Point(526, 155);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(50, 50);
            this->button20->TabIndex = 11;
            this->button20->Text = L"20";
            this->button20->UseVisualStyleBackColor = false;
            this->button20->Click += gcnew System::EventHandler(this, &board10x10::button20_Click);
            // 
            // button21
            // 
            this->button21->BackColor = System::Drawing::Color::Transparent;
            this->button21->Enabled = false;
            this->button21->FlatAppearance->BorderSize = 0;
            this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->ForeColor = System::Drawing::Color::White;
            this->button21->Location = System::Drawing::Point(85, 204);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(50, 50);
            this->button21->TabIndex = 30;
            this->button21->Text = L"21";
            this->button21->UseVisualStyleBackColor = false;
            this->button21->Click += gcnew System::EventHandler(this, &board10x10::button21_Click);
            // 
            // button22
            // 
            this->button22->BackColor = System::Drawing::Color::Transparent;
            this->button22->Enabled = false;
            this->button22->FlatAppearance->BorderSize = 0;
            this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->ForeColor = System::Drawing::Color::White;
            this->button22->Location = System::Drawing::Point(134, 204);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(50, 50);
            this->button22->TabIndex = 29;
            this->button22->Text = L"22";
            this->button22->UseVisualStyleBackColor = false;
            this->button22->Click += gcnew System::EventHandler(this, &board10x10::button22_Click);
            // 
            // button23
            // 
            this->button23->BackColor = System::Drawing::Color::Transparent;
            this->button23->Enabled = false;
            this->button23->FlatAppearance->BorderSize = 0;
            this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->ForeColor = System::Drawing::Color::White;
            this->button23->Location = System::Drawing::Point(183, 204);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(50, 50);
            this->button23->TabIndex = 28;
            this->button23->Text = L"23";
            this->button23->UseVisualStyleBackColor = false;
            this->button23->Click += gcnew System::EventHandler(this, &board10x10::button23_Click);
            // 
            // button24
            // 
            this->button24->BackColor = System::Drawing::Color::Transparent;
            this->button24->Enabled = false;
            this->button24->FlatAppearance->BorderSize = 0;
            this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->ForeColor = System::Drawing::Color::White;
            this->button24->Location = System::Drawing::Point(232, 204);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(50, 50);
            this->button24->TabIndex = 27;
            this->button24->Text = L"24";
            this->button24->UseVisualStyleBackColor = false;
            this->button24->Click += gcnew System::EventHandler(this, &board10x10::button24_Click);
            // 
            // button25
            // 
            this->button25->BackColor = System::Drawing::Color::Transparent;
            this->button25->Enabled = false;
            this->button25->FlatAppearance->BorderSize = 0;
            this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->ForeColor = System::Drawing::Color::White;
            this->button25->Location = System::Drawing::Point(281, 204);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(50, 50);
            this->button25->TabIndex = 26;
            this->button25->Text = L"25";
            this->button25->UseVisualStyleBackColor = false;
            this->button25->Click += gcnew System::EventHandler(this, &board10x10::button25_Click);
            // 
            // button26
            // 
            this->button26->BackColor = System::Drawing::Color::Transparent;
            this->button26->Enabled = false;
            this->button26->FlatAppearance->BorderSize = 0;
            this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->ForeColor = System::Drawing::Color::White;
            this->button26->Location = System::Drawing::Point(330, 204);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(50, 50);
            this->button26->TabIndex = 25;
            this->button26->Text = L"26";
            this->button26->UseVisualStyleBackColor = false;
            this->button26->Click += gcnew System::EventHandler(this, &board10x10::button26_Click);
            // 
            // button27
            // 
            this->button27->BackColor = System::Drawing::Color::Transparent;
            this->button27->Enabled = false;
            this->button27->FlatAppearance->BorderSize = 0;
            this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button27->ForeColor = System::Drawing::Color::White;
            this->button27->Location = System::Drawing::Point(379, 204);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(50, 50);
            this->button27->TabIndex = 24;
            this->button27->Text = L"27";
            this->button27->UseVisualStyleBackColor = false;
            this->button27->Click += gcnew System::EventHandler(this, &board10x10::button27_Click);
            // 
            // button28
            // 
            this->button28->BackColor = System::Drawing::Color::Transparent;
            this->button28->Enabled = false;
            this->button28->FlatAppearance->BorderSize = 0;
            this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button28->ForeColor = System::Drawing::Color::White;
            this->button28->Location = System::Drawing::Point(428, 204);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(50, 50);
            this->button28->TabIndex = 23;
            this->button28->Text = L"28";
            this->button28->UseVisualStyleBackColor = false;
            this->button28->Click += gcnew System::EventHandler(this, &board10x10::button28_Click);
            // 
            // button29
            // 
            this->button29->BackColor = System::Drawing::Color::Transparent;
            this->button29->Enabled = false;
            this->button29->FlatAppearance->BorderSize = 0;
            this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button29->ForeColor = System::Drawing::Color::White;
            this->button29->Location = System::Drawing::Point(477, 204);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(50, 50);
            this->button29->TabIndex = 22;
            this->button29->Text = L"29";
            this->button29->UseVisualStyleBackColor = false;
            this->button29->Click += gcnew System::EventHandler(this, &board10x10::button29_Click);
            // 
            // button30
            // 
            this->button30->BackColor = System::Drawing::Color::Transparent;
            this->button30->Enabled = false;
            this->button30->FlatAppearance->BorderSize = 0;
            this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button30->ForeColor = System::Drawing::Color::White;
            this->button30->Location = System::Drawing::Point(526, 204);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(50, 50);
            this->button30->TabIndex = 21;
            this->button30->Text = L"30";
            this->button30->UseVisualStyleBackColor = false;
            this->button30->Click += gcnew System::EventHandler(this, &board10x10::button30_Click);
            // 
            // button31
            // 
            this->button31->BackColor = System::Drawing::Color::Transparent;
            this->button31->Enabled = false;
            this->button31->FlatAppearance->BorderSize = 0;
            this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button31->ForeColor = System::Drawing::Color::White;
            this->button31->Location = System::Drawing::Point(85, 253);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(50, 50);
            this->button31->TabIndex = 40;
            this->button31->Text = L"31";
            this->button31->UseVisualStyleBackColor = false;
            this->button31->Click += gcnew System::EventHandler(this, &board10x10::button31_Click);
            // 
            // button32
            // 
            this->button32->BackColor = System::Drawing::Color::Transparent;
            this->button32->Enabled = false;
            this->button32->FlatAppearance->BorderSize = 0;
            this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->ForeColor = System::Drawing::Color::White;
            this->button32->Location = System::Drawing::Point(134, 253);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(50, 50);
            this->button32->TabIndex = 39;
            this->button32->Text = L"32";
            this->button32->UseVisualStyleBackColor = false;
            this->button32->Click += gcnew System::EventHandler(this, &board10x10::button32_Click);
            // 
            // button33
            // 
            this->button33->BackColor = System::Drawing::Color::Transparent;
            this->button33->Enabled = false;
            this->button33->FlatAppearance->BorderSize = 0;
            this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->ForeColor = System::Drawing::Color::White;
            this->button33->Location = System::Drawing::Point(183, 253);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(50, 50);
            this->button33->TabIndex = 38;
            this->button33->Text = L"33";
            this->button33->UseVisualStyleBackColor = false;
            this->button33->Click += gcnew System::EventHandler(this, &board10x10::button33_Click);
            // 
            // button34
            // 
            this->button34->BackColor = System::Drawing::Color::Transparent;
            this->button34->Enabled = false;
            this->button34->FlatAppearance->BorderSize = 0;
            this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button34->ForeColor = System::Drawing::Color::White;
            this->button34->Location = System::Drawing::Point(232, 253);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(50, 50);
            this->button34->TabIndex = 37;
            this->button34->Text = L"34";
            this->button34->UseVisualStyleBackColor = false;
            this->button34->Click += gcnew System::EventHandler(this, &board10x10::button34_Click);
            // 
            // button35
            // 
            this->button35->BackColor = System::Drawing::Color::Transparent;
            this->button35->Enabled = false;
            this->button35->FlatAppearance->BorderSize = 0;
            this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button35->ForeColor = System::Drawing::Color::White;
            this->button35->Location = System::Drawing::Point(281, 253);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(50, 50);
            this->button35->TabIndex = 36;
            this->button35->Text = L"35";
            this->button35->UseVisualStyleBackColor = false;
            this->button35->Click += gcnew System::EventHandler(this, &board10x10::button35_Click);
            // 
            // button36
            // 
            this->button36->BackColor = System::Drawing::Color::Transparent;
            this->button36->Enabled = false;
            this->button36->FlatAppearance->BorderSize = 0;
            this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button36->ForeColor = System::Drawing::Color::White;
            this->button36->Location = System::Drawing::Point(330, 253);
            this->button36->Name = L"button36";
            this->button36->Size = System::Drawing::Size(50, 50);
            this->button36->TabIndex = 35;
            this->button36->Text = L"36";
            this->button36->UseVisualStyleBackColor = false;
            this->button36->Click += gcnew System::EventHandler(this, &board10x10::button36_Click);
            // 
            // button37
            // 
            this->button37->BackColor = System::Drawing::Color::Transparent;
            this->button37->Enabled = false;
            this->button37->FlatAppearance->BorderSize = 0;
            this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button37->ForeColor = System::Drawing::Color::White;
            this->button37->Location = System::Drawing::Point(379, 253);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(50, 50);
            this->button37->TabIndex = 34;
            this->button37->Text = L"37";
            this->button37->UseVisualStyleBackColor = false;
            this->button37->Click += gcnew System::EventHandler(this, &board10x10::button37_Click);
            // 
            // button38
            // 
            this->button38->BackColor = System::Drawing::Color::Transparent;
            this->button38->Enabled = false;
            this->button38->FlatAppearance->BorderSize = 0;
            this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button38->ForeColor = System::Drawing::Color::White;
            this->button38->Location = System::Drawing::Point(428, 253);
            this->button38->Name = L"button38";
            this->button38->Size = System::Drawing::Size(50, 50);
            this->button38->TabIndex = 33;
            this->button38->Text = L"38";
            this->button38->UseVisualStyleBackColor = false;
            this->button38->Click += gcnew System::EventHandler(this, &board10x10::button38_Click);
            // 
            // button39
            // 
            this->button39->BackColor = System::Drawing::Color::Transparent;
            this->button39->Enabled = false;
            this->button39->FlatAppearance->BorderSize = 0;
            this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button39->ForeColor = System::Drawing::Color::White;
            this->button39->Location = System::Drawing::Point(477, 253);
            this->button39->Name = L"button39";
            this->button39->Size = System::Drawing::Size(50, 50);
            this->button39->TabIndex = 32;
            this->button39->Text = L"39";
            this->button39->UseVisualStyleBackColor = false;
            this->button39->Click += gcnew System::EventHandler(this, &board10x10::button39_Click);
            // 
            // button40
            // 
            this->button40->BackColor = System::Drawing::Color::Transparent;
            this->button40->Enabled = false;
            this->button40->FlatAppearance->BorderSize = 0;
            this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button40->ForeColor = System::Drawing::Color::White;
            this->button40->Location = System::Drawing::Point(526, 253);
            this->button40->Name = L"button40";
            this->button40->Size = System::Drawing::Size(50, 50);
            this->button40->TabIndex = 31;
            this->button40->Text = L"40";
            this->button40->UseVisualStyleBackColor = false;
            this->button40->Click += gcnew System::EventHandler(this, &board10x10::button40_Click);
            // 
            // button41
            // 
            this->button41->BackColor = System::Drawing::Color::Transparent;
            this->button41->Enabled = false;
            this->button41->FlatAppearance->BorderSize = 0;
            this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button41->ForeColor = System::Drawing::Color::White;
            this->button41->Location = System::Drawing::Point(85, 302);
            this->button41->Name = L"button41";
            this->button41->Size = System::Drawing::Size(50, 50);
            this->button41->TabIndex = 50;
            this->button41->Text = L"41";
            this->button41->UseVisualStyleBackColor = false;
            this->button41->Click += gcnew System::EventHandler(this, &board10x10::button41_Click);
            // 
            // button42
            // 
            this->button42->BackColor = System::Drawing::Color::Transparent;
            this->button42->Enabled = false;
            this->button42->FlatAppearance->BorderSize = 0;
            this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button42->ForeColor = System::Drawing::Color::White;
            this->button42->Location = System::Drawing::Point(134, 302);
            this->button42->Name = L"button42";
            this->button42->Size = System::Drawing::Size(50, 50);
            this->button42->TabIndex = 49;
            this->button42->Text = L"42";
            this->button42->UseVisualStyleBackColor = false;
            this->button42->Click += gcnew System::EventHandler(this, &board10x10::button42_Click);
            // 
            // button43
            // 
            this->button43->BackColor = System::Drawing::Color::Transparent;
            this->button43->Enabled = false;
            this->button43->FlatAppearance->BorderSize = 0;
            this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button43->ForeColor = System::Drawing::Color::White;
            this->button43->Location = System::Drawing::Point(183, 302);
            this->button43->Name = L"button43";
            this->button43->Size = System::Drawing::Size(50, 50);
            this->button43->TabIndex = 48;
            this->button43->Text = L"43";
            this->button43->UseVisualStyleBackColor = false;
            this->button43->Click += gcnew System::EventHandler(this, &board10x10::button43_Click);
            // 
            // button44
            // 
            this->button44->BackColor = System::Drawing::Color::Transparent;
            this->button44->Enabled = false;
            this->button44->FlatAppearance->BorderSize = 0;
            this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button44->ForeColor = System::Drawing::Color::White;
            this->button44->Location = System::Drawing::Point(232, 302);
            this->button44->Name = L"button44";
            this->button44->Size = System::Drawing::Size(50, 50);
            this->button44->TabIndex = 47;
            this->button44->Text = L"44";
            this->button44->UseVisualStyleBackColor = false;
            this->button44->Click += gcnew System::EventHandler(this, &board10x10::button44_Click);
            // 
            // button45
            // 
            this->button45->BackColor = System::Drawing::Color::Transparent;
            this->button45->Enabled = false;
            this->button45->FlatAppearance->BorderSize = 0;
            this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button45->ForeColor = System::Drawing::Color::White;
            this->button45->Location = System::Drawing::Point(281, 302);
            this->button45->Name = L"button45";
            this->button45->Size = System::Drawing::Size(50, 50);
            this->button45->TabIndex = 46;
            this->button45->Text = L"45";
            this->button45->UseVisualStyleBackColor = false;
            this->button45->Click += gcnew System::EventHandler(this, &board10x10::button45_Click);
            // 
            // button46
            // 
            this->button46->BackColor = System::Drawing::Color::Transparent;
            this->button46->Enabled = false;
            this->button46->FlatAppearance->BorderSize = 0;
            this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button46->ForeColor = System::Drawing::Color::White;
            this->button46->Location = System::Drawing::Point(330, 302);
            this->button46->Name = L"button46";
            this->button46->Size = System::Drawing::Size(50, 50);
            this->button46->TabIndex = 45;
            this->button46->Text = L"46";
            this->button46->UseVisualStyleBackColor = false;
            this->button46->Click += gcnew System::EventHandler(this, &board10x10::button46_Click);
            // 
            // button47
            // 
            this->button47->BackColor = System::Drawing::Color::Transparent;
            this->button47->Enabled = false;
            this->button47->FlatAppearance->BorderSize = 0;
            this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button47->ForeColor = System::Drawing::Color::White;
            this->button47->Location = System::Drawing::Point(379, 302);
            this->button47->Name = L"button47";
            this->button47->Size = System::Drawing::Size(50, 50);
            this->button47->TabIndex = 44;
            this->button47->Text = L"47";
            this->button47->UseVisualStyleBackColor = false;
            this->button47->Click += gcnew System::EventHandler(this, &board10x10::button47_Click);
            // 
            // button48
            // 
            this->button48->BackColor = System::Drawing::Color::Transparent;
            this->button48->Enabled = false;
            this->button48->FlatAppearance->BorderSize = 0;
            this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button48->ForeColor = System::Drawing::Color::White;
            this->button48->Location = System::Drawing::Point(428, 302);
            this->button48->Name = L"button48";
            this->button48->Size = System::Drawing::Size(50, 50);
            this->button48->TabIndex = 43;
            this->button48->Text = L"48";
            this->button48->UseVisualStyleBackColor = false;
            this->button48->Click += gcnew System::EventHandler(this, &board10x10::button48_Click);
            // 
            // button49
            // 
            this->button49->BackColor = System::Drawing::Color::Transparent;
            this->button49->Enabled = false;
            this->button49->FlatAppearance->BorderSize = 0;
            this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button49->ForeColor = System::Drawing::Color::White;
            this->button49->Location = System::Drawing::Point(477, 302);
            this->button49->Name = L"button49";
            this->button49->Size = System::Drawing::Size(50, 50);
            this->button49->TabIndex = 42;
            this->button49->Text = L"49";
            this->button49->UseVisualStyleBackColor = false;
            this->button49->Click += gcnew System::EventHandler(this, &board10x10::button49_Click);
            // 
            // button50
            // 
            this->button50->BackColor = System::Drawing::Color::Transparent;
            this->button50->Enabled = false;
            this->button50->FlatAppearance->BorderSize = 0;
            this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button50->ForeColor = System::Drawing::Color::White;
            this->button50->Location = System::Drawing::Point(526, 302);
            this->button50->Name = L"button50";
            this->button50->Size = System::Drawing::Size(50, 50);
            this->button50->TabIndex = 41;
            this->button50->Text = L"50";
            this->button50->UseVisualStyleBackColor = false;
            this->button50->Click += gcnew System::EventHandler(this, &board10x10::button50_Click);
            // 
            // button51
            // 
            this->button51->BackColor = System::Drawing::Color::Transparent;
            this->button51->Enabled = false;
            this->button51->FlatAppearance->BorderSize = 0;
            this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button51->ForeColor = System::Drawing::Color::White;
            this->button51->Location = System::Drawing::Point(85, 351);
            this->button51->Name = L"button51";
            this->button51->Size = System::Drawing::Size(50, 50);
            this->button51->TabIndex = 60;
            this->button51->Text = L"51";
            this->button51->UseVisualStyleBackColor = false;
            this->button51->Click += gcnew System::EventHandler(this, &board10x10::button51_Click);
            // 
            // button52
            // 
            this->button52->BackColor = System::Drawing::Color::Transparent;
            this->button52->Enabled = false;
            this->button52->FlatAppearance->BorderSize = 0;
            this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button52->ForeColor = System::Drawing::Color::White;
            this->button52->Location = System::Drawing::Point(134, 351);
            this->button52->Name = L"button52";
            this->button52->Size = System::Drawing::Size(50, 50);
            this->button52->TabIndex = 59;
            this->button52->Text = L"52";
            this->button52->UseVisualStyleBackColor = false;
            this->button52->Click += gcnew System::EventHandler(this, &board10x10::button52_Click);
            // 
            // button53
            // 
            this->button53->BackColor = System::Drawing::Color::Transparent;
            this->button53->Enabled = false;
            this->button53->FlatAppearance->BorderSize = 0;
            this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button53->ForeColor = System::Drawing::Color::White;
            this->button53->Location = System::Drawing::Point(183, 351);
            this->button53->Name = L"button53";
            this->button53->Size = System::Drawing::Size(50, 50);
            this->button53->TabIndex = 58;
            this->button53->Text = L"53";
            this->button53->UseVisualStyleBackColor = false;
            this->button53->Click += gcnew System::EventHandler(this, &board10x10::button53_Click);
            // 
            // button54
            // 
            this->button54->BackColor = System::Drawing::Color::Transparent;
            this->button54->Enabled = false;
            this->button54->FlatAppearance->BorderSize = 0;
            this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button54->ForeColor = System::Drawing::Color::White;
            this->button54->Location = System::Drawing::Point(232, 351);
            this->button54->Name = L"button54";
            this->button54->Size = System::Drawing::Size(50, 50);
            this->button54->TabIndex = 57;
            this->button54->Text = L"54";
            this->button54->UseVisualStyleBackColor = false;
            this->button54->Click += gcnew System::EventHandler(this, &board10x10::button54_Click);
            // 
            // button55
            // 
            this->button55->BackColor = System::Drawing::Color::Transparent;
            this->button55->Enabled = false;
            this->button55->FlatAppearance->BorderSize = 0;
            this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button55->ForeColor = System::Drawing::Color::White;
            this->button55->Location = System::Drawing::Point(281, 351);
            this->button55->Name = L"button55";
            this->button55->Size = System::Drawing::Size(50, 50);
            this->button55->TabIndex = 56;
            this->button55->Text = L"55";
            this->button55->UseVisualStyleBackColor = false;
            this->button55->Click += gcnew System::EventHandler(this, &board10x10::button55_Click);
            // 
            // button56
            // 
            this->button56->BackColor = System::Drawing::Color::Transparent;
            this->button56->Enabled = false;
            this->button56->FlatAppearance->BorderSize = 0;
            this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button56->ForeColor = System::Drawing::Color::White;
            this->button56->Location = System::Drawing::Point(330, 351);
            this->button56->Name = L"button56";
            this->button56->Size = System::Drawing::Size(50, 50);
            this->button56->TabIndex = 55;
            this->button56->Text = L"56";
            this->button56->UseVisualStyleBackColor = false;
            this->button56->Click += gcnew System::EventHandler(this, &board10x10::button56_Click);
            // 
            // button57
            // 
            this->button57->BackColor = System::Drawing::Color::Transparent;
            this->button57->Enabled = false;
            this->button57->FlatAppearance->BorderSize = 0;
            this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button57->ForeColor = System::Drawing::Color::White;
            this->button57->Location = System::Drawing::Point(379, 351);
            this->button57->Name = L"button57";
            this->button57->Size = System::Drawing::Size(50, 50);
            this->button57->TabIndex = 54;
            this->button57->Text = L"57";
            this->button57->UseVisualStyleBackColor = false;
            this->button57->Click += gcnew System::EventHandler(this, &board10x10::button57_Click);
            // 
            // button58
            // 
            this->button58->BackColor = System::Drawing::Color::Transparent;
            this->button58->Enabled = false;
            this->button58->FlatAppearance->BorderSize = 0;
            this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button58->ForeColor = System::Drawing::Color::White;
            this->button58->Location = System::Drawing::Point(428, 351);
            this->button58->Name = L"button58";
            this->button58->Size = System::Drawing::Size(50, 50);
            this->button58->TabIndex = 53;
            this->button58->Text = L"58";
            this->button58->UseVisualStyleBackColor = false;
            this->button58->Click += gcnew System::EventHandler(this, &board10x10::button58_Click);
            // 
            // button59
            // 
            this->button59->BackColor = System::Drawing::Color::Transparent;
            this->button59->Enabled = false;
            this->button59->FlatAppearance->BorderSize = 0;
            this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button59->ForeColor = System::Drawing::Color::White;
            this->button59->Location = System::Drawing::Point(477, 351);
            this->button59->Name = L"button59";
            this->button59->Size = System::Drawing::Size(50, 50);
            this->button59->TabIndex = 52;
            this->button59->Text = L"59";
            this->button59->UseVisualStyleBackColor = false;
            this->button59->Click += gcnew System::EventHandler(this, &board10x10::button59_Click);
            // 
            // button60
            // 
            this->button60->BackColor = System::Drawing::Color::Transparent;
            this->button60->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
            this->button60->Enabled = false;
            this->button60->FlatAppearance->BorderSize = 0;
            this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button60->ForeColor = System::Drawing::Color::White;
            this->button60->Location = System::Drawing::Point(526, 351);
            this->button60->Name = L"button60";
            this->button60->Size = System::Drawing::Size(50, 50);
            this->button60->TabIndex = 51;
            this->button60->Text = L"60";
            this->button60->UseVisualStyleBackColor = false;
            this->button60->Click += gcnew System::EventHandler(this, &board10x10::button60_Click);
            // 
            // button61
            // 
            this->button61->BackColor = System::Drawing::Color::Transparent;
            this->button61->Enabled = false;
            this->button61->FlatAppearance->BorderSize = 0;
            this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button61->ForeColor = System::Drawing::Color::White;
            this->button61->Location = System::Drawing::Point(85, 400);
            this->button61->Name = L"button61";
            this->button61->Size = System::Drawing::Size(50, 50);
            this->button61->TabIndex = 70;
            this->button61->Text = L"61";
            this->button61->UseVisualStyleBackColor = false;
            this->button61->Click += gcnew System::EventHandler(this, &board10x10::button61_Click);
            // 
            // button62
            // 
            this->button62->BackColor = System::Drawing::Color::Transparent;
            this->button62->Enabled = false;
            this->button62->FlatAppearance->BorderSize = 0;
            this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button62->ForeColor = System::Drawing::Color::White;
            this->button62->Location = System::Drawing::Point(134, 400);
            this->button62->Name = L"button62";
            this->button62->Size = System::Drawing::Size(50, 50);
            this->button62->TabIndex = 69;
            this->button62->Text = L"62";
            this->button62->UseVisualStyleBackColor = false;
            this->button62->Click += gcnew System::EventHandler(this, &board10x10::button62_Click);
            // 
            // button63
            // 
            this->button63->BackColor = System::Drawing::Color::Transparent;
            this->button63->Enabled = false;
            this->button63->FlatAppearance->BorderSize = 0;
            this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button63->ForeColor = System::Drawing::Color::White;
            this->button63->Location = System::Drawing::Point(183, 400);
            this->button63->Name = L"button63";
            this->button63->Size = System::Drawing::Size(50, 50);
            this->button63->TabIndex = 68;
            this->button63->Text = L"63";
            this->button63->UseVisualStyleBackColor = false;
            this->button63->Click += gcnew System::EventHandler(this, &board10x10::button63_Click);
            // 
            // button64
            // 
            this->button64->BackColor = System::Drawing::Color::Transparent;
            this->button64->Enabled = false;
            this->button64->FlatAppearance->BorderSize = 0;
            this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button64->ForeColor = System::Drawing::Color::White;
            this->button64->Location = System::Drawing::Point(232, 400);
            this->button64->Name = L"button64";
            this->button64->Size = System::Drawing::Size(50, 50);
            this->button64->TabIndex = 67;
            this->button64->Text = L"64";
            this->button64->UseVisualStyleBackColor = false;
            this->button64->Click += gcnew System::EventHandler(this, &board10x10::button64_Click);
            // 
            // button65
            // 
            this->button65->BackColor = System::Drawing::Color::Transparent;
            this->button65->Enabled = false;
            this->button65->FlatAppearance->BorderSize = 0;
            this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button65->ForeColor = System::Drawing::Color::White;
            this->button65->Location = System::Drawing::Point(281, 400);
            this->button65->Name = L"button65";
            this->button65->Size = System::Drawing::Size(50, 50);
            this->button65->TabIndex = 66;
            this->button65->Text = L"65";
            this->button65->UseVisualStyleBackColor = false;
            this->button65->Click += gcnew System::EventHandler(this, &board10x10::button65_Click);
            // 
            // button66
            // 
            this->button66->BackColor = System::Drawing::Color::Transparent;
            this->button66->Enabled = false;
            this->button66->FlatAppearance->BorderSize = 0;
            this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button66->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button66->ForeColor = System::Drawing::Color::White;
            this->button66->Location = System::Drawing::Point(330, 400);
            this->button66->Name = L"button66";
            this->button66->Size = System::Drawing::Size(50, 50);
            this->button66->TabIndex = 65;
            this->button66->Text = L"66";
            this->button66->UseVisualStyleBackColor = false;
            this->button66->Click += gcnew System::EventHandler(this, &board10x10::button66_Click);
            // 
            // button67
            // 
            this->button67->BackColor = System::Drawing::Color::Transparent;
            this->button67->Enabled = false;
            this->button67->FlatAppearance->BorderSize = 0;
            this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button67->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button67->ForeColor = System::Drawing::Color::White;
            this->button67->Location = System::Drawing::Point(379, 400);
            this->button67->Name = L"button67";
            this->button67->Size = System::Drawing::Size(50, 50);
            this->button67->TabIndex = 64;
            this->button67->Text = L"67";
            this->button67->UseVisualStyleBackColor = false;
            this->button67->Click += gcnew System::EventHandler(this, &board10x10::button67_Click);
            // 
            // button68
            // 
            this->button68->BackColor = System::Drawing::Color::Transparent;
            this->button68->Enabled = false;
            this->button68->FlatAppearance->BorderSize = 0;
            this->button68->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button68->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button68->ForeColor = System::Drawing::Color::White;
            this->button68->Location = System::Drawing::Point(428, 400);
            this->button68->Name = L"button68";
            this->button68->Size = System::Drawing::Size(50, 50);
            this->button68->TabIndex = 63;
            this->button68->Text = L"68";
            this->button68->UseVisualStyleBackColor = false;
            this->button68->Click += gcnew System::EventHandler(this, &board10x10::button68_Click);
            // 
            // button69
            // 
            this->button69->BackColor = System::Drawing::Color::Transparent;
            this->button69->Enabled = false;
            this->button69->FlatAppearance->BorderSize = 0;
            this->button69->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button69->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button69->ForeColor = System::Drawing::Color::White;
            this->button69->Location = System::Drawing::Point(477, 400);
            this->button69->Name = L"button69";
            this->button69->Size = System::Drawing::Size(50, 50);
            this->button69->TabIndex = 62;
            this->button69->Text = L"69";
            this->button69->UseVisualStyleBackColor = false;
            this->button69->Click += gcnew System::EventHandler(this, &board10x10::button69_Click);
            // 
            // button70
            // 
            this->button70->BackColor = System::Drawing::Color::Transparent;
            this->button70->Enabled = false;
            this->button70->FlatAppearance->BorderSize = 0;
            this->button70->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button70->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button70->ForeColor = System::Drawing::Color::White;
            this->button70->Location = System::Drawing::Point(526, 400);
            this->button70->Name = L"button70";
            this->button70->Size = System::Drawing::Size(50, 50);
            this->button70->TabIndex = 61;
            this->button70->Text = L"70";
            this->button70->UseVisualStyleBackColor = false;
            this->button70->Click += gcnew System::EventHandler(this, &board10x10::button70_Click);
            // 
            // button71
            // 
            this->button71->BackColor = System::Drawing::Color::Transparent;
            this->button71->Enabled = false;
            this->button71->FlatAppearance->BorderSize = 0;
            this->button71->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button71->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button71->ForeColor = System::Drawing::Color::White;
            this->button71->Location = System::Drawing::Point(85, 449);
            this->button71->Name = L"button71";
            this->button71->Size = System::Drawing::Size(50, 50);
            this->button71->TabIndex = 80;
            this->button71->Text = L"71";
            this->button71->UseVisualStyleBackColor = false;
            this->button71->Click += gcnew System::EventHandler(this, &board10x10::button71_Click);
            // 
            // button72
            // 
            this->button72->BackColor = System::Drawing::Color::Transparent;
            this->button72->Enabled = false;
            this->button72->FlatAppearance->BorderSize = 0;
            this->button72->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button72->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button72->ForeColor = System::Drawing::Color::White;
            this->button72->Location = System::Drawing::Point(134, 449);
            this->button72->Name = L"button72";
            this->button72->Size = System::Drawing::Size(50, 50);
            this->button72->TabIndex = 79;
            this->button72->Text = L"72";
            this->button72->UseVisualStyleBackColor = false;
            this->button72->Click += gcnew System::EventHandler(this, &board10x10::button72_Click);
            // 
            // button73
            // 
            this->button73->BackColor = System::Drawing::Color::Transparent;
            this->button73->Enabled = false;
            this->button73->FlatAppearance->BorderSize = 0;
            this->button73->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button73->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button73->ForeColor = System::Drawing::Color::White;
            this->button73->Location = System::Drawing::Point(183, 449);
            this->button73->Name = L"button73";
            this->button73->Size = System::Drawing::Size(50, 50);
            this->button73->TabIndex = 78;
            this->button73->Text = L"73";
            this->button73->UseVisualStyleBackColor = false;
            this->button73->Click += gcnew System::EventHandler(this, &board10x10::button73_Click);
            // 
            // button74
            // 
            this->button74->BackColor = System::Drawing::Color::Transparent;
            this->button74->Enabled = false;
            this->button74->FlatAppearance->BorderSize = 0;
            this->button74->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button74->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button74->ForeColor = System::Drawing::Color::White;
            this->button74->Location = System::Drawing::Point(232, 449);
            this->button74->Name = L"button74";
            this->button74->Size = System::Drawing::Size(50, 50);
            this->button74->TabIndex = 77;
            this->button74->Text = L"74";
            this->button74->UseVisualStyleBackColor = false;
            this->button74->Click += gcnew System::EventHandler(this, &board10x10::button74_Click);
            // 
            // button75
            // 
            this->button75->BackColor = System::Drawing::Color::Transparent;
            this->button75->Enabled = false;
            this->button75->FlatAppearance->BorderSize = 0;
            this->button75->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button75->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button75->ForeColor = System::Drawing::Color::White;
            this->button75->Location = System::Drawing::Point(281, 449);
            this->button75->Name = L"button75";
            this->button75->Size = System::Drawing::Size(50, 50);
            this->button75->TabIndex = 76;
            this->button75->Text = L"75";
            this->button75->UseVisualStyleBackColor = false;
            this->button75->Click += gcnew System::EventHandler(this, &board10x10::button75_Click);
            // 
            // button76
            // 
            this->button76->BackColor = System::Drawing::Color::Transparent;
            this->button76->Enabled = false;
            this->button76->FlatAppearance->BorderSize = 0;
            this->button76->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button76->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button76->ForeColor = System::Drawing::Color::White;
            this->button76->Location = System::Drawing::Point(330, 449);
            this->button76->Name = L"button76";
            this->button76->Size = System::Drawing::Size(50, 50);
            this->button76->TabIndex = 75;
            this->button76->Text = L"76";
            this->button76->UseVisualStyleBackColor = false;
            this->button76->Click += gcnew System::EventHandler(this, &board10x10::button76_Click);
            // 
            // button77
            // 
            this->button77->BackColor = System::Drawing::Color::Transparent;
            this->button77->Enabled = false;
            this->button77->FlatAppearance->BorderSize = 0;
            this->button77->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button77->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button77->ForeColor = System::Drawing::Color::White;
            this->button77->Location = System::Drawing::Point(379, 449);
            this->button77->Name = L"button77";
            this->button77->Size = System::Drawing::Size(50, 50);
            this->button77->TabIndex = 74;
            this->button77->Text = L"77";
            this->button77->UseVisualStyleBackColor = false;
            this->button77->Click += gcnew System::EventHandler(this, &board10x10::button77_Click);
            // 
            // button78
            // 
            this->button78->BackColor = System::Drawing::Color::Transparent;
            this->button78->Enabled = false;
            this->button78->FlatAppearance->BorderSize = 0;
            this->button78->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button78->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button78->ForeColor = System::Drawing::Color::White;
            this->button78->Location = System::Drawing::Point(428, 449);
            this->button78->Name = L"button78";
            this->button78->Size = System::Drawing::Size(50, 50);
            this->button78->TabIndex = 73;
            this->button78->Text = L"78";
            this->button78->UseVisualStyleBackColor = false;
            this->button78->Click += gcnew System::EventHandler(this, &board10x10::button78_Click);
            // 
            // button79
            // 
            this->button79->BackColor = System::Drawing::Color::Transparent;
            this->button79->Enabled = false;
            this->button79->FlatAppearance->BorderSize = 0;
            this->button79->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button79->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button79->ForeColor = System::Drawing::Color::White;
            this->button79->Location = System::Drawing::Point(477, 449);
            this->button79->Name = L"button79";
            this->button79->Size = System::Drawing::Size(50, 50);
            this->button79->TabIndex = 72;
            this->button79->Text = L"79";
            this->button79->UseVisualStyleBackColor = false;
            this->button79->Click += gcnew System::EventHandler(this, &board10x10::button79_Click);
            // 
            // button80
            // 
            this->button80->BackColor = System::Drawing::Color::Transparent;
            this->button80->Enabled = false;
            this->button80->FlatAppearance->BorderSize = 0;
            this->button80->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button80->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button80->ForeColor = System::Drawing::Color::White;
            this->button80->Location = System::Drawing::Point(526, 449);
            this->button80->Name = L"button80";
            this->button80->Size = System::Drawing::Size(50, 50);
            this->button80->TabIndex = 71;
            this->button80->Text = L"80";
            this->button80->UseVisualStyleBackColor = false;
            this->button80->Click += gcnew System::EventHandler(this, &board10x10::button80_Click);
            // 
            // button81
            // 
            this->button81->BackColor = System::Drawing::Color::Transparent;
            this->button81->Enabled = false;
            this->button81->FlatAppearance->BorderSize = 0;
            this->button81->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button81->ForeColor = System::Drawing::Color::White;
            this->button81->Location = System::Drawing::Point(85, 498);
            this->button81->Name = L"button81";
            this->button81->Size = System::Drawing::Size(50, 50);
            this->button81->TabIndex = 90;
            this->button81->Text = L"81";
            this->button81->UseVisualStyleBackColor = false;
            this->button81->Click += gcnew System::EventHandler(this, &board10x10::button81_Click);
            // 
            // button82
            // 
            this->button82->BackColor = System::Drawing::Color::Transparent;
            this->button82->Enabled = false;
            this->button82->FlatAppearance->BorderSize = 0;
            this->button82->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button82->ForeColor = System::Drawing::Color::White;
            this->button82->Location = System::Drawing::Point(134, 498);
            this->button82->Name = L"button82";
            this->button82->Size = System::Drawing::Size(50, 50);
            this->button82->TabIndex = 89;
            this->button82->Text = L"82";
            this->button82->UseVisualStyleBackColor = false;
            this->button82->Click += gcnew System::EventHandler(this, &board10x10::button82_Click);
            // 
            // button83
            // 
            this->button83->BackColor = System::Drawing::Color::Transparent;
            this->button83->Enabled = false;
            this->button83->FlatAppearance->BorderSize = 0;
            this->button83->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button83->ForeColor = System::Drawing::Color::White;
            this->button83->Location = System::Drawing::Point(183, 498);
            this->button83->Name = L"button83";
            this->button83->Size = System::Drawing::Size(50, 50);
            this->button83->TabIndex = 88;
            this->button83->Text = L"83";
            this->button83->UseVisualStyleBackColor = false;
            this->button83->Click += gcnew System::EventHandler(this, &board10x10::button83_Click);
            // 
            // button84
            // 
            this->button84->BackColor = System::Drawing::Color::Transparent;
            this->button84->Enabled = false;
            this->button84->FlatAppearance->BorderSize = 0;
            this->button84->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button84->ForeColor = System::Drawing::Color::White;
            this->button84->Location = System::Drawing::Point(232, 498);
            this->button84->Name = L"button84";
            this->button84->Size = System::Drawing::Size(50, 50);
            this->button84->TabIndex = 87;
            this->button84->Text = L"84";
            this->button84->UseVisualStyleBackColor = false;
            this->button84->Click += gcnew System::EventHandler(this, &board10x10::button84_Click);
            // 
            // button85
            // 
            this->button85->BackColor = System::Drawing::Color::Transparent;
            this->button85->Enabled = false;
            this->button85->FlatAppearance->BorderSize = 0;
            this->button85->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button85->ForeColor = System::Drawing::Color::White;
            this->button85->Location = System::Drawing::Point(281, 498);
            this->button85->Name = L"button85";
            this->button85->Size = System::Drawing::Size(50, 50);
            this->button85->TabIndex = 86;
            this->button85->Text = L"85";
            this->button85->UseVisualStyleBackColor = false;
            this->button85->Click += gcnew System::EventHandler(this, &board10x10::button85_Click);
            // 
            // button86
            // 
            this->button86->BackColor = System::Drawing::Color::Transparent;
            this->button86->Enabled = false;
            this->button86->FlatAppearance->BorderSize = 0;
            this->button86->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button86->ForeColor = System::Drawing::Color::White;
            this->button86->Location = System::Drawing::Point(330, 498);
            this->button86->Name = L"button86";
            this->button86->Size = System::Drawing::Size(50, 50);
            this->button86->TabIndex = 85;
            this->button86->Text = L"86";
            this->button86->UseVisualStyleBackColor = false;
            this->button86->Click += gcnew System::EventHandler(this, &board10x10::button86_Click);
            // 
            // button87
            // 
            this->button87->BackColor = System::Drawing::Color::Transparent;
            this->button87->Enabled = false;
            this->button87->FlatAppearance->BorderSize = 0;
            this->button87->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button87->ForeColor = System::Drawing::Color::White;
            this->button87->Location = System::Drawing::Point(379, 498);
            this->button87->Name = L"button87";
            this->button87->Size = System::Drawing::Size(50, 50);
            this->button87->TabIndex = 84;
            this->button87->Text = L"87";
            this->button87->UseVisualStyleBackColor = false;
            this->button87->Click += gcnew System::EventHandler(this, &board10x10::button87_Click);
            // 
            // button88
            // 
            this->button88->BackColor = System::Drawing::Color::Transparent;
            this->button88->Enabled = false;
            this->button88->FlatAppearance->BorderSize = 0;
            this->button88->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button88->ForeColor = System::Drawing::Color::White;
            this->button88->Location = System::Drawing::Point(428, 498);
            this->button88->Name = L"button88";
            this->button88->Size = System::Drawing::Size(50, 50);
            this->button88->TabIndex = 83;
            this->button88->Text = L"88";
            this->button88->UseVisualStyleBackColor = false;
            this->button88->Click += gcnew System::EventHandler(this, &board10x10::button88_Click);
            // 
            // button89
            // 
            this->button89->BackColor = System::Drawing::Color::Transparent;
            this->button89->Enabled = false;
            this->button89->FlatAppearance->BorderSize = 0;
            this->button89->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button89->ForeColor = System::Drawing::Color::White;
            this->button89->Location = System::Drawing::Point(477, 498);
            this->button89->Name = L"button89";
            this->button89->Size = System::Drawing::Size(50, 50);
            this->button89->TabIndex = 82;
            this->button89->Text = L"89";
            this->button89->UseVisualStyleBackColor = false;
            this->button89->Click += gcnew System::EventHandler(this, &board10x10::button89_Click);
            // 
            // button90
            // 
            this->button90->BackColor = System::Drawing::Color::Transparent;
            this->button90->Enabled = false;
            this->button90->FlatAppearance->BorderSize = 0;
            this->button90->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button90->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button90->ForeColor = System::Drawing::Color::White;
            this->button90->Location = System::Drawing::Point(526, 498);
            this->button90->Name = L"button90";
            this->button90->Size = System::Drawing::Size(50, 50);
            this->button90->TabIndex = 81;
            this->button90->Text = L"90";
            this->button90->UseVisualStyleBackColor = false;
            this->button90->Click += gcnew System::EventHandler(this, &board10x10::button90_Click);
            // 
            // button91
            // 
            this->button91->BackColor = System::Drawing::Color::Transparent;
            this->button91->Enabled = false;
            this->button91->FlatAppearance->BorderSize = 0;
            this->button91->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button91->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button91->ForeColor = System::Drawing::Color::White;
            this->button91->Location = System::Drawing::Point(85, 547);
            this->button91->Name = L"button91";
            this->button91->Size = System::Drawing::Size(50, 50);
            this->button91->TabIndex = 100;
            this->button91->Text = L"91";
            this->button91->UseVisualStyleBackColor = false;
            this->button91->Click += gcnew System::EventHandler(this, &board10x10::button91_Click);
            // 
            // button92
            // 
            this->button92->BackColor = System::Drawing::Color::Transparent;
            this->button92->Enabled = false;
            this->button92->FlatAppearance->BorderSize = 0;
            this->button92->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button92->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button92->ForeColor = System::Drawing::Color::White;
            this->button92->Location = System::Drawing::Point(134, 547);
            this->button92->Name = L"button92";
            this->button92->Size = System::Drawing::Size(50, 50);
            this->button92->TabIndex = 99;
            this->button92->Text = L"92";
            this->button92->UseVisualStyleBackColor = false;
            this->button92->Click += gcnew System::EventHandler(this, &board10x10::button92_Click);
            // 
            // button93
            // 
            this->button93->BackColor = System::Drawing::Color::Transparent;
            this->button93->Enabled = false;
            this->button93->FlatAppearance->BorderSize = 0;
            this->button93->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button93->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button93->ForeColor = System::Drawing::Color::White;
            this->button93->Location = System::Drawing::Point(183, 547);
            this->button93->Name = L"button93";
            this->button93->Size = System::Drawing::Size(50, 50);
            this->button93->TabIndex = 98;
            this->button93->Text = L"93";
            this->button93->UseVisualStyleBackColor = false;
            this->button93->Click += gcnew System::EventHandler(this, &board10x10::button93_Click);
            // 
            // button94
            // 
            this->button94->BackColor = System::Drawing::Color::Transparent;
            this->button94->Enabled = false;
            this->button94->FlatAppearance->BorderSize = 0;
            this->button94->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button94->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button94->ForeColor = System::Drawing::Color::White;
            this->button94->Location = System::Drawing::Point(232, 547);
            this->button94->Name = L"button94";
            this->button94->Size = System::Drawing::Size(50, 50);
            this->button94->TabIndex = 97;
            this->button94->Text = L"94";
            this->button94->UseVisualStyleBackColor = false;
            this->button94->Click += gcnew System::EventHandler(this, &board10x10::button94_Click);
            // 
            // button95
            // 
            this->button95->BackColor = System::Drawing::Color::Transparent;
            this->button95->Enabled = false;
            this->button95->FlatAppearance->BorderSize = 0;
            this->button95->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button95->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button95->ForeColor = System::Drawing::Color::White;
            this->button95->Location = System::Drawing::Point(281, 547);
            this->button95->Name = L"button95";
            this->button95->Size = System::Drawing::Size(50, 50);
            this->button95->TabIndex = 96;
            this->button95->Text = L"95";
            this->button95->UseVisualStyleBackColor = false;
            this->button95->Click += gcnew System::EventHandler(this, &board10x10::button95_Click);
            // 
            // button96
            // 
            this->button96->BackColor = System::Drawing::Color::Transparent;
            this->button96->Enabled = false;
            this->button96->FlatAppearance->BorderSize = 0;
            this->button96->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button96->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button96->ForeColor = System::Drawing::Color::White;
            this->button96->Location = System::Drawing::Point(330, 547);
            this->button96->Name = L"button96";
            this->button96->Size = System::Drawing::Size(50, 50);
            this->button96->TabIndex = 95;
            this->button96->Text = L"96";
            this->button96->UseVisualStyleBackColor = false;
            this->button96->Click += gcnew System::EventHandler(this, &board10x10::button96_Click);
            // 
            // button97
            // 
            this->button97->BackColor = System::Drawing::Color::Transparent;
            this->button97->Enabled = false;
            this->button97->FlatAppearance->BorderSize = 0;
            this->button97->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button97->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button97->ForeColor = System::Drawing::Color::White;
            this->button97->Location = System::Drawing::Point(379, 547);
            this->button97->Name = L"button97";
            this->button97->Size = System::Drawing::Size(50, 50);
            this->button97->TabIndex = 94;
            this->button97->Text = L"97";
            this->button97->UseVisualStyleBackColor = false;
            this->button97->Click += gcnew System::EventHandler(this, &board10x10::button97_Click);
            // 
            // button98
            // 
            this->button98->BackColor = System::Drawing::Color::Transparent;
            this->button98->Enabled = false;
            this->button98->FlatAppearance->BorderSize = 0;
            this->button98->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button98->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button98->ForeColor = System::Drawing::Color::White;
            this->button98->Location = System::Drawing::Point(428, 547);
            this->button98->Name = L"button98";
            this->button98->Size = System::Drawing::Size(50, 50);
            this->button98->TabIndex = 93;
            this->button98->Text = L"98";
            this->button98->UseVisualStyleBackColor = false;
            this->button98->Click += gcnew System::EventHandler(this, &board10x10::button98_Click);
            // 
            // button99
            // 
            this->button99->BackColor = System::Drawing::Color::Transparent;
            this->button99->Enabled = false;
            this->button99->FlatAppearance->BorderSize = 0;
            this->button99->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button99->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button99->ForeColor = System::Drawing::Color::White;
            this->button99->Location = System::Drawing::Point(477, 547);
            this->button99->Name = L"button99";
            this->button99->Size = System::Drawing::Size(50, 50);
            this->button99->TabIndex = 92;
            this->button99->Text = L"99";
            this->button99->UseVisualStyleBackColor = false;
            this->button99->Click += gcnew System::EventHandler(this, &board10x10::button99_Click);
            // 
            // button100
            // 
            this->button100->BackColor = System::Drawing::Color::Transparent;
            this->button100->Enabled = false;
            this->button100->FlatAppearance->BorderSize = 0;
            this->button100->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button100->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button100->ForeColor = System::Drawing::Color::White;
            this->button100->Location = System::Drawing::Point(526, 547);
            this->button100->Name = L"button100";
            this->button100->Size = System::Drawing::Size(50, 50);
            this->button100->TabIndex = 91;
            this->button100->Text = L"100";
            this->button100->UseVisualStyleBackColor = false;
            this->button100->Click += gcnew System::EventHandler(this, &board10x10::button100_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Wheat;
            this->label1->Location = System::Drawing::Point(71, 29);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(124, 41);
            this->label1->TabIndex = 101;
            this->label1->Text = L"player 1";
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::Wheat;
            this->label2->Location = System::Drawing::Point(76, 29);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(128, 41);
            this->label2->TabIndex = 102;
            this->label2->Text = L"player 2";
            // 
            // button101
            // 
            this->button101->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button101->BackColor = System::Drawing::Color::Transparent;
            this->button101->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button101.BackgroundImage")));
            this->button101->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button101->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button101->FlatAppearance->BorderSize = 0;
            this->button101->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button101->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button101->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button101->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button101->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button101->ForeColor = System::Drawing::Color::Red;
            this->button101->Location = System::Drawing::Point(1082, 750);
            this->button101->Name = L"button101";
            this->button101->Size = System::Drawing::Size(116, 57);
            this->button101->TabIndex = 103;
            this->button101->UseVisualStyleBackColor = false;
            this->button101->Click += gcnew System::EventHandler(this, &board10x10::button101_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->Controls->Add(this->panel5);
            this->panel1->Controls->Add(this->button35);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Controls->Add(this->button91);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button92);
            this->panel1->Controls->Add(this->button4);
            this->panel1->Controls->Add(this->button93);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->button94);
            this->panel1->Controls->Add(this->button6);
            this->panel1->Controls->Add(this->button95);
            this->panel1->Controls->Add(this->button7);
            this->panel1->Controls->Add(this->button96);
            this->panel1->Controls->Add(this->button8);
            this->panel1->Controls->Add(this->button97);
            this->panel1->Controls->Add(this->button9);
            this->panel1->Controls->Add(this->button98);
            this->panel1->Controls->Add(this->button10);
            this->panel1->Controls->Add(this->button99);
            this->panel1->Controls->Add(this->button20);
            this->panel1->Controls->Add(this->button100);
            this->panel1->Controls->Add(this->button19);
            this->panel1->Controls->Add(this->button81);
            this->panel1->Controls->Add(this->button18);
            this->panel1->Controls->Add(this->button82);
            this->panel1->Controls->Add(this->button17);
            this->panel1->Controls->Add(this->button83);
            this->panel1->Controls->Add(this->button16);
            this->panel1->Controls->Add(this->button84);
            this->panel1->Controls->Add(this->button15);
            this->panel1->Controls->Add(this->button85);
            this->panel1->Controls->Add(this->button14);
            this->panel1->Controls->Add(this->button86);
            this->panel1->Controls->Add(this->button13);
            this->panel1->Controls->Add(this->button87);
            this->panel1->Controls->Add(this->button12);
            this->panel1->Controls->Add(this->button88);
            this->panel1->Controls->Add(this->button11);
            this->panel1->Controls->Add(this->button89);
            this->panel1->Controls->Add(this->button30);
            this->panel1->Controls->Add(this->button90);
            this->panel1->Controls->Add(this->button29);
            this->panel1->Controls->Add(this->button71);
            this->panel1->Controls->Add(this->button28);
            this->panel1->Controls->Add(this->button72);
            this->panel1->Controls->Add(this->button27);
            this->panel1->Controls->Add(this->button73);
            this->panel1->Controls->Add(this->button26);
            this->panel1->Controls->Add(this->button74);
            this->panel1->Controls->Add(this->button25);
            this->panel1->Controls->Add(this->button75);
            this->panel1->Controls->Add(this->button24);
            this->panel1->Controls->Add(this->button76);
            this->panel1->Controls->Add(this->button23);
            this->panel1->Controls->Add(this->button77);
            this->panel1->Controls->Add(this->button22);
            this->panel1->Controls->Add(this->button78);
            this->panel1->Controls->Add(this->button21);
            this->panel1->Controls->Add(this->button79);
            this->panel1->Controls->Add(this->button40);
            this->panel1->Controls->Add(this->button80);
            this->panel1->Controls->Add(this->button39);
            this->panel1->Controls->Add(this->button61);
            this->panel1->Controls->Add(this->button38);
            this->panel1->Controls->Add(this->button62);
            this->panel1->Controls->Add(this->button37);
            this->panel1->Controls->Add(this->button63);
            this->panel1->Controls->Add(this->button36);
            this->panel1->Controls->Add(this->button64);
            this->panel1->Controls->Add(this->button34);
            this->panel1->Controls->Add(this->button65);
            this->panel1->Controls->Add(this->button33);
            this->panel1->Controls->Add(this->button66);
            this->panel1->Controls->Add(this->button32);
            this->panel1->Controls->Add(this->button67);
            this->panel1->Controls->Add(this->button31);
            this->panel1->Controls->Add(this->button68);
            this->panel1->Controls->Add(this->button50);
            this->panel1->Controls->Add(this->button69);
            this->panel1->Controls->Add(this->button49);
            this->panel1->Controls->Add(this->button70);
            this->panel1->Controls->Add(this->button48);
            this->panel1->Controls->Add(this->button51);
            this->panel1->Controls->Add(this->button47);
            this->panel1->Controls->Add(this->button52);
            this->panel1->Controls->Add(this->button46);
            this->panel1->Controls->Add(this->button53);
            this->panel1->Controls->Add(this->button45);
            this->panel1->Controls->Add(this->button54);
            this->panel1->Controls->Add(this->button44);
            this->panel1->Controls->Add(this->button55);
            this->panel1->Controls->Add(this->button43);
            this->panel1->Controls->Add(this->button56);
            this->panel1->Controls->Add(this->button42);
            this->panel1->Controls->Add(this->button57);
            this->panel1->Controls->Add(this->button41);
            this->panel1->Controls->Add(this->button58);
            this->panel1->Controls->Add(this->button60);
            this->panel1->Controls->Add(this->button59);
            this->panel1->Location = System::Drawing::Point(292, -9);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(659, 695);
            this->panel1->TabIndex = 104;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::Transparent;
            this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
            this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel5->Controls->Add(this->label3);
            this->panel5->Location = System::Drawing::Point(237, 9);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(200, 100);
            this->panel5->TabIndex = 112;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->BackColor = System::Drawing::Color::Transparent;
            this->label3->Font = (gcnew System::Drawing::Font(L"Digital-7 Mono", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::DarkOrange;
            this->label3->Location = System::Drawing::Point(37, 29);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(112, 40);
            this->label3->TabIndex = 105;
            this->label3->Text = L"00:00";
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Impact", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::Gainsboro;
            this->label4->Location = System::Drawing::Point(192, 23);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 46);
            this->label4->TabIndex = 106;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Impact", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::Gold;
            this->label5->Location = System::Drawing::Point(213, 69);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 46);
            this->label5->TabIndex = 107;
            // 
            // button102
            // 
            this->button102->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button102->FlatAppearance->BorderSize = 0;
            this->button102->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button102->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button102->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button102->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button102->ForeColor = System::Drawing::Color::Gold;
            this->button102->Location = System::Drawing::Point(31, 24);
            this->button102->Name = L"button102";
            this->button102->Size = System::Drawing::Size(124, 50);
            this->button102->TabIndex = 108;
            this->button102->Text = L"start";
            this->button102->UseVisualStyleBackColor = true;
            this->button102->Click += gcnew System::EventHandler(this, &board10x10::button102_Click);
            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &board10x10::timer1_Tick);
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Transparent;
            this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel2->Controls->Add(this->label2);
            this->panel2->Location = System::Drawing::Point(948, 4);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(269, 103);
            this->panel2->TabIndex = 109;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Transparent;
            this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
            this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel3->Controls->Add(this->label1);
            this->panel3->Location = System::Drawing::Point(12, 4);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(269, 103);
            this->panel3->TabIndex = 110;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::Transparent;
            this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
            this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel4->Controls->Add(this->label5);
            this->panel4->Controls->Add(this->label4);
            this->panel4->Location = System::Drawing::Point(341, 692);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(573, 139);
            this->panel4->TabIndex = 111;
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::Transparent;
            this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
            this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel6->Controls->Add(this->button102);
            this->panel6->Location = System::Drawing::Point(998, 489);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(200, 100);
            this->panel6->TabIndex = 112;
            // 
            // button103
            // 
            this->button103->BackColor = System::Drawing::Color::Transparent;
            this->button103->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button103.BackgroundImage")));
            this->button103->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button103->FlatAppearance->BorderSize = 0;
            this->button103->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button103->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button103->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button103->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button103->Location = System::Drawing::Point(3, 750);
            this->button103->Name = L"button103";
            this->button103->Size = System::Drawing::Size(103, 66);
            this->button103->TabIndex = 153;
            this->button103->UseVisualStyleBackColor = false;
            this->button103->Click += gcnew System::EventHandler(this, &board10x10::button103_Click);
            // 
            // board10x10
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::PaleGreen;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1223, 828);
            this->Controls->Add(this->button103);
            this->Controls->Add(this->button101);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel6);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"board10x10";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"v";
            this->Load += gcnew System::EventHandler(this, &board10x10::board10x10_Load);
            this->panel1->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
        
        public: void Setplayer1name(String^ a) {
            label1->Text = a;
        }
    public: void Setplayer2name(String^ b) {
        label2->Text = b;
    }
     public: void setbutton(int n, bool En) {
         switch (n)
         {
         case 1: this->button1->Enabled = En;
             break;
         case 2: this->button2->Enabled = En;
             break;
         case 3: this->button3->Enabled = En;
             break;
         case 4: this->button4->Enabled = En;
             break;
         case 5: this->button5->Enabled = En;
             break;
         case 6: this->button6->Enabled = En;
             break;
         case 7: this->button7->Enabled = En;
             break;
         case 8: this->button8->Enabled = En;
             break;
         case 9: this->button9->Enabled = En;
             break;
         case 10: this->button10->Enabled = En;
             break;
         case 11: this->button11->Enabled = En;
             break;
         case 12: this->button12->Enabled = En;
             break;
         case 13: this->button13->Enabled = En;
             break;
         case 14: this->button14->Enabled = En;
             break;
         case 15: this->button15->Enabled = En;
             break;
         case 16: this->button16->Enabled = En;
             break;
         case 17: this->button17->Enabled = En;
             break;
         case 18: this->button18->Enabled = En;
             break;
         case 19: this->button19->Enabled = En;
             break;
         case 20: this->button20->Enabled = En;
             break;
         case 21: this->button21->Enabled = En;
             break;
         case 22: this->button22->Enabled = En;
             break;
         case 23: this->button23->Enabled = En;
             break;
         case 24: this->button24->Enabled = En;
             break;
         case 25: this->button25->Enabled = En;
             break;
         case 26: this->button26->Enabled = En;
             break;
         case 27: this->button27->Enabled = En;
             break;
         case 28: this->button28->Enabled = En;
             break;
         case 29: this->button29->Enabled = En;
             break;
         case 30: this->button30->Enabled = En;
             break;
         case 31: this->button31->Enabled = En;
             break;
         case 32: this->button32->Enabled = En;
             break;
         case 33: this->button33->Enabled = En;
             break;
         case 34: this->button34->Enabled = En;
             break;
         case 35: this->button35->Enabled = En;
             break;
         case 36: this->button36->Enabled = En;
             break;
         case 37: this->button37->Enabled = En;
             break;
         case 38: this->button38->Enabled = En;
             break;
         case 39: this->button39->Enabled = En;
             break;
         case 40: this->button40->Enabled = En;
             break;
         case 41: this->button41->Enabled = En;
             break;
         case 42: this->button42->Enabled = En;
             break;
         case 43: this->button43->Enabled = En;
             break;
         case 44: this->button44->Enabled = En;
             break;
         case 45: this->button45->Enabled = En;
             break;
         case 46: this->button46->Enabled = En;
             break;
         case 47: this->button47->Enabled = En;
             break;
         case 48: this->button48->Enabled = En;
             break;
         case 49: this->button49->Enabled = En;
             break;
         case 50: this->button50->Enabled = En;
             break;
         case 51: this->button51->Enabled = En;
             break;
         case 52: this->button52->Enabled = En;
             break;
         case 53: this->button53->Enabled = En;
             break;
         case 54: this->button54->Enabled = En;
             break;
         case 55: this->button55->Enabled = En;
             break;
         case 56: this->button56->Enabled = En;
             break;
         case 57: this->button57->Enabled = En;
             break;
         case 58: this->button58->Enabled = En;
             break;
         case 59: this->button59->Enabled = En;
             break;
         case 60: this->button60->Enabled = En;
             break;
         case 61: this->button61->Enabled = En;
             break;
         case 62: this->button62->Enabled = En;
             break;
         case 63: this->button63->Enabled = En;
             break;
         case 64: this->button64->Enabled = En;
             break;
         case 65: this->button65->Enabled = En;
             break;
         case 66: this->button66->Enabled = En;
             break;
         case 67: this->button67->Enabled = En;
             break;
         case 68: this->button68->Enabled = En;
             break;
         case 69: this->button69->Enabled = En;
             break;
         case 70: this->button70->Enabled = En;
             break;
         case 71: this->button71->Enabled = En;
             break;
         case 72: this->button72->Enabled = En;
             break;
         case 73: this->button73->Enabled = En;
             break;
         case 74: this->button74->Enabled = En;
             break;
         case 75: this->button75->Enabled = En;
             break;
         case 76: this->button76->Enabled = En;
             break;
         case 77: this->button77->Enabled = En;
             break;
         case 78: this->button78->Enabled = En;
             break;
         case 79: this->button79->Enabled = En;
             break;
         case 80: this->button80->Enabled = En;
             break;
         case 81: this->button81->Enabled = En;
             break;
         case 82: this->button82->Enabled = En;
             break;
         case 83: this->button83->Enabled = En;
             break;
         case 84: this->button84->Enabled = En;
             break;
         case 85: this->button85->Enabled = En;
             break;
         case 86: this->button86->Enabled = En;
             break;
         case 87: this->button87->Enabled = En;
             break;
         case 88: this->button88->Enabled = En;
             break;
         case 89: this->button89->Enabled = En;
             break;
         case 90: this->button90->Enabled = En;
             break;
         case 91: this->button91->Enabled = En;
             break;
         case 92: this->button92->Enabled = En;
             break;
         case 93: this->button93->Enabled = En;
             break;
         case 94: this->button94->Enabled = En;
             break;
         case 95: this->button95->Enabled = En;
             break;
         case 96: this->button96->Enabled = En;
             break;
         case 97: this->button97->Enabled = En;
             break;
         case 98: this->button98->Enabled = En;
             break;
         case 99: this->button99->Enabled = En;
             break;
         case 100: this->button100->Enabled = En;
             break;


         default:
             break;
         }

     }
           int nb;
           vector <int> l;
           liste^ lm = gcnew liste(100);
            public:	InAr^ InA;
            public:joueur^ jr;
                  int k;
    public:void setlist() {
        l.clear();
        for (int i = 1; i <= 100; i++)
            l.push_back(i);
    }
    private:void supprimer(int n)
    {
        if ((find(l.begin(), l.end(), n) != l.end())) {
            l.erase(find(l.begin(), l.end(), n));
        }
    }


    public:void play(int i) {

        if (lm->verif(i) == true) {
            setbutton(i, false);
            supprimer(i);
            jr->setcoup(i);
            nb++;

            start();
        }
        else {
            if (nb == 0) {
                System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Ce n'est pas un nombre pair", "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
            }
            else {
                System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Ce n'est pas un multiple \n ou un diviseur de " + InA->getcoup(), "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);

            }
        }
    }
    public:void start() {
        lm->multdiv(jr->getcoup(), l);


        if (lm->Lmd.size() != 0) {

            InA->setcoup(lm, jr->getcoup(), l);
            Sleep(1000);
            setbutton(InA->getcoup(), false);
            supprimer(InA->getcoup());
            label5->Text = "IA a joué:" + Convert::ToString(InA->getcoup());
            lm->multdiv(InA->getcoup(), l);
            if (lm->Lmd.empty() == true) {

                label4->Text = L"GAME OVER !";
                label5->Text = L"IA WIN";
                timer1->Enabled = false;

               System::Media::SoundPlayer^ simpleSound2 = gcnew
               System::Media::SoundPlayer();
               simpleSound2->SoundLocation = "Sad_Trombone-Joe_Lamb-665429450.wav";
               simpleSound2->Load();
               simpleSound2->Play();

            }

        }
        else {

            System::Media::SoundPlayer^ simpleSound = gcnew
                System::Media::SoundPlayer();
            simpleSound->SoundLocation = "Ta Da-SoundBible.com-1884170640.wav";
            simpleSound->Load();
            simpleSound->Play();
            label4->Text = "Game Over";
            label5->Text = label1->Text + " WIN";
            timer1->Enabled = false;


        }


    }
private: System::Void button91_Click(System::Object^ sender, System::EventArgs^ e) {
    play(91);

}
private: System::Void button92_Click(System::Object^ sender, System::EventArgs^ e) {
    play(92);
}
private: System::Void button93_Click(System::Object^ sender, System::EventArgs^ e) {
    play(93);
}
private: System::Void button94_Click(System::Object^ sender, System::EventArgs^ e) {
    play(94);
}
private: System::Void button95_Click(System::Object^ sender, System::EventArgs^ e) {
    play(95);
}
private: System::Void button96_Click(System::Object^ sender, System::EventArgs^ e) {
    play(96);
}
private: System::Void button97_Click(System::Object^ sender, System::EventArgs^ e) {
    play(97);
}
private: System::Void button98_Click(System::Object^ sender, System::EventArgs^ e) {
    play(98);
}
private: System::Void button99_Click(System::Object^ sender, System::EventArgs^ e) {
    play(99);
}
private: System::Void button100_Click(System::Object^ sender, System::EventArgs^ e) {
    play(100);
}
private: System::Void button81_Click(System::Object^ sender, System::EventArgs^ e) {
    play(81);
}
private: System::Void button82_Click(System::Object^ sender, System::EventArgs^ e) {
    play(82);
}
private: System::Void button83_Click(System::Object^ sender, System::EventArgs^ e) {
    play(83);
}
private: System::Void button84_Click(System::Object^ sender, System::EventArgs^ e) {
    play(84);
}
private: System::Void button85_Click(System::Object^ sender, System::EventArgs^ e) {
    play(85);
}
private: System::Void button86_Click(System::Object^ sender, System::EventArgs^ e) {
    play(86);
}
private: System::Void button87_Click(System::Object^ sender, System::EventArgs^ e) {
    play(87);
}
private: System::Void button88_Click(System::Object^ sender, System::EventArgs^ e) {
    play(88);
}
private: System::Void button89_Click(System::Object^ sender, System::EventArgs^ e) {
    play(89);
}
private: System::Void button90_Click(System::Object^ sender, System::EventArgs^ e) {
    play(90);
}
private: System::Void button71_Click(System::Object^ sender, System::EventArgs^ e) {
    play(71);
}
private: System::Void button72_Click(System::Object^ sender, System::EventArgs^ e) {
    play(72);
}
private: System::Void button73_Click(System::Object^ sender, System::EventArgs^ e) {
    play(73);
}
private: System::Void button74_Click(System::Object^ sender, System::EventArgs^ e) {
    play(74);
}
private: System::Void button75_Click(System::Object^ sender, System::EventArgs^ e) {
    play(75);
}
private: System::Void button76_Click(System::Object^ sender, System::EventArgs^ e) {
    play(76);
}
private: System::Void button77_Click(System::Object^ sender, System::EventArgs^ e) {
    play(77);
}
private: System::Void button78_Click(System::Object^ sender, System::EventArgs^ e) {
    play(78);
}
private: System::Void button79_Click(System::Object^ sender, System::EventArgs^ e) {
    play(79);
}
private: System::Void button80_Click(System::Object^ sender, System::EventArgs^ e) {
    play(80);
}
private: System::Void button61_Click(System::Object^ sender, System::EventArgs^ e) {
    play(61);
}
private: System::Void button62_Click(System::Object^ sender, System::EventArgs^ e) {
    play(62);
}
private: System::Void button63_Click(System::Object^ sender, System::EventArgs^ e) {
    play(63);
}
private: System::Void button64_Click(System::Object^ sender, System::EventArgs^ e) {
    play(64);
}
private: System::Void button65_Click(System::Object^ sender, System::EventArgs^ e) {
    play(65);
}
private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
    play(66);
}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
    play(67);
}
private: System::Void button68_Click(System::Object^ sender, System::EventArgs^ e) {
    play(68);
}
private: System::Void button69_Click(System::Object^ sender, System::EventArgs^ e) {
    play(69);
}
private: System::Void button70_Click(System::Object^ sender, System::EventArgs^ e) {
    play(70);
}
private: System::Void button51_Click(System::Object^ sender, System::EventArgs^ e) {
    play(51);
}
private: System::Void button52_Click(System::Object^ sender, System::EventArgs^ e) {
    play(52);
}
private: System::Void button53_Click(System::Object^ sender, System::EventArgs^ e) {
    play(53);
}
private: System::Void button54_Click(System::Object^ sender, System::EventArgs^ e) {
    play(54);
}
private: System::Void button55_Click(System::Object^ sender, System::EventArgs^ e) {
    play(55);
}
private: System::Void button56_Click(System::Object^ sender, System::EventArgs^ e) {
    play(56);
}
private: System::Void button57_Click(System::Object^ sender, System::EventArgs^ e) {
    play(57);
}
private: System::Void button58_Click(System::Object^ sender, System::EventArgs^ e) {
    play(58);
}
private: System::Void button59_Click(System::Object^ sender, System::EventArgs^ e) {
    play(59);
}
private: System::Void button60_Click(System::Object^ sender, System::EventArgs^ e) {
    play(60);
}
private: System::Void button41_Click(System::Object^ sender, System::EventArgs^ e) {
    play(41);
}
private: System::Void button42_Click(System::Object^ sender, System::EventArgs^ e) {
    play(42);
}
private: System::Void button43_Click(System::Object^ sender, System::EventArgs^ e) {
    play(43);
}
private: System::Void button44_Click(System::Object^ sender, System::EventArgs^ e) {
    play(44);
}
private: System::Void button45_Click(System::Object^ sender, System::EventArgs^ e) {
    play(45);
}
private: System::Void button46_Click(System::Object^ sender, System::EventArgs^ e) {
    play(46);
}
private: System::Void button47_Click(System::Object^ sender, System::EventArgs^ e) {
    play(47);
}
private: System::Void button48_Click(System::Object^ sender, System::EventArgs^ e) {
    play(48);
}
private: System::Void button49_Click(System::Object^ sender, System::EventArgs^ e) {
    play(49);
}
private: System::Void button50_Click(System::Object^ sender, System::EventArgs^ e) {
    play(50);
}
private: System::Void button31_Click(System::Object^ sender, System::EventArgs^ e) {
    play(31);
}
private: System::Void button32_Click(System::Object^ sender, System::EventArgs^ e) {
    play(32);
}
private: System::Void button33_Click(System::Object^ sender, System::EventArgs^ e) {
    play(33);
}
private: System::Void button34_Click(System::Object^ sender, System::EventArgs^ e) {
    play(34);
}
private: System::Void button35_Click(System::Object^ sender, System::EventArgs^ e) {
    play(35);
}
private: System::Void button36_Click(System::Object^ sender, System::EventArgs^ e) {
    play(36);
}
private: System::Void button37_Click(System::Object^ sender, System::EventArgs^ e) {
    play(37);
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) {
    play(38);
}
private: System::Void button39_Click(System::Object^ sender, System::EventArgs^ e) {
    play(39);
}
private: System::Void button40_Click(System::Object^ sender, System::EventArgs^ e) {
    play(40);
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
    play(21);
}
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e) {
    play(22);
}
private: System::Void button23_Click(System::Object^ sender, System::EventArgs^ e) {
    play(23);
}
private: System::Void button24_Click(System::Object^ sender, System::EventArgs^ e) {
    play(24);
}
private: System::Void button25_Click(System::Object^ sender, System::EventArgs^ e) {
    play(25);
}
private: System::Void button26_Click(System::Object^ sender, System::EventArgs^ e) {
    play(26);
}
private: System::Void button27_Click(System::Object^ sender, System::EventArgs^ e) {
    play(27);
}
private: System::Void button28_Click(System::Object^ sender, System::EventArgs^ e) {
    play(28);
}
private: System::Void button29_Click(System::Object^ sender, System::EventArgs^ e) {
    play(29);
}
private: System::Void button30_Click(System::Object^ sender, System::EventArgs^ e) {
    play(30);
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
    play(11);
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
    play(12);
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
    play(13);
}
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
    play(14);
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
    play(15);
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
    play(16);
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
    play(17);
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
    play(18);
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
    play(19);
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
    play(20);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    play(10);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    play(9);
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    play(8);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    play(7);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    play(6);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    play(5);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    play(4);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    play(3);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    play(2);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    play(1);
}
private: System::Void button101_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void board10x10_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button102_Click(System::Object^ sender, System::EventArgs^ e) {
   
    timer1->Enabled = true;
    sec = 0;
    min = 0;


    this->setlist();
    this->button102->Enabled = false;
    for (int i = 1; i <= 100; i++)
    {
        setbutton(i, true);
    }
    if (InA->d->getLevel() == 4) {
        InA->setcoup(lm, jr->getcoup(), l);
        Sleep(1000);
        setbutton(InA->getcoup(), false);
        supprimer(InA->getcoup());
        label5->Text = "IA a joué:" + Convert::ToString(InA->getcoup());
        lm->multdiv(InA->getcoup(), l);

    }

}
       int sec = 0;
       int min = 0;
       String^ seconde;
       String^ minute;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
    sec++;
    if (sec == 60) {
        min++;
        sec = 0;

    }
    if (min == 60) {
        min = 0;
        sec = 0;
    }
    seconde = Convert::ToString(sec);
    minute = Convert::ToString(min);
    if (sec < 10 && min < 10)
        label3->Text = "0" + minute + ":0" + seconde;
    if (sec < 10 && min >= 10)
        label3->Text = minute + ":0" + seconde;
    if (sec >= 10 && min < 10)
        label3->Text = "0" + minute + ":" + seconde;
    if (sec >= 10 && min >= 10)
        label3->Text = minute + ":" + seconde;
}


private: System::Void button103_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Restart();
}
};
}
