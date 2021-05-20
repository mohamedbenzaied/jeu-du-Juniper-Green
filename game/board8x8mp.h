#pragma once
#include <cliext\algorithm>
#include <cliext\iterator>
#include <cliext\vector>
#include <windows.h>
#include <string>
#include <vcclr.h>
#include  <random>
#include "liste.h"
#include "joueur.h"
namespace game {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for board8x8mp
	/// </summary>
	public ref class board8x8mp : public System::Windows::Forms::Form
	{
	public:
		board8x8mp(void)
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
		~board8x8mp()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Label^ label5;
    protected:
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ button66;
    private: System::Windows::Forms::Button^ button65;

    private: System::Windows::Forms::Label^ label1;



























    private: System::Windows::Forms::Timer^ timer1;





































    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Button^ button6;
    private: System::Windows::Forms::Button^ button5;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ button48;
private: System::Windows::Forms::Button^ button47;
private: System::Windows::Forms::Button^ button46;
private: System::Windows::Forms::Button^ button45;
private: System::Windows::Forms::Button^ button44;
private: System::Windows::Forms::Button^ button43;
private: System::Windows::Forms::Button^ button42;
private: System::Windows::Forms::Button^ button41;
private: System::Windows::Forms::Button^ button40;
private: System::Windows::Forms::Button^ button39;
private: System::Windows::Forms::Button^ button38;
private: System::Windows::Forms::Button^ button37;
private: System::Windows::Forms::Button^ button36;
private: System::Windows::Forms::Button^ button35;
private: System::Windows::Forms::Button^ button34;
private: System::Windows::Forms::Button^ button33;
private: System::Windows::Forms::Button^ button32;
private: System::Windows::Forms::Button^ button31;
private: System::Windows::Forms::Button^ button30;
private: System::Windows::Forms::Button^ button29;
private: System::Windows::Forms::Button^ button28;
private: System::Windows::Forms::Button^ button27;
private: System::Windows::Forms::Button^ button26;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button19;
private: System::Windows::Forms::Button^ button18;
private: System::Windows::Forms::Button^ button17;
private: System::Windows::Forms::Button^ button16;
private: System::Windows::Forms::Button^ button15;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button64;
private: System::Windows::Forms::Button^ button63;
private: System::Windows::Forms::Button^ button62;
private: System::Windows::Forms::Button^ button61;
private: System::Windows::Forms::Button^ button60;
private: System::Windows::Forms::Button^ button59;
private: System::Windows::Forms::Button^ button58;
private: System::Windows::Forms::Button^ button57;
private: System::Windows::Forms::Button^ button56;
private: System::Windows::Forms::Button^ button55;
private: System::Windows::Forms::Button^ button54;
private: System::Windows::Forms::Button^ button53;
private: System::Windows::Forms::Button^ button52;
private: System::Windows::Forms::Button^ button51;
private: System::Windows::Forms::Button^ button50;
private: System::Windows::Forms::Button^ button49;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::Panel^ panel6;


private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Panel^ panel5;
private: System::Windows::Forms::Panel^ panel4;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ button67;



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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(board8x8mp::typeid));
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->button66 = (gcnew System::Windows::Forms::Button());
            this->button65 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->button64 = (gcnew System::Windows::Forms::Button());
            this->button63 = (gcnew System::Windows::Forms::Button());
            this->button62 = (gcnew System::Windows::Forms::Button());
            this->button61 = (gcnew System::Windows::Forms::Button());
            this->button60 = (gcnew System::Windows::Forms::Button());
            this->button59 = (gcnew System::Windows::Forms::Button());
            this->button58 = (gcnew System::Windows::Forms::Button());
            this->button57 = (gcnew System::Windows::Forms::Button());
            this->button56 = (gcnew System::Windows::Forms::Button());
            this->button55 = (gcnew System::Windows::Forms::Button());
            this->button54 = (gcnew System::Windows::Forms::Button());
            this->button53 = (gcnew System::Windows::Forms::Button());
            this->button52 = (gcnew System::Windows::Forms::Button());
            this->button51 = (gcnew System::Windows::Forms::Button());
            this->button50 = (gcnew System::Windows::Forms::Button());
            this->button49 = (gcnew System::Windows::Forms::Button());
            this->button48 = (gcnew System::Windows::Forms::Button());
            this->button47 = (gcnew System::Windows::Forms::Button());
            this->button46 = (gcnew System::Windows::Forms::Button());
            this->button45 = (gcnew System::Windows::Forms::Button());
            this->button44 = (gcnew System::Windows::Forms::Button());
            this->button43 = (gcnew System::Windows::Forms::Button());
            this->button42 = (gcnew System::Windows::Forms::Button());
            this->button41 = (gcnew System::Windows::Forms::Button());
            this->button40 = (gcnew System::Windows::Forms::Button());
            this->button39 = (gcnew System::Windows::Forms::Button());
            this->button38 = (gcnew System::Windows::Forms::Button());
            this->button37 = (gcnew System::Windows::Forms::Button());
            this->button36 = (gcnew System::Windows::Forms::Button());
            this->button35 = (gcnew System::Windows::Forms::Button());
            this->button34 = (gcnew System::Windows::Forms::Button());
            this->button33 = (gcnew System::Windows::Forms::Button());
            this->button32 = (gcnew System::Windows::Forms::Button());
            this->button31 = (gcnew System::Windows::Forms::Button());
            this->button30 = (gcnew System::Windows::Forms::Button());
            this->button29 = (gcnew System::Windows::Forms::Button());
            this->button28 = (gcnew System::Windows::Forms::Button());
            this->button27 = (gcnew System::Windows::Forms::Button());
            this->button26 = (gcnew System::Windows::Forms::Button());
            this->button25 = (gcnew System::Windows::Forms::Button());
            this->button24 = (gcnew System::Windows::Forms::Button());
            this->button23 = (gcnew System::Windows::Forms::Button());
            this->button22 = (gcnew System::Windows::Forms::Button());
            this->button21 = (gcnew System::Windows::Forms::Button());
            this->button20 = (gcnew System::Windows::Forms::Button());
            this->button19 = (gcnew System::Windows::Forms::Button());
            this->button18 = (gcnew System::Windows::Forms::Button());
            this->button17 = (gcnew System::Windows::Forms::Button());
            this->button16 = (gcnew System::Windows::Forms::Button());
            this->button15 = (gcnew System::Windows::Forms::Button());
            this->button14 = (gcnew System::Windows::Forms::Button());
            this->button13 = (gcnew System::Windows::Forms::Button());
            this->button12 = (gcnew System::Windows::Forms::Button());
            this->button11 = (gcnew System::Windows::Forms::Button());
            this->button10 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->button5 = (gcnew System::Windows::Forms::Button());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->button67 = (gcnew System::Windows::Forms::Button());
            this->panel1->SuspendLayout();
            this->panel5->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel2->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label5->ForeColor = System::Drawing::Color::Azure;
            this->label5->Location = System::Drawing::Point(144, 15);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 36);
            this->label5->TabIndex = 141;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label4->ForeColor = System::Drawing::Color::Navy;
            this->label4->Location = System::Drawing::Point(147, 56);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 36);
            this->label4->TabIndex = 140;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Digital-7 Mono", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label3->ForeColor = System::Drawing::Color::Navy;
            this->label3->Location = System::Drawing::Point(36, 27);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(137, 49);
            this->label3->TabIndex = 139;
            this->label3->Text = L"00:00";
            // 
            // button66
            // 
            this->button66->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button66->FlatAppearance->BorderSize = 0;
            this->button66->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button66->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button66->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button66->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button66->ForeColor = System::Drawing::Color::SteelBlue;
            this->button66->Location = System::Drawing::Point(39, 25);
            this->button66->Name = L"button66";
            this->button66->Size = System::Drawing::Size(100, 44);
            this->button66->TabIndex = 138;
            this->button66->Text = L"start";
            this->button66->UseVisualStyleBackColor = true;
            this->button66->Click += gcnew System::EventHandler(this, &board8x8mp::button66_Click);
            // 
            // button65
            // 
            this->button65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->button65->BackColor = System::Drawing::Color::Transparent;
            this->button65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button65.BackgroundImage")));
            this->button65->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button65->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button65->FlatAppearance->BorderSize = 0;
            this->button65->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button65->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button65->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button65->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button65->ForeColor = System::Drawing::Color::Black;
            this->button65->Location = System::Drawing::Point(1141, 753);
            this->button65->Name = L"button65";
            this->button65->Size = System::Drawing::Size(57, 63);
            this->button65->TabIndex = 137;
            this->button65->UseVisualStyleBackColor = false;
            this->button65->Click += gcnew System::EventHandler(this, &board8x8mp::button65_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::SteelBlue;
            this->label1->Location = System::Drawing::Point(40, 27);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(124, 41);
            this->label1->TabIndex = 135;
            this->label1->Text = L"player 1";
            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &board8x8mp::timer1_Tick);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::White;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->Location = System::Drawing::Point(118, 118);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(0, 17);
            this->label6->TabIndex = 142;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::White;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->Location = System::Drawing::Point(1071, 117);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(0, 17);
            this->label7->TabIndex = 143;
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->Controls->Add(this->panel5);
            this->panel1->Controls->Add(this->button64);
            this->panel1->Controls->Add(this->button63);
            this->panel1->Controls->Add(this->button62);
            this->panel1->Controls->Add(this->button61);
            this->panel1->Controls->Add(this->button60);
            this->panel1->Controls->Add(this->button59);
            this->panel1->Controls->Add(this->button58);
            this->panel1->Controls->Add(this->button57);
            this->panel1->Controls->Add(this->button56);
            this->panel1->Controls->Add(this->button55);
            this->panel1->Controls->Add(this->button54);
            this->panel1->Controls->Add(this->button53);
            this->panel1->Controls->Add(this->button52);
            this->panel1->Controls->Add(this->button51);
            this->panel1->Controls->Add(this->button50);
            this->panel1->Controls->Add(this->button49);
            this->panel1->Controls->Add(this->button48);
            this->panel1->Controls->Add(this->button47);
            this->panel1->Controls->Add(this->button46);
            this->panel1->Controls->Add(this->button45);
            this->panel1->Controls->Add(this->button44);
            this->panel1->Controls->Add(this->button43);
            this->panel1->Controls->Add(this->button42);
            this->panel1->Controls->Add(this->button41);
            this->panel1->Controls->Add(this->button40);
            this->panel1->Controls->Add(this->button39);
            this->panel1->Controls->Add(this->button38);
            this->panel1->Controls->Add(this->button37);
            this->panel1->Controls->Add(this->button36);
            this->panel1->Controls->Add(this->button35);
            this->panel1->Controls->Add(this->button34);
            this->panel1->Controls->Add(this->button33);
            this->panel1->Controls->Add(this->button32);
            this->panel1->Controls->Add(this->button31);
            this->panel1->Controls->Add(this->button30);
            this->panel1->Controls->Add(this->button29);
            this->panel1->Controls->Add(this->button28);
            this->panel1->Controls->Add(this->button27);
            this->panel1->Controls->Add(this->button26);
            this->panel1->Controls->Add(this->button25);
            this->panel1->Controls->Add(this->button24);
            this->panel1->Controls->Add(this->button23);
            this->panel1->Controls->Add(this->button22);
            this->panel1->Controls->Add(this->button21);
            this->panel1->Controls->Add(this->button20);
            this->panel1->Controls->Add(this->button19);
            this->panel1->Controls->Add(this->button18);
            this->panel1->Controls->Add(this->button17);
            this->panel1->Controls->Add(this->button16);
            this->panel1->Controls->Add(this->button15);
            this->panel1->Controls->Add(this->button14);
            this->panel1->Controls->Add(this->button13);
            this->panel1->Controls->Add(this->button12);
            this->panel1->Controls->Add(this->button11);
            this->panel1->Controls->Add(this->button10);
            this->panel1->Controls->Add(this->button9);
            this->panel1->Controls->Add(this->button8);
            this->panel1->Controls->Add(this->button7);
            this->panel1->Controls->Add(this->button6);
            this->panel1->Controls->Add(this->button5);
            this->panel1->Controls->Add(this->button4);
            this->panel1->Controls->Add(this->button3);
            this->panel1->Controls->Add(this->button2);
            this->panel1->Controls->Add(this->button1);
            this->panel1->Location = System::Drawing::Point(260, 5);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(705, 694);
            this->panel1->TabIndex = 144;
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::Transparent;
            this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
            this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel5->Controls->Add(this->label3);
            this->panel5->Location = System::Drawing::Point(248, 0);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(209, 103);
            this->panel5->TabIndex = 150;
            // 
            // button64
            // 
            this->button64->Enabled = false;
            this->button64->FlatAppearance->BorderSize = 0;
            this->button64->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button64->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button64->Location = System::Drawing::Point(513, 524);
            this->button64->Name = L"button64";
            this->button64->Size = System::Drawing::Size(60, 60);
            this->button64->TabIndex = 160;
            this->button64->Text = L"64";
            this->button64->UseVisualStyleBackColor = true;
            this->button64->Click += gcnew System::EventHandler(this, &board8x8mp::button64_Click);
            // 
            // button63
            // 
            this->button63->Enabled = false;
            this->button63->FlatAppearance->BorderSize = 0;
            this->button63->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button63->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button63->Location = System::Drawing::Point(454, 524);
            this->button63->Name = L"button63";
            this->button63->Size = System::Drawing::Size(60, 60);
            this->button63->TabIndex = 159;
            this->button63->Text = L"63";
            this->button63->UseVisualStyleBackColor = true;
            this->button63->Click += gcnew System::EventHandler(this, &board8x8mp::button63_Click);
            // 
            // button62
            // 
            this->button62->Enabled = false;
            this->button62->FlatAppearance->BorderSize = 0;
            this->button62->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button62->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button62->Location = System::Drawing::Point(395, 524);
            this->button62->Name = L"button62";
            this->button62->Size = System::Drawing::Size(60, 60);
            this->button62->TabIndex = 158;
            this->button62->Text = L"62";
            this->button62->UseVisualStyleBackColor = true;
            this->button62->Click += gcnew System::EventHandler(this, &board8x8mp::button62_Click);
            // 
            // button61
            // 
            this->button61->Enabled = false;
            this->button61->FlatAppearance->BorderSize = 0;
            this->button61->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button61->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button61->Location = System::Drawing::Point(336, 524);
            this->button61->Name = L"button61";
            this->button61->Size = System::Drawing::Size(60, 60);
            this->button61->TabIndex = 157;
            this->button61->Text = L"61";
            this->button61->UseVisualStyleBackColor = true;
            this->button61->Click += gcnew System::EventHandler(this, &board8x8mp::button61_Click);
            // 
            // button60
            // 
            this->button60->Enabled = false;
            this->button60->FlatAppearance->BorderSize = 0;
            this->button60->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button60->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button60->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button60->Location = System::Drawing::Point(277, 524);
            this->button60->Name = L"button60";
            this->button60->Size = System::Drawing::Size(60, 60);
            this->button60->TabIndex = 156;
            this->button60->Text = L"60";
            this->button60->UseVisualStyleBackColor = true;
            this->button60->Click += gcnew System::EventHandler(this, &board8x8mp::button60_Click);
            // 
            // button59
            // 
            this->button59->Enabled = false;
            this->button59->FlatAppearance->BorderSize = 0;
            this->button59->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button59->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button59->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button59->Location = System::Drawing::Point(218, 524);
            this->button59->Name = L"button59";
            this->button59->Size = System::Drawing::Size(60, 60);
            this->button59->TabIndex = 155;
            this->button59->Text = L"59";
            this->button59->UseVisualStyleBackColor = true;
            this->button59->Click += gcnew System::EventHandler(this, &board8x8mp::button59_Click);
            // 
            // button58
            // 
            this->button58->Enabled = false;
            this->button58->FlatAppearance->BorderSize = 0;
            this->button58->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button58->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button58->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button58->Location = System::Drawing::Point(159, 524);
            this->button58->Name = L"button58";
            this->button58->Size = System::Drawing::Size(60, 60);
            this->button58->TabIndex = 154;
            this->button58->Text = L"58";
            this->button58->UseVisualStyleBackColor = true;
            this->button58->Click += gcnew System::EventHandler(this, &board8x8mp::button58_Click);
            // 
            // button57
            // 
            this->button57->Enabled = false;
            this->button57->FlatAppearance->BorderSize = 0;
            this->button57->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button57->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button57->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button57->Location = System::Drawing::Point(100, 524);
            this->button57->Name = L"button57";
            this->button57->Size = System::Drawing::Size(60, 60);
            this->button57->TabIndex = 153;
            this->button57->Text = L"57";
            this->button57->UseVisualStyleBackColor = true;
            this->button57->Click += gcnew System::EventHandler(this, &board8x8mp::button57_Click);
            // 
            // button56
            // 
            this->button56->Enabled = false;
            this->button56->FlatAppearance->BorderSize = 0;
            this->button56->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button56->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button56->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button56->Location = System::Drawing::Point(513, 466);
            this->button56->Name = L"button56";
            this->button56->Size = System::Drawing::Size(60, 60);
            this->button56->TabIndex = 152;
            this->button56->Text = L"56";
            this->button56->UseVisualStyleBackColor = true;
            this->button56->Click += gcnew System::EventHandler(this, &board8x8mp::button56_Click);
            // 
            // button55
            // 
            this->button55->Enabled = false;
            this->button55->FlatAppearance->BorderSize = 0;
            this->button55->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button55->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button55->Location = System::Drawing::Point(454, 466);
            this->button55->Name = L"button55";
            this->button55->Size = System::Drawing::Size(60, 60);
            this->button55->TabIndex = 151;
            this->button55->Text = L"55";
            this->button55->UseVisualStyleBackColor = true;
            this->button55->Click += gcnew System::EventHandler(this, &board8x8mp::button55_Click);
            // 
            // button54
            // 
            this->button54->Enabled = false;
            this->button54->FlatAppearance->BorderSize = 0;
            this->button54->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button54->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button54->Location = System::Drawing::Point(395, 466);
            this->button54->Name = L"button54";
            this->button54->Size = System::Drawing::Size(60, 60);
            this->button54->TabIndex = 150;
            this->button54->Text = L"54";
            this->button54->UseVisualStyleBackColor = true;
            this->button54->Click += gcnew System::EventHandler(this, &board8x8mp::button54_Click);
            // 
            // button53
            // 
            this->button53->Enabled = false;
            this->button53->FlatAppearance->BorderSize = 0;
            this->button53->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button53->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button53->Location = System::Drawing::Point(336, 466);
            this->button53->Name = L"button53";
            this->button53->Size = System::Drawing::Size(60, 60);
            this->button53->TabIndex = 149;
            this->button53->Text = L"53";
            this->button53->UseVisualStyleBackColor = true;
            this->button53->Click += gcnew System::EventHandler(this, &board8x8mp::button53_Click);
            // 
            // button52
            // 
            this->button52->Enabled = false;
            this->button52->FlatAppearance->BorderSize = 0;
            this->button52->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button52->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button52->Location = System::Drawing::Point(277, 466);
            this->button52->Name = L"button52";
            this->button52->Size = System::Drawing::Size(60, 60);
            this->button52->TabIndex = 148;
            this->button52->Text = L"52";
            this->button52->UseVisualStyleBackColor = true;
            this->button52->Click += gcnew System::EventHandler(this, &board8x8mp::button52_Click);
            // 
            // button51
            // 
            this->button51->Enabled = false;
            this->button51->FlatAppearance->BorderSize = 0;
            this->button51->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button51->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button51->Location = System::Drawing::Point(218, 466);
            this->button51->Name = L"button51";
            this->button51->Size = System::Drawing::Size(60, 60);
            this->button51->TabIndex = 147;
            this->button51->Text = L"51";
            this->button51->UseVisualStyleBackColor = true;
            this->button51->Click += gcnew System::EventHandler(this, &board8x8mp::button51_Click);
            // 
            // button50
            // 
            this->button50->Enabled = false;
            this->button50->FlatAppearance->BorderSize = 0;
            this->button50->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button50->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button50->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button50->Location = System::Drawing::Point(159, 466);
            this->button50->Name = L"button50";
            this->button50->Size = System::Drawing::Size(60, 60);
            this->button50->TabIndex = 146;
            this->button50->Text = L"50";
            this->button50->UseVisualStyleBackColor = true;
            this->button50->Click += gcnew System::EventHandler(this, &board8x8mp::button50_Click);
            // 
            // button49
            // 
            this->button49->Enabled = false;
            this->button49->FlatAppearance->BorderSize = 0;
            this->button49->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button49->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button49->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button49->Location = System::Drawing::Point(100, 466);
            this->button49->Name = L"button49";
            this->button49->Size = System::Drawing::Size(60, 60);
            this->button49->TabIndex = 145;
            this->button49->Text = L"49";
            this->button49->UseVisualStyleBackColor = true;
            this->button49->Click += gcnew System::EventHandler(this, &board8x8mp::button49_Click);
            // 
            // button48
            // 
            this->button48->Enabled = false;
            this->button48->FlatAppearance->BorderSize = 0;
            this->button48->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button48->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button48->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button48->Location = System::Drawing::Point(513, 407);
            this->button48->Name = L"button48";
            this->button48->Size = System::Drawing::Size(60, 60);
            this->button48->TabIndex = 47;
            this->button48->Text = L"48";
            this->button48->UseVisualStyleBackColor = true;
            // 
            // button47
            // 
            this->button47->Enabled = false;
            this->button47->FlatAppearance->BorderSize = 0;
            this->button47->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button47->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button47->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button47->Location = System::Drawing::Point(454, 407);
            this->button47->Name = L"button47";
            this->button47->Size = System::Drawing::Size(60, 60);
            this->button47->TabIndex = 46;
            this->button47->Text = L"47";
            this->button47->UseVisualStyleBackColor = true;
            this->button47->Click += gcnew System::EventHandler(this, &board8x8mp::button47_Click);
            // 
            // button46
            // 
            this->button46->Enabled = false;
            this->button46->FlatAppearance->BorderSize = 0;
            this->button46->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button46->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button46->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button46->Location = System::Drawing::Point(395, 407);
            this->button46->Name = L"button46";
            this->button46->Size = System::Drawing::Size(60, 60);
            this->button46->TabIndex = 45;
            this->button46->Text = L"46";
            this->button46->UseVisualStyleBackColor = true;
            this->button46->Click += gcnew System::EventHandler(this, &board8x8mp::button46_Click);
            // 
            // button45
            // 
            this->button45->Enabled = false;
            this->button45->FlatAppearance->BorderSize = 0;
            this->button45->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button45->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button45->Location = System::Drawing::Point(336, 407);
            this->button45->Name = L"button45";
            this->button45->Size = System::Drawing::Size(60, 60);
            this->button45->TabIndex = 44;
            this->button45->Text = L"45";
            this->button45->UseVisualStyleBackColor = true;
            this->button45->Click += gcnew System::EventHandler(this, &board8x8mp::button45_Click);
            // 
            // button44
            // 
            this->button44->Enabled = false;
            this->button44->FlatAppearance->BorderSize = 0;
            this->button44->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button44->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button44->Location = System::Drawing::Point(277, 407);
            this->button44->Name = L"button44";
            this->button44->Size = System::Drawing::Size(60, 60);
            this->button44->TabIndex = 43;
            this->button44->Text = L"44";
            this->button44->UseVisualStyleBackColor = true;
            this->button44->Click += gcnew System::EventHandler(this, &board8x8mp::button44_Click);
            // 
            // button43
            // 
            this->button43->Enabled = false;
            this->button43->FlatAppearance->BorderSize = 0;
            this->button43->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button43->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button43->Location = System::Drawing::Point(218, 407);
            this->button43->Name = L"button43";
            this->button43->Size = System::Drawing::Size(60, 60);
            this->button43->TabIndex = 42;
            this->button43->Text = L"43";
            this->button43->UseVisualStyleBackColor = true;
            this->button43->Click += gcnew System::EventHandler(this, &board8x8mp::button43_Click);
            // 
            // button42
            // 
            this->button42->Enabled = false;
            this->button42->FlatAppearance->BorderSize = 0;
            this->button42->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button42->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button42->Location = System::Drawing::Point(159, 407);
            this->button42->Name = L"button42";
            this->button42->Size = System::Drawing::Size(60, 60);
            this->button42->TabIndex = 41;
            this->button42->Text = L"42";
            this->button42->UseVisualStyleBackColor = true;
            this->button42->Click += gcnew System::EventHandler(this, &board8x8mp::button42_Click);
            // 
            // button41
            // 
            this->button41->Enabled = false;
            this->button41->FlatAppearance->BorderSize = 0;
            this->button41->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button41->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button41->Location = System::Drawing::Point(100, 407);
            this->button41->Name = L"button41";
            this->button41->Size = System::Drawing::Size(60, 60);
            this->button41->TabIndex = 40;
            this->button41->Text = L"41";
            this->button41->UseVisualStyleBackColor = true;
            this->button41->Click += gcnew System::EventHandler(this, &board8x8mp::button41_Click);
            // 
            // button40
            // 
            this->button40->Enabled = false;
            this->button40->FlatAppearance->BorderSize = 0;
            this->button40->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button40->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button40->Location = System::Drawing::Point(513, 348);
            this->button40->Name = L"button40";
            this->button40->Size = System::Drawing::Size(60, 60);
            this->button40->TabIndex = 39;
            this->button40->Text = L"40";
            this->button40->UseVisualStyleBackColor = true;
            this->button40->Click += gcnew System::EventHandler(this, &board8x8mp::button40_Click);
            // 
            // button39
            // 
            this->button39->Enabled = false;
            this->button39->FlatAppearance->BorderSize = 0;
            this->button39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button39->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button39->Location = System::Drawing::Point(454, 348);
            this->button39->Name = L"button39";
            this->button39->Size = System::Drawing::Size(60, 60);
            this->button39->TabIndex = 38;
            this->button39->Text = L"39";
            this->button39->UseVisualStyleBackColor = true;
            this->button39->Click += gcnew System::EventHandler(this, &board8x8mp::button39_Click);
            // 
            // button38
            // 
            this->button38->Enabled = false;
            this->button38->FlatAppearance->BorderSize = 0;
            this->button38->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button38->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button38->Location = System::Drawing::Point(395, 348);
            this->button38->Name = L"button38";
            this->button38->Size = System::Drawing::Size(60, 60);
            this->button38->TabIndex = 37;
            this->button38->Text = L"38";
            this->button38->UseVisualStyleBackColor = true;
            this->button38->Click += gcnew System::EventHandler(this, &board8x8mp::button38_Click);
            // 
            // button37
            // 
            this->button37->Enabled = false;
            this->button37->FlatAppearance->BorderSize = 0;
            this->button37->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button37->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button37->Location = System::Drawing::Point(336, 348);
            this->button37->Name = L"button37";
            this->button37->Size = System::Drawing::Size(60, 60);
            this->button37->TabIndex = 36;
            this->button37->Text = L"37";
            this->button37->UseVisualStyleBackColor = true;
            this->button37->Click += gcnew System::EventHandler(this, &board8x8mp::button37_Click);
            // 
            // button36
            // 
            this->button36->Enabled = false;
            this->button36->FlatAppearance->BorderSize = 0;
            this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button36->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button36->Location = System::Drawing::Point(277, 348);
            this->button36->Name = L"button36";
            this->button36->Size = System::Drawing::Size(60, 60);
            this->button36->TabIndex = 35;
            this->button36->Text = L"36";
            this->button36->UseVisualStyleBackColor = true;
            this->button36->Click += gcnew System::EventHandler(this, &board8x8mp::button36_Click);
            // 
            // button35
            // 
            this->button35->Enabled = false;
            this->button35->FlatAppearance->BorderSize = 0;
            this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button35->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button35->Location = System::Drawing::Point(218, 348);
            this->button35->Name = L"button35";
            this->button35->Size = System::Drawing::Size(60, 60);
            this->button35->TabIndex = 34;
            this->button35->Text = L"35";
            this->button35->UseVisualStyleBackColor = true;
            this->button35->Click += gcnew System::EventHandler(this, &board8x8mp::button35_Click);
            // 
            // button34
            // 
            this->button34->Enabled = false;
            this->button34->FlatAppearance->BorderSize = 0;
            this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button34->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button34->Location = System::Drawing::Point(159, 348);
            this->button34->Name = L"button34";
            this->button34->Size = System::Drawing::Size(60, 60);
            this->button34->TabIndex = 33;
            this->button34->Text = L"34";
            this->button34->UseVisualStyleBackColor = true;
            this->button34->Click += gcnew System::EventHandler(this, &board8x8mp::button34_Click);
            // 
            // button33
            // 
            this->button33->Enabled = false;
            this->button33->FlatAppearance->BorderSize = 0;
            this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button33->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button33->Location = System::Drawing::Point(100, 348);
            this->button33->Name = L"button33";
            this->button33->Size = System::Drawing::Size(60, 60);
            this->button33->TabIndex = 32;
            this->button33->Text = L"33";
            this->button33->UseVisualStyleBackColor = true;
            this->button33->Click += gcnew System::EventHandler(this, &board8x8mp::button33_Click);
            // 
            // button32
            // 
            this->button32->Enabled = false;
            this->button32->FlatAppearance->BorderSize = 0;
            this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button32->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button32->Location = System::Drawing::Point(513, 289);
            this->button32->Name = L"button32";
            this->button32->Size = System::Drawing::Size(60, 60);
            this->button32->TabIndex = 31;
            this->button32->Text = L"32";
            this->button32->UseVisualStyleBackColor = true;
            this->button32->Click += gcnew System::EventHandler(this, &board8x8mp::button32_Click);
            // 
            // button31
            // 
            this->button31->Enabled = false;
            this->button31->FlatAppearance->BorderSize = 0;
            this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button31->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button31->Location = System::Drawing::Point(454, 289);
            this->button31->Name = L"button31";
            this->button31->Size = System::Drawing::Size(60, 60);
            this->button31->TabIndex = 30;
            this->button31->Text = L"31";
            this->button31->UseVisualStyleBackColor = true;
            this->button31->Click += gcnew System::EventHandler(this, &board8x8mp::button31_Click);
            // 
            // button30
            // 
            this->button30->Enabled = false;
            this->button30->FlatAppearance->BorderSize = 0;
            this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button30->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button30->Location = System::Drawing::Point(395, 289);
            this->button30->Name = L"button30";
            this->button30->Size = System::Drawing::Size(60, 60);
            this->button30->TabIndex = 29;
            this->button30->Text = L"30";
            this->button30->UseVisualStyleBackColor = true;
            this->button30->Click += gcnew System::EventHandler(this, &board8x8mp::button30_Click);
            // 
            // button29
            // 
            this->button29->Enabled = false;
            this->button29->FlatAppearance->BorderSize = 0;
            this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button29->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button29->Location = System::Drawing::Point(336, 289);
            this->button29->Name = L"button29";
            this->button29->Size = System::Drawing::Size(60, 60);
            this->button29->TabIndex = 28;
            this->button29->Text = L"29";
            this->button29->UseVisualStyleBackColor = true;
            this->button29->Click += gcnew System::EventHandler(this, &board8x8mp::button29_Click);
            // 
            // button28
            // 
            this->button28->Enabled = false;
            this->button28->FlatAppearance->BorderSize = 0;
            this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button28->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button28->Location = System::Drawing::Point(277, 289);
            this->button28->Name = L"button28";
            this->button28->Size = System::Drawing::Size(60, 60);
            this->button28->TabIndex = 27;
            this->button28->Text = L"28";
            this->button28->UseVisualStyleBackColor = true;
            this->button28->Click += gcnew System::EventHandler(this, &board8x8mp::button28_Click);
            // 
            // button27
            // 
            this->button27->Enabled = false;
            this->button27->FlatAppearance->BorderSize = 0;
            this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button27->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button27->Location = System::Drawing::Point(218, 289);
            this->button27->Name = L"button27";
            this->button27->Size = System::Drawing::Size(60, 60);
            this->button27->TabIndex = 26;
            this->button27->Text = L"27";
            this->button27->UseVisualStyleBackColor = true;
            this->button27->Click += gcnew System::EventHandler(this, &board8x8mp::button27_Click);
            // 
            // button26
            // 
            this->button26->Enabled = false;
            this->button26->FlatAppearance->BorderSize = 0;
            this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button26->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button26->Location = System::Drawing::Point(159, 289);
            this->button26->Name = L"button26";
            this->button26->Size = System::Drawing::Size(60, 60);
            this->button26->TabIndex = 25;
            this->button26->Text = L"26";
            this->button26->UseVisualStyleBackColor = true;
            this->button26->Click += gcnew System::EventHandler(this, &board8x8mp::button26_Click);
            // 
            // button25
            // 
            this->button25->Enabled = false;
            this->button25->FlatAppearance->BorderSize = 0;
            this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button25->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button25->Location = System::Drawing::Point(100, 289);
            this->button25->Name = L"button25";
            this->button25->Size = System::Drawing::Size(60, 60);
            this->button25->TabIndex = 24;
            this->button25->Text = L"25";
            this->button25->UseVisualStyleBackColor = true;
            this->button25->Click += gcnew System::EventHandler(this, &board8x8mp::button25_Click);
            // 
            // button24
            // 
            this->button24->Enabled = false;
            this->button24->FlatAppearance->BorderSize = 0;
            this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button24->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button24->Location = System::Drawing::Point(513, 230);
            this->button24->Name = L"button24";
            this->button24->Size = System::Drawing::Size(60, 60);
            this->button24->TabIndex = 23;
            this->button24->Text = L"24";
            this->button24->UseVisualStyleBackColor = true;
            this->button24->Click += gcnew System::EventHandler(this, &board8x8mp::button24_Click);
            // 
            // button23
            // 
            this->button23->Enabled = false;
            this->button23->FlatAppearance->BorderSize = 0;
            this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button23->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button23->Location = System::Drawing::Point(454, 230);
            this->button23->Name = L"button23";
            this->button23->Size = System::Drawing::Size(60, 60);
            this->button23->TabIndex = 22;
            this->button23->Text = L"23";
            this->button23->UseVisualStyleBackColor = true;
            this->button23->Click += gcnew System::EventHandler(this, &board8x8mp::button23_Click);
            // 
            // button22
            // 
            this->button22->Enabled = false;
            this->button22->FlatAppearance->BorderSize = 0;
            this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button22->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button22->Location = System::Drawing::Point(395, 230);
            this->button22->Name = L"button22";
            this->button22->Size = System::Drawing::Size(60, 60);
            this->button22->TabIndex = 21;
            this->button22->Text = L"22";
            this->button22->UseVisualStyleBackColor = true;
            this->button22->Click += gcnew System::EventHandler(this, &board8x8mp::button22_Click);
            // 
            // button21
            // 
            this->button21->Enabled = false;
            this->button21->FlatAppearance->BorderSize = 0;
            this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button21->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button21->Location = System::Drawing::Point(336, 230);
            this->button21->Name = L"button21";
            this->button21->Size = System::Drawing::Size(60, 60);
            this->button21->TabIndex = 20;
            this->button21->Text = L"21";
            this->button21->UseVisualStyleBackColor = true;
            this->button21->Click += gcnew System::EventHandler(this, &board8x8mp::button21_Click);
            // 
            // button20
            // 
            this->button20->Enabled = false;
            this->button20->FlatAppearance->BorderSize = 0;
            this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button20->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button20->Location = System::Drawing::Point(277, 230);
            this->button20->Name = L"button20";
            this->button20->Size = System::Drawing::Size(60, 60);
            this->button20->TabIndex = 19;
            this->button20->Text = L"20";
            this->button20->UseVisualStyleBackColor = true;
            this->button20->Click += gcnew System::EventHandler(this, &board8x8mp::button20_Click);
            // 
            // button19
            // 
            this->button19->Enabled = false;
            this->button19->FlatAppearance->BorderSize = 0;
            this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button19->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button19->Location = System::Drawing::Point(218, 230);
            this->button19->Name = L"button19";
            this->button19->Size = System::Drawing::Size(60, 60);
            this->button19->TabIndex = 18;
            this->button19->Text = L"19";
            this->button19->UseVisualStyleBackColor = true;
            this->button19->Click += gcnew System::EventHandler(this, &board8x8mp::button19_Click);
            // 
            // button18
            // 
            this->button18->Enabled = false;
            this->button18->FlatAppearance->BorderSize = 0;
            this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button18->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button18->Location = System::Drawing::Point(159, 230);
            this->button18->Name = L"button18";
            this->button18->Size = System::Drawing::Size(60, 60);
            this->button18->TabIndex = 17;
            this->button18->Text = L"18";
            this->button18->UseVisualStyleBackColor = true;
            this->button18->Click += gcnew System::EventHandler(this, &board8x8mp::button18_Click);
            // 
            // button17
            // 
            this->button17->Enabled = false;
            this->button17->FlatAppearance->BorderSize = 0;
            this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button17->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button17->Location = System::Drawing::Point(100, 230);
            this->button17->Name = L"button17";
            this->button17->Size = System::Drawing::Size(60, 60);
            this->button17->TabIndex = 16;
            this->button17->Text = L"17";
            this->button17->UseVisualStyleBackColor = true;
            this->button17->Click += gcnew System::EventHandler(this, &board8x8mp::button17_Click);
            // 
            // button16
            // 
            this->button16->Enabled = false;
            this->button16->FlatAppearance->BorderSize = 0;
            this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button16->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button16->Location = System::Drawing::Point(513, 171);
            this->button16->Name = L"button16";
            this->button16->Size = System::Drawing::Size(60, 60);
            this->button16->TabIndex = 15;
            this->button16->Text = L"16";
            this->button16->UseVisualStyleBackColor = true;
            this->button16->Click += gcnew System::EventHandler(this, &board8x8mp::button16_Click);
            // 
            // button15
            // 
            this->button15->Enabled = false;
            this->button15->FlatAppearance->BorderSize = 0;
            this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button15->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button15->Location = System::Drawing::Point(454, 171);
            this->button15->Name = L"button15";
            this->button15->Size = System::Drawing::Size(60, 60);
            this->button15->TabIndex = 14;
            this->button15->Text = L"15";
            this->button15->UseVisualStyleBackColor = true;
            this->button15->Click += gcnew System::EventHandler(this, &board8x8mp::button15_Click);
            // 
            // button14
            // 
            this->button14->Enabled = false;
            this->button14->FlatAppearance->BorderSize = 0;
            this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button14->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button14->Location = System::Drawing::Point(395, 171);
            this->button14->Name = L"button14";
            this->button14->Size = System::Drawing::Size(60, 60);
            this->button14->TabIndex = 13;
            this->button14->Text = L"14";
            this->button14->UseVisualStyleBackColor = true;
            this->button14->Click += gcnew System::EventHandler(this, &board8x8mp::button14_Click);
            // 
            // button13
            // 
            this->button13->Enabled = false;
            this->button13->FlatAppearance->BorderSize = 0;
            this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button13->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button13->Location = System::Drawing::Point(336, 171);
            this->button13->Name = L"button13";
            this->button13->Size = System::Drawing::Size(60, 60);
            this->button13->TabIndex = 12;
            this->button13->Text = L"13";
            this->button13->UseVisualStyleBackColor = true;
            this->button13->Click += gcnew System::EventHandler(this, &board8x8mp::button13_Click);
            // 
            // button12
            // 
            this->button12->Enabled = false;
            this->button12->FlatAppearance->BorderSize = 0;
            this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button12->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button12->Location = System::Drawing::Point(277, 171);
            this->button12->Name = L"button12";
            this->button12->Size = System::Drawing::Size(60, 60);
            this->button12->TabIndex = 11;
            this->button12->Text = L"12";
            this->button12->UseVisualStyleBackColor = true;
            this->button12->Click += gcnew System::EventHandler(this, &board8x8mp::button12_Click);
            // 
            // button11
            // 
            this->button11->Enabled = false;
            this->button11->FlatAppearance->BorderSize = 0;
            this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button11->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button11->Location = System::Drawing::Point(218, 171);
            this->button11->Name = L"button11";
            this->button11->Size = System::Drawing::Size(60, 60);
            this->button11->TabIndex = 10;
            this->button11->Text = L"11";
            this->button11->UseVisualStyleBackColor = true;
            this->button11->Click += gcnew System::EventHandler(this, &board8x8mp::button11_Click);
            // 
            // button10
            // 
            this->button10->Enabled = false;
            this->button10->FlatAppearance->BorderSize = 0;
            this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button10->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button10->Location = System::Drawing::Point(159, 171);
            this->button10->Name = L"button10";
            this->button10->Size = System::Drawing::Size(60, 60);
            this->button10->TabIndex = 9;
            this->button10->Text = L"10";
            this->button10->UseVisualStyleBackColor = true;
            this->button10->Click += gcnew System::EventHandler(this, &board8x8mp::button10_Click);
            // 
            // button9
            // 
            this->button9->Enabled = false;
            this->button9->FlatAppearance->BorderSize = 0;
            this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button9->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button9->Location = System::Drawing::Point(100, 171);
            this->button9->Name = L"button9";
            this->button9->Size = System::Drawing::Size(60, 60);
            this->button9->TabIndex = 8;
            this->button9->Text = L"9";
            this->button9->UseVisualStyleBackColor = true;
            this->button9->Click += gcnew System::EventHandler(this, &board8x8mp::button9_Click);
            // 
            // button8
            // 
            this->button8->Enabled = false;
            this->button8->FlatAppearance->BorderSize = 0;
            this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button8->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button8->Location = System::Drawing::Point(513, 112);
            this->button8->Name = L"button8";
            this->button8->Size = System::Drawing::Size(60, 60);
            this->button8->TabIndex = 7;
            this->button8->Text = L"8";
            this->button8->UseVisualStyleBackColor = true;
            this->button8->Click += gcnew System::EventHandler(this, &board8x8mp::button8_Click);
            // 
            // button7
            // 
            this->button7->Enabled = false;
            this->button7->FlatAppearance->BorderSize = 0;
            this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button7->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button7->Location = System::Drawing::Point(454, 112);
            this->button7->Name = L"button7";
            this->button7->Size = System::Drawing::Size(60, 60);
            this->button7->TabIndex = 6;
            this->button7->Text = L"7";
            this->button7->UseVisualStyleBackColor = true;
            this->button7->Click += gcnew System::EventHandler(this, &board8x8mp::button7_Click);
            // 
            // button6
            // 
            this->button6->Enabled = false;
            this->button6->FlatAppearance->BorderSize = 0;
            this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button6->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button6->Location = System::Drawing::Point(395, 112);
            this->button6->Name = L"button6";
            this->button6->Size = System::Drawing::Size(60, 60);
            this->button6->TabIndex = 5;
            this->button6->Text = L"6";
            this->button6->UseVisualStyleBackColor = true;
            this->button6->Click += gcnew System::EventHandler(this, &board8x8mp::button6_Click);
            // 
            // button5
            // 
            this->button5->Enabled = false;
            this->button5->FlatAppearance->BorderSize = 0;
            this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button5->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button5->Location = System::Drawing::Point(336, 112);
            this->button5->Name = L"button5";
            this->button5->Size = System::Drawing::Size(60, 60);
            this->button5->TabIndex = 4;
            this->button5->Text = L"5";
            this->button5->UseVisualStyleBackColor = true;
            this->button5->Click += gcnew System::EventHandler(this, &board8x8mp::button5_Click);
            // 
            // button4
            // 
            this->button4->Enabled = false;
            this->button4->FlatAppearance->BorderSize = 0;
            this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button4->Location = System::Drawing::Point(277, 112);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(60, 60);
            this->button4->TabIndex = 3;
            this->button4->Text = L"4";
            this->button4->UseVisualStyleBackColor = true;
            this->button4->Click += gcnew System::EventHandler(this, &board8x8mp::button4_Click);
            // 
            // button3
            // 
            this->button3->Enabled = false;
            this->button3->FlatAppearance->BorderSize = 0;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button3->Location = System::Drawing::Point(218, 112);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(60, 60);
            this->button3->TabIndex = 2;
            this->button3->Text = L"3";
            this->button3->UseVisualStyleBackColor = true;
            this->button3->Click += gcnew System::EventHandler(this, &board8x8mp::button3_Click);
            // 
            // button2
            // 
            this->button2->Enabled = false;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button2->Location = System::Drawing::Point(159, 112);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(60, 60);
            this->button2->TabIndex = 1;
            this->button2->Text = L"2";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &board8x8mp::button2_Click);
            // 
            // button1
            // 
            this->button1->Enabled = false;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::MidnightBlue;
            this->button1->Location = System::Drawing::Point(100, 112);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(60, 60);
            this->button1->TabIndex = 0;
            this->button1->Text = L"1";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Click += gcnew System::EventHandler(this, &board8x8mp::button1_Click);
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::SteelBlue;
            this->label2->Location = System::Drawing::Point(34, 28);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(128, 41);
            this->label2->TabIndex = 145;
            this->label2->Text = L"player 2";
            // 
            // panel6
            // 
            this->panel6->BackColor = System::Drawing::Color::Transparent;
            this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
            this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel6->Controls->Add(this->label4);
            this->panel6->Controls->Add(this->label5);
            this->panel6->Location = System::Drawing::Point(359, 706);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(505, 110);
            this->panel6->TabIndex = 151;
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Transparent;
            this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel2->Controls->Add(this->button66);
            this->panel2->Location = System::Drawing::Point(1011, 400);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(200, 100);
            this->panel2->TabIndex = 150;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::Transparent;
            this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
            this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel4->Controls->Add(this->label1);
            this->panel4->Location = System::Drawing::Point(3, 15);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(274, 100);
            this->panel4->TabIndex = 149;
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Transparent;
            this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
            this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel3->Controls->Add(this->label2);
            this->panel3->Location = System::Drawing::Point(946, 14);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(274, 100);
            this->panel3->TabIndex = 149;
            // 
            // button67
            // 
            this->button67->BackColor = System::Drawing::Color::Transparent;
            this->button67->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button67.BackgroundImage")));
            this->button67->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button67->FlatAppearance->BorderSize = 0;
            this->button67->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button67->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button67->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button67->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button67->Location = System::Drawing::Point(12, 753);
            this->button67->Name = L"button67";
            this->button67->Size = System::Drawing::Size(76, 65);
            this->button67->TabIndex = 152;
            this->button67->UseVisualStyleBackColor = false;
            this->button67->Click += gcnew System::EventHandler(this, &board8x8mp::button67_Click);
            // 
            // board8x8mp
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::DarkCyan;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1223, 828);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->button67);
            this->Controls->Add(this->panel3);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel6);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->button65);
            this->Controls->Add(this->panel1);
            this->DoubleBuffered = true;
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"board8x8mp";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"board8x8mp";
            this->Load += gcnew System::EventHandler(this, &board8x8mp::board8x8mp_Load);
            this->panel1->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel2->ResumeLayout(false);
            this->panel4->ResumeLayout(false);
            this->panel4->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel3->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        public:joueur^ jr1;
public:joueur^ jr2;
      int nbtour;
      vector <int> l;
      liste^ lm = gcnew liste(64);
      public:void setlist() {
          for (int i = 1; i <= 64; i++)
              l.push_back(i);
      }
    private:void supprimer(int n)
    {
        if ((find(l.begin(), l.end(), n) != l.end())) {
            l.erase(find(l.begin(), l.end(), n));
        }

    }
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


               default:
                   break;
               }

           }
                 void play(int i) {
                     if (jr1->getturn() == true) {
                         if (lm->verif(i) == true) {

                             setbutton(i, false);
                             supprimer(i);
                             jr2->setturn(true);
                             jr1->setturn(false);
                             label6->Text = "";
                             label7->Text = "turn";
                             jr1->setcoup(i);
                             label5->Text = jr1->getname()+" a joué:" + Convert::ToString(jr1->getcoup());
                             nbtour++;
                             lm->multdiv(jr1->getcoup(), l);
                             if (lm->Lmd.size() == 0)
                             {
                                 System::Media::SoundPlayer^ simpleSound = gcnew
                                     System::Media::SoundPlayer();
                                 simpleSound->SoundLocation = "Ta Da-SoundBible.com-1884170640.wav";
                                 simpleSound->Load();
                                 simpleSound->Play();
                                 label4->Text = "Game Over";
                                 label5->Text = label1->Text + " WIN";
                                 this->label6->Text = L"";
                                 this->label7->Text = L"";
                                 timer1->Enabled = false;

                             }

                         }
                         else {
                             if (nbtour == 0) {
                                 System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Ce n'est pas un nombre pair", "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                             }
                             else {
                                 std::string s = std::to_string(jr2->getcoup());
                                 System::String^ str2 = gcnew System::String(s.c_str());
                                 System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Ce n'est pas un multiple \n ou un diviseur de " + str2, "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                             }
                         }
                     }
                     else if (jr2->getturn() == true) {
                         if (lm->verif(i) == true) {

                             setbutton(i, false);
                             supprimer(i);
                             jr1->setturn(true);
                             jr2->setturn(false);
                             label7->Text = "";
                             label6->Text = "turn";
                             jr2->setcoup(i);
                             label5->Text = jr2->getname() + " a joué:" + Convert::ToString(jr2->getcoup());
                             nbtour++;
                             lm->multdiv(jr2->getcoup(), l);


                             if (lm->Lmd.size() == 0)
                             {
                                 System::Media::SoundPlayer^ simpleSound = gcnew
                                     System::Media::SoundPlayer();
                                 simpleSound->SoundLocation = "Ta Da-SoundBible.com-1884170640.wav";
                                 simpleSound->Load();
                                 simpleSound->Play();
                                 label4->Text = "Game Over";
                                 label5->Text = label2->Text + " WIN";
                                 this->label6->Text = L"";
                                 this->label7->Text = L"";

                                 timer1->Enabled = false;

                             }
                         }
                         else {
                             if (nbtour == 0) {
                                 System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Ce n'est pas un nombre pair", "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                             }
                             else {
                                 std::string s = std::to_string(jr1->getcoup());
                                 System::String^ str2 = gcnew System::String(s.c_str());
                                 System::Windows::Forms::DialogResult result = MessageBox::Show(this, L"Ce n'est pas un multiple \n ou un diviseur de " + str2, "Choix invalid", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                             }
                         }


                     }
                 }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    play(1);
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    play(2);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
    play(3);

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    play(4);

}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
    play(5);
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    play(6);
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    play(7);

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    play(8);
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {

    play(9);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
    play(10);
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
    Application::Exit();
}
private: System::Void button66_Click(System::Object^ sender, System::EventArgs^ e) {
    timer1->Enabled = true;
    this->setlist();
    this->button66->Enabled = false;
    this->label6->Text = L"turn";
    for (int i = 1; i <= 64; i++)
    {
        setbutton(i, true);
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
private: System::Void board8x8mp_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button67_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Restart();
}
};
}
