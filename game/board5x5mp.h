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
	/// Summary for board5x5mp
	/// </summary>
	public ref class board5x5mp : public System::Windows::Forms::Form
	{
	public:
		board5x5mp(void)
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
		~board5x5mp()
		{
			if (components)
			{
				delete components;
			}
		}
    private: System::Windows::Forms::Panel^ panel2;
    protected:
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Panel^ panel3;
    private: System::Windows::Forms::Panel^ panel6;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Button^ B1;
    private: System::Windows::Forms::Button^ B22;
    private: System::Windows::Forms::Button^ B5;
    private: System::Windows::Forms::Button^ B23;
    private: System::Windows::Forms::Button^ B4;
    private: System::Windows::Forms::Button^ B24;
    private: System::Windows::Forms::Button^ B3;
    private: System::Windows::Forms::Button^ B25;
    private: System::Windows::Forms::Button^ B2;
    private: System::Windows::Forms::Button^ B21;
    private: System::Windows::Forms::Button^ B6;
    private: System::Windows::Forms::Button^ B17;
    private: System::Windows::Forms::Button^ B10;
    private: System::Windows::Forms::Button^ B18;
    private: System::Windows::Forms::Button^ B9;
    private: System::Windows::Forms::Button^ B19;
    private: System::Windows::Forms::Button^ B8;
    private: System::Windows::Forms::Button^ B20;
    private: System::Windows::Forms::Button^ B7;
    private: System::Windows::Forms::Button^ B16;
    private: System::Windows::Forms::Button^ B11;
    private: System::Windows::Forms::Button^ B12;
    private: System::Windows::Forms::Button^ B15;
    private: System::Windows::Forms::Button^ B13;
    private: System::Windows::Forms::Button^ B14;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Panel^ panel4;
    private: System::Windows::Forms::Timer^ timer1;
    private: System::Windows::Forms::Panel^ panel5;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Button^ button4;
    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Button^ button2;
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
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(board5x5mp::typeid));
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel6 = (gcnew System::Windows::Forms::Panel());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->B1 = (gcnew System::Windows::Forms::Button());
            this->B22 = (gcnew System::Windows::Forms::Button());
            this->B5 = (gcnew System::Windows::Forms::Button());
            this->B23 = (gcnew System::Windows::Forms::Button());
            this->B4 = (gcnew System::Windows::Forms::Button());
            this->B24 = (gcnew System::Windows::Forms::Button());
            this->B3 = (gcnew System::Windows::Forms::Button());
            this->B25 = (gcnew System::Windows::Forms::Button());
            this->B2 = (gcnew System::Windows::Forms::Button());
            this->B21 = (gcnew System::Windows::Forms::Button());
            this->B6 = (gcnew System::Windows::Forms::Button());
            this->B17 = (gcnew System::Windows::Forms::Button());
            this->B10 = (gcnew System::Windows::Forms::Button());
            this->B18 = (gcnew System::Windows::Forms::Button());
            this->B9 = (gcnew System::Windows::Forms::Button());
            this->B19 = (gcnew System::Windows::Forms::Button());
            this->B8 = (gcnew System::Windows::Forms::Button());
            this->B20 = (gcnew System::Windows::Forms::Button());
            this->B7 = (gcnew System::Windows::Forms::Button());
            this->B16 = (gcnew System::Windows::Forms::Button());
            this->B11 = (gcnew System::Windows::Forms::Button());
            this->B12 = (gcnew System::Windows::Forms::Button());
            this->B15 = (gcnew System::Windows::Forms::Button());
            this->B13 = (gcnew System::Windows::Forms::Button());
            this->B14 = (gcnew System::Windows::Forms::Button());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->panel4 = (gcnew System::Windows::Forms::Panel());
            this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
            this->panel5 = (gcnew System::Windows::Forms::Panel());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->button4 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->panel2->SuspendLayout();
            this->panel3->SuspendLayout();
            this->panel6->SuspendLayout();
            this->panel1->SuspendLayout();
            this->panel4->SuspendLayout();
            this->panel5->SuspendLayout();
            this->SuspendLayout();
            // 
            // panel2
            // 
            this->panel2->BackColor = System::Drawing::Color::Transparent;
            this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
            this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel2->Controls->Add(this->label7);
            this->panel2->Controls->Add(this->label2);
            this->panel2->Location = System::Drawing::Point(944, 4);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(276, 186);
            this->panel2->TabIndex = 42;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->BackColor = System::Drawing::Color::Chocolate;
            this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->label7->Location = System::Drawing::Point(134, 140);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(0, 17);
            this->label7->TabIndex = 33;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->BackColor = System::Drawing::Color::Transparent;
            this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label2->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label2->ForeColor = System::Drawing::Color::White;
            this->label2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->label2->Location = System::Drawing::Point(77, 55);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(136, 41);
            this->label2->TabIndex = 32;
            this->label2->Text = L"player 2";
            // 
            // panel3
            // 
            this->panel3->BackColor = System::Drawing::Color::Transparent;
            this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
            this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel3->Controls->Add(this->panel6);
            this->panel3->Controls->Add(this->B1);
            this->panel3->Controls->Add(this->B22);
            this->panel3->Controls->Add(this->B5);
            this->panel3->Controls->Add(this->B23);
            this->panel3->Controls->Add(this->B4);
            this->panel3->Controls->Add(this->B24);
            this->panel3->Controls->Add(this->B3);
            this->panel3->Controls->Add(this->B25);
            this->panel3->Controls->Add(this->B2);
            this->panel3->Controls->Add(this->B21);
            this->panel3->Controls->Add(this->B6);
            this->panel3->Controls->Add(this->B17);
            this->panel3->Controls->Add(this->B10);
            this->panel3->Controls->Add(this->B18);
            this->panel3->Controls->Add(this->B9);
            this->panel3->Controls->Add(this->B19);
            this->panel3->Controls->Add(this->B8);
            this->panel3->Controls->Add(this->B20);
            this->panel3->Controls->Add(this->B7);
            this->panel3->Controls->Add(this->B16);
            this->panel3->Controls->Add(this->B11);
            this->panel3->Controls->Add(this->B12);
            this->panel3->Controls->Add(this->B15);
            this->panel3->Controls->Add(this->B13);
            this->panel3->Controls->Add(this->B14);
            this->panel3->Location = System::Drawing::Point(188, 15);
            this->panel3->Name = L"panel3";
            this->panel3->Size = System::Drawing::Size(834, 674);
            this->panel3->TabIndex = 39;
            // 
            // panel6
            // 
            this->panel6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel6.BackgroundImage")));
            this->panel6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel6->Controls->Add(this->label3);
            this->panel6->Location = System::Drawing::Point(348, 14);
            this->panel6->Name = L"panel6";
            this->panel6->Size = System::Drawing::Size(200, 92);
            this->panel6->TabIndex = 40;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Font = (gcnew System::Drawing::Font(L"Digital-7 Mono", 22.2F, System::Drawing::FontStyle::Bold));
            this->label3->ForeColor = System::Drawing::Color::White;
            this->label3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->label3->Location = System::Drawing::Point(53, 23);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(107, 39);
            this->label3->TabIndex = 39;
            this->label3->Text = L"00:00";
            // 
            // B1
            // 
            this->B1->BackColor = System::Drawing::Color::Transparent;
            this->B1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->B1->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B1->Enabled = false;
            this->B1->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B1->FlatAppearance->BorderSize = 0;
            this->B1->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B1->ForeColor = System::Drawing::Color::White;
            this->B1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B1->Location = System::Drawing::Point(199, 108);
            this->B1->Name = L"B1";
            this->B1->Size = System::Drawing::Size(100, 100);
            this->B1->TabIndex = 0;
            this->B1->Text = L"1";
            this->B1->UseVisualStyleBackColor = false;
            this->B1->Click += gcnew System::EventHandler(this, &board5x5mp::B1_Click);
            // 
            // B22
            // 
            this->B22->BackColor = System::Drawing::Color::Transparent;
            this->B22->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B22->Enabled = false;
            this->B22->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B22->FlatAppearance->BorderSize = 0;
            this->B22->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B22->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B22->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B22->ForeColor = System::Drawing::Color::White;
            this->B22->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B22->Location = System::Drawing::Point(298, 504);
            this->B22->Name = L"B22";
            this->B22->Size = System::Drawing::Size(100, 100);
            this->B22->TabIndex = 29;
            this->B22->Text = L"22";
            this->B22->UseVisualStyleBackColor = false;
            this->B22->Click += gcnew System::EventHandler(this, &board5x5mp::B22_Click);
            // 
            // B5
            // 
            this->B5->BackColor = System::Drawing::Color::Transparent;
            this->B5->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B5->Enabled = false;
            this->B5->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B5->FlatAppearance->BorderSize = 0;
            this->B5->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B5->ForeColor = System::Drawing::Color::White;
            this->B5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B5->Location = System::Drawing::Point(595, 108);
            this->B5->Name = L"B5";
            this->B5->Size = System::Drawing::Size(100, 100);
            this->B5->TabIndex = 2;
            this->B5->Text = L"5";
            this->B5->UseVisualStyleBackColor = false;
            this->B5->Click += gcnew System::EventHandler(this, &board5x5mp::B5_Click);
            // 
            // B23
            // 
            this->B23->BackColor = System::Drawing::Color::Transparent;
            this->B23->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B23->Enabled = false;
            this->B23->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B23->FlatAppearance->BorderSize = 0;
            this->B23->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B23->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B23->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B23->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B23->ForeColor = System::Drawing::Color::White;
            this->B23->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B23->Location = System::Drawing::Point(397, 504);
            this->B23->Name = L"B23";
            this->B23->Size = System::Drawing::Size(100, 100);
            this->B23->TabIndex = 28;
            this->B23->Text = L"23";
            this->B23->UseVisualStyleBackColor = false;
            this->B23->Click += gcnew System::EventHandler(this, &board5x5mp::B23_Click);
            // 
            // B4
            // 
            this->B4->BackColor = System::Drawing::Color::Transparent;
            this->B4->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B4->Enabled = false;
            this->B4->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B4->FlatAppearance->BorderSize = 0;
            this->B4->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B4->ForeColor = System::Drawing::Color::White;
            this->B4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B4->Location = System::Drawing::Point(496, 108);
            this->B4->Name = L"B4";
            this->B4->Size = System::Drawing::Size(100, 100);
            this->B4->TabIndex = 3;
            this->B4->Text = L"4";
            this->B4->UseVisualStyleBackColor = false;
            this->B4->Click += gcnew System::EventHandler(this, &board5x5mp::B4_Click);
            // 
            // B24
            // 
            this->B24->BackColor = System::Drawing::Color::Transparent;
            this->B24->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B24->Enabled = false;
            this->B24->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B24->FlatAppearance->BorderSize = 0;
            this->B24->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B24->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B24->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B24->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B24->ForeColor = System::Drawing::Color::White;
            this->B24->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B24->Location = System::Drawing::Point(496, 504);
            this->B24->Name = L"B24";
            this->B24->Size = System::Drawing::Size(100, 100);
            this->B24->TabIndex = 27;
            this->B24->Text = L"24";
            this->B24->UseVisualStyleBackColor = false;
            this->B24->Click += gcnew System::EventHandler(this, &board5x5mp::B24_Click);
            // 
            // B3
            // 
            this->B3->BackColor = System::Drawing::Color::Transparent;
            this->B3->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B3->Enabled = false;
            this->B3->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B3->FlatAppearance->BorderSize = 0;
            this->B3->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B3->ForeColor = System::Drawing::Color::White;
            this->B3->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B3->Location = System::Drawing::Point(397, 108);
            this->B3->Name = L"B3";
            this->B3->Size = System::Drawing::Size(100, 100);
            this->B3->TabIndex = 4;
            this->B3->Text = L"3";
            this->B3->UseVisualStyleBackColor = false;
            this->B3->Click += gcnew System::EventHandler(this, &board5x5mp::B3_Click);
            // 
            // B25
            // 
            this->B25->BackColor = System::Drawing::Color::Transparent;
            this->B25->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B25->Enabled = false;
            this->B25->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B25->FlatAppearance->BorderSize = 0;
            this->B25->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B25->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B25->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B25->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B25->ForeColor = System::Drawing::Color::White;
            this->B25->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B25->Location = System::Drawing::Point(595, 504);
            this->B25->Name = L"B25";
            this->B25->Size = System::Drawing::Size(100, 100);
            this->B25->TabIndex = 26;
            this->B25->Text = L"25";
            this->B25->UseVisualStyleBackColor = false;
            this->B25->Click += gcnew System::EventHandler(this, &board5x5mp::B25_Click);
            // 
            // B2
            // 
            this->B2->BackColor = System::Drawing::Color::Transparent;
            this->B2->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B2->Enabled = false;
            this->B2->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B2->FlatAppearance->BorderSize = 0;
            this->B2->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B2->ForeColor = System::Drawing::Color::White;
            this->B2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B2->Location = System::Drawing::Point(298, 108);
            this->B2->Name = L"B2";
            this->B2->Size = System::Drawing::Size(100, 100);
            this->B2->TabIndex = 5;
            this->B2->Text = L"2";
            this->B2->UseVisualStyleBackColor = false;
            this->B2->Click += gcnew System::EventHandler(this, &board5x5mp::B2_Click);
            // 
            // B21
            // 
            this->B21->BackColor = System::Drawing::Color::Transparent;
            this->B21->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B21->Enabled = false;
            this->B21->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B21->FlatAppearance->BorderSize = 0;
            this->B21->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B21->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B21->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B21->ForeColor = System::Drawing::Color::White;
            this->B21->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B21->Location = System::Drawing::Point(199, 504);
            this->B21->Name = L"B21";
            this->B21->Size = System::Drawing::Size(100, 100);
            this->B21->TabIndex = 24;
            this->B21->Text = L"21";
            this->B21->UseVisualStyleBackColor = false;
            this->B21->Click += gcnew System::EventHandler(this, &board5x5mp::B21_Click);
            // 
            // B6
            // 
            this->B6->BackColor = System::Drawing::Color::Transparent;
            this->B6->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B6->Enabled = false;
            this->B6->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B6->FlatAppearance->BorderSize = 0;
            this->B6->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B6->ForeColor = System::Drawing::Color::White;
            this->B6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B6->Location = System::Drawing::Point(199, 207);
            this->B6->Name = L"B6";
            this->B6->Size = System::Drawing::Size(100, 100);
            this->B6->TabIndex = 6;
            this->B6->Text = L"6";
            this->B6->UseVisualStyleBackColor = false;
            this->B6->Click += gcnew System::EventHandler(this, &board5x5mp::B6_Click);
            // 
            // B17
            // 
            this->B17->BackColor = System::Drawing::Color::Transparent;
            this->B17->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B17->Enabled = false;
            this->B17->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B17->FlatAppearance->BorderSize = 0;
            this->B17->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B17->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B17->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B17->ForeColor = System::Drawing::Color::White;
            this->B17->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B17->Location = System::Drawing::Point(298, 405);
            this->B17->Name = L"B17";
            this->B17->Size = System::Drawing::Size(100, 100);
            this->B17->TabIndex = 23;
            this->B17->Text = L"17";
            this->B17->UseVisualStyleBackColor = false;
            this->B17->Click += gcnew System::EventHandler(this, &board5x5mp::B17_Click);
            // 
            // B10
            // 
            this->B10->BackColor = System::Drawing::Color::Transparent;
            this->B10->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B10->Enabled = false;
            this->B10->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B10->FlatAppearance->BorderSize = 0;
            this->B10->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B10->ForeColor = System::Drawing::Color::White;
            this->B10->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B10->Location = System::Drawing::Point(595, 207);
            this->B10->Name = L"B10";
            this->B10->Size = System::Drawing::Size(100, 100);
            this->B10->TabIndex = 8;
            this->B10->Text = L"10";
            this->B10->UseVisualStyleBackColor = false;
            this->B10->Click += gcnew System::EventHandler(this, &board5x5mp::B10_Click);
            // 
            // B18
            // 
            this->B18->BackColor = System::Drawing::Color::Transparent;
            this->B18->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B18->Enabled = false;
            this->B18->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B18->FlatAppearance->BorderSize = 0;
            this->B18->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B18->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B18->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B18->ForeColor = System::Drawing::Color::White;
            this->B18->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B18->Location = System::Drawing::Point(397, 405);
            this->B18->Name = L"B18";
            this->B18->Size = System::Drawing::Size(100, 100);
            this->B18->TabIndex = 22;
            this->B18->Text = L"18";
            this->B18->UseVisualStyleBackColor = false;
            this->B18->Click += gcnew System::EventHandler(this, &board5x5mp::B18_Click);
            // 
            // B9
            // 
            this->B9->BackColor = System::Drawing::Color::Transparent;
            this->B9->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B9->Enabled = false;
            this->B9->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B9->FlatAppearance->BorderSize = 0;
            this->B9->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B9->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B9->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B9->ForeColor = System::Drawing::Color::White;
            this->B9->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B9->Location = System::Drawing::Point(496, 207);
            this->B9->Name = L"B9";
            this->B9->Size = System::Drawing::Size(100, 100);
            this->B9->TabIndex = 9;
            this->B9->Text = L"9";
            this->B9->UseVisualStyleBackColor = false;
            this->B9->Click += gcnew System::EventHandler(this, &board5x5mp::B9_Click);
            // 
            // B19
            // 
            this->B19->BackColor = System::Drawing::Color::Transparent;
            this->B19->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B19->Enabled = false;
            this->B19->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B19->FlatAppearance->BorderSize = 0;
            this->B19->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B19->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B19->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B19->ForeColor = System::Drawing::Color::White;
            this->B19->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B19->Location = System::Drawing::Point(496, 405);
            this->B19->Name = L"B19";
            this->B19->Size = System::Drawing::Size(100, 100);
            this->B19->TabIndex = 21;
            this->B19->Text = L"19";
            this->B19->UseVisualStyleBackColor = false;
            this->B19->Click += gcnew System::EventHandler(this, &board5x5mp::B19_Click);
            // 
            // B8
            // 
            this->B8->BackColor = System::Drawing::Color::Transparent;
            this->B8->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B8->Enabled = false;
            this->B8->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B8->FlatAppearance->BorderSize = 0;
            this->B8->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B8->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B8->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B8->ForeColor = System::Drawing::Color::White;
            this->B8->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B8->Location = System::Drawing::Point(397, 207);
            this->B8->Name = L"B8";
            this->B8->Size = System::Drawing::Size(100, 100);
            this->B8->TabIndex = 10;
            this->B8->Text = L"8";
            this->B8->UseVisualStyleBackColor = false;
            this->B8->Click += gcnew System::EventHandler(this, &board5x5mp::B8_Click);
            // 
            // B20
            // 
            this->B20->BackColor = System::Drawing::Color::Transparent;
            this->B20->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B20->Enabled = false;
            this->B20->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B20->FlatAppearance->BorderSize = 0;
            this->B20->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B20->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B20->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B20->ForeColor = System::Drawing::Color::White;
            this->B20->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B20->Location = System::Drawing::Point(595, 405);
            this->B20->Name = L"B20";
            this->B20->Size = System::Drawing::Size(100, 100);
            this->B20->TabIndex = 20;
            this->B20->Text = L"20";
            this->B20->UseVisualStyleBackColor = false;
            this->B20->Click += gcnew System::EventHandler(this, &board5x5mp::B20_Click);
            // 
            // B7
            // 
            this->B7->BackColor = System::Drawing::Color::Transparent;
            this->B7->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B7->Enabled = false;
            this->B7->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B7->FlatAppearance->BorderSize = 0;
            this->B7->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B7->ForeColor = System::Drawing::Color::White;
            this->B7->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B7->Location = System::Drawing::Point(298, 207);
            this->B7->Name = L"B7";
            this->B7->Size = System::Drawing::Size(100, 100);
            this->B7->TabIndex = 11;
            this->B7->Text = L"7";
            this->B7->UseVisualStyleBackColor = false;
            this->B7->Click += gcnew System::EventHandler(this, &board5x5mp::B7_Click);
            // 
            // B16
            // 
            this->B16->BackColor = System::Drawing::Color::Transparent;
            this->B16->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B16->Enabled = false;
            this->B16->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B16->FlatAppearance->BorderSize = 0;
            this->B16->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B16->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B16->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B16->ForeColor = System::Drawing::Color::White;
            this->B16->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B16->Location = System::Drawing::Point(199, 405);
            this->B16->Name = L"B16";
            this->B16->Size = System::Drawing::Size(100, 100);
            this->B16->TabIndex = 18;
            this->B16->Text = L"16";
            this->B16->UseVisualStyleBackColor = false;
            this->B16->Click += gcnew System::EventHandler(this, &board5x5mp::B16_Click);
            // 
            // B11
            // 
            this->B11->BackColor = System::Drawing::Color::Transparent;
            this->B11->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B11->Enabled = false;
            this->B11->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B11->FlatAppearance->BorderSize = 0;
            this->B11->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B11->ForeColor = System::Drawing::Color::White;
            this->B11->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B11->Location = System::Drawing::Point(199, 306);
            this->B11->Name = L"B11";
            this->B11->Size = System::Drawing::Size(100, 100);
            this->B11->TabIndex = 12;
            this->B11->Text = L"11";
            this->B11->UseVisualStyleBackColor = false;
            this->B11->Click += gcnew System::EventHandler(this, &board5x5mp::B11_Click);
            // 
            // B12
            // 
            this->B12->BackColor = System::Drawing::Color::Transparent;
            this->B12->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B12->Enabled = false;
            this->B12->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B12->FlatAppearance->BorderSize = 0;
            this->B12->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B12->ForeColor = System::Drawing::Color::White;
            this->B12->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B12->Location = System::Drawing::Point(298, 306);
            this->B12->Name = L"B12";
            this->B12->Size = System::Drawing::Size(100, 100);
            this->B12->TabIndex = 17;
            this->B12->Text = L"12";
            this->B12->UseVisualStyleBackColor = false;
            this->B12->Click += gcnew System::EventHandler(this, &board5x5mp::B12_Click);
            // 
            // B15
            // 
            this->B15->BackColor = System::Drawing::Color::Transparent;
            this->B15->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B15->Enabled = false;
            this->B15->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B15->FlatAppearance->BorderSize = 0;
            this->B15->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B15->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B15->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B15->ForeColor = System::Drawing::Color::White;
            this->B15->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B15->Location = System::Drawing::Point(595, 306);
            this->B15->Name = L"B15";
            this->B15->Size = System::Drawing::Size(100, 100);
            this->B15->TabIndex = 14;
            this->B15->Text = L"15";
            this->B15->UseVisualStyleBackColor = false;
            this->B15->Click += gcnew System::EventHandler(this, &board5x5mp::B15_Click);
            // 
            // B13
            // 
            this->B13->BackColor = System::Drawing::Color::Transparent;
            this->B13->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B13->Enabled = false;
            this->B13->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B13->FlatAppearance->BorderSize = 0;
            this->B13->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B13->ForeColor = System::Drawing::Color::White;
            this->B13->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B13->Location = System::Drawing::Point(397, 306);
            this->B13->Name = L"B13";
            this->B13->Size = System::Drawing::Size(100, 100);
            this->B13->TabIndex = 16;
            this->B13->Text = L"13";
            this->B13->UseVisualStyleBackColor = false;
            this->B13->Click += gcnew System::EventHandler(this, &board5x5mp::B13_Click);
            // 
            // B14
            // 
            this->B14->BackColor = System::Drawing::Color::Transparent;
            this->B14->Cursor = System::Windows::Forms::Cursors::Arrow;
            this->B14->Enabled = false;
            this->B14->FlatAppearance->BorderColor = System::Drawing::Color::Peru;
            this->B14->FlatAppearance->BorderSize = 0;
            this->B14->FlatAppearance->CheckedBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
                static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
            this->B14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->B14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->B14->ForeColor = System::Drawing::Color::White;
            this->B14->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->B14->Location = System::Drawing::Point(496, 306);
            this->B14->Name = L"B14";
            this->B14->Size = System::Drawing::Size(100, 100);
            this->B14->TabIndex = 15;
            this->B14->Text = L"14";
            this->B14->UseVisualStyleBackColor = false;
            this->B14->Click += gcnew System::EventHandler(this, &board5x5mp::B14_Click);
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Transparent;
            this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
            this->button1->FlatAppearance->BorderSize = 0;
            this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold));
            this->button1->ForeColor = System::Drawing::Color::Maroon;
            this->button1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->button1->Location = System::Drawing::Point(12, 8);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(168, 62);
            this->button1->TabIndex = 33;
            this->button1->Text = L"Start";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &board5x5mp::button1_Click);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::White;
            this->label1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->label1->Location = System::Drawing::Point(74, 57);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(132, 41);
            this->label1->TabIndex = 31;
            this->label1->Text = L"player 1";
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Transparent;
            this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
            this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->label1);
            this->panel1->Location = System::Drawing::Point(-7, 2);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(267, 187);
            this->panel1->TabIndex = 41;
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->BackColor = System::Drawing::Color::Chocolate;
            this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label6->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->label6->Location = System::Drawing::Point(119, 142);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(0, 17);
            this->label6->TabIndex = 32;
            // 
            // panel4
            // 
            this->panel4->BackColor = System::Drawing::Color::Transparent;
            this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
            this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel4->Controls->Add(this->button1);
            this->panel4->Location = System::Drawing::Point(1016, 522);
            this->panel4->Name = L"panel4";
            this->panel4->Size = System::Drawing::Size(200, 100);
            this->panel4->TabIndex = 43;
            // 
            // timer1
            // 
            this->timer1->Interval = 1000;
            this->timer1->Tick += gcnew System::EventHandler(this, &board5x5mp::timer1_Tick);
            // 
            // panel5
            // 
            this->panel5->BackColor = System::Drawing::Color::Transparent;
            this->panel5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel5.BackgroundImage")));
            this->panel5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->panel5->Controls->Add(this->label5);
            this->panel5->Controls->Add(this->label4);
            this->panel5->Location = System::Drawing::Point(334, 671);
            this->panel5->Name = L"panel5";
            this->panel5->Size = System::Drawing::Size(592, 150);
            this->panel5->TabIndex = 44;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->BackColor = System::Drawing::Color::Transparent;
            this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold));
            this->label5->ForeColor = System::Drawing::Color::Maroon;
            this->label5->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->label5->Location = System::Drawing::Point(180, 74);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(0, 44);
            this->label5->TabIndex = 1;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->BackColor = System::Drawing::Color::Transparent;
            this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Bold));
            this->label4->ForeColor = System::Drawing::Color::Black;
            this->label4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->label4->Location = System::Drawing::Point(170, 15);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(0, 51);
            this->label4->TabIndex = 0;
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
            this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button4->ForeColor = System::Drawing::Color::White;
            this->button4->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->button4->Location = System::Drawing::Point(1129, 762);
            this->button4->Name = L"button4";
            this->button4->Size = System::Drawing::Size(82, 54);
            this->button4->TabIndex = 40;
            this->button4->UseVisualStyleBackColor = false;
            this->button4->Click += gcnew System::EventHandler(this, &board5x5mp::button4_Click);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Transparent;
            this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
            this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
            this->button2->FlatAppearance->BorderSize = 0;
            this->button2->FlatAppearance->CheckedBackColor = System::Drawing::Color::Transparent;
            this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
            this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
            this->button2->Location = System::Drawing::Point(12, 762);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(83, 64);
            this->button2->TabIndex = 45;
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &board5x5mp::button2_Click);
            // 
            // board5x5mp
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
                static_cast<System::Int32>(static_cast<System::Byte>(62)));
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
            this->ClientSize = System::Drawing::Size(1223, 828);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel4);
            this->Controls->Add(this->panel5);
            this->Controls->Add(this->button4);
            this->Controls->Add(this->panel3);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
            this->Name = L"board5x5mp";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"board5x5mp";
            this->Load += gcnew System::EventHandler(this, &board5x5mp::board5x5mp_Load);
            this->panel2->ResumeLayout(false);
            this->panel2->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->panel6->ResumeLayout(false);
            this->panel6->PerformLayout();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel4->ResumeLayout(false);
            this->panel5->ResumeLayout(false);
            this->panel5->PerformLayout();
            this->ResumeLayout(false);

        }
#pragma endregion
public:joueur^ jr1;
public:joueur^ jr2;
      int nbtour;
      vector <int> l;
      liste^ lm = gcnew liste(25);
      public:void setlist() {
          for (int i = 1; i <= 25; i++)
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
               case 1: this->B1->Enabled = En;
                   break;
               case 2: this->B2->Enabled = En;
                   break;
               case 3: this->B3->Enabled = En;
                   break;
               case 4: this->B4->Enabled = En;
                   break;
               case 5: this->B5->Enabled = En;
                   break;
               case 6: this->B6->Enabled = En;
                   break;
               case 7: this->B7->Enabled = En;
                   break;
               case 8: this->B8->Enabled = En;
                   break;
               case 9: this->B9->Enabled = En;
                   break;
               case 10: this->B10->Enabled = En;
                   break;
               case 11: this->B11->Enabled = En;
                   break;
               case 12: this->B12->Enabled = En;
                   break;
               case 13: this->B13->Enabled = En;
                   break;
               case 14: this->B14->Enabled = En;
                   break;
               case 15: this->B15->Enabled = En;
                   break;
               case 16: this->B16->Enabled = En;
                   break;
               case 17: this->B17->Enabled = En;
                   break;
               case 18: this->B18->Enabled = En;
                   break;
               case 19: this->B19->Enabled = En;
                   break;
               case 20: this->B20->Enabled = En;
                   break;
               case 21: this->B21->Enabled = En;
                   break;
               case 22: this->B22->Enabled = En;
                   break;
               case 23: this->B23->Enabled = En;
                   break;
               case 24: this->B24->Enabled = En;
                   break;
               case 25: this->B25->Enabled = En;
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
                             label5->Text = jr1->getname() + " a joué:" + Convert::ToString(jr1->getcoup());
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

                             setbutton(i,false);
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
    private: System::Void board5x5mp_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Exit();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    this->setlist();
    this->label6->Text = L"turn";

    this->button1->Enabled = false;
    for (int i = 1; i <= 25; i++)
    {
        setbutton(i, true);
    }
    timer1->Enabled = true;
}
private: System::Void B1_Click(System::Object^ sender, System::EventArgs^ e) {
    play(1);
}
private: System::Void B2_Click(System::Object^ sender, System::EventArgs^ e) {
    play(2);

}
private: System::Void B3_Click(System::Object^ sender, System::EventArgs^ e) {
    play(3);

}
private: System::Void B4_Click(System::Object^ sender, System::EventArgs^ e) {
    play(4);

}
private: System::Void B5_Click(System::Object^ sender, System::EventArgs^ e) {
    play(5);

}
private: System::Void B6_Click(System::Object^ sender, System::EventArgs^ e) {
    play(6);

}
private: System::Void B7_Click(System::Object^ sender, System::EventArgs^ e) {
    play(7);

}
private: System::Void B8_Click(System::Object^ sender, System::EventArgs^ e) {
    play(8);

}
private: System::Void B9_Click(System::Object^ sender, System::EventArgs^ e) {
    play(9);

}
private: System::Void B10_Click(System::Object^ sender, System::EventArgs^ e) {
    play(10);

}
private: System::Void B11_Click(System::Object^ sender, System::EventArgs^ e) {
    play(11);

}
private: System::Void B12_Click(System::Object^ sender, System::EventArgs^ e) {
    play(12);

}
private: System::Void B13_Click(System::Object^ sender, System::EventArgs^ e) {
    play(13);

}
private: System::Void B14_Click(System::Object^ sender, System::EventArgs^ e) {
    play(14);

}
private: System::Void B15_Click(System::Object^ sender, System::EventArgs^ e) {
    play(15);

}
private: System::Void B16_Click(System::Object^ sender, System::EventArgs^ e) {
    play(16);

}
private: System::Void B17_Click(System::Object^ sender, System::EventArgs^ e) {
    play(17);

}
private: System::Void B18_Click(System::Object^ sender, System::EventArgs^ e) {
    play(18);

}
private: System::Void B19_Click(System::Object^ sender, System::EventArgs^ e) {
    play(19);

}
private: System::Void B20_Click(System::Object^ sender, System::EventArgs^ e) {
    play(20);

}
private: System::Void B21_Click(System::Object^ sender, System::EventArgs^ e) {
    play(21);

}
private: System::Void B22_Click(System::Object^ sender, System::EventArgs^ e) {
    play(22);

}
private: System::Void B23_Click(System::Object^ sender, System::EventArgs^ e) {
    play(23);

}
private: System::Void B24_Click(System::Object^ sender, System::EventArgs^ e) {
    play(24);

}
private: System::Void B25_Click(System::Object^ sender, System::EventArgs^ e) {
    play(25);

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
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    Application::Restart();
}
};
}
