#include "HelpBoard.h"
#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MainF
	/// </summary>
	public ref class MainF : public System::Windows::Forms::Form
	{
	public:
		MainF(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			MainF::Width = 330;
			MainF::Height = 420;
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  przypnijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  okienkoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  widokToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  standardToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  finansowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  graToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  txtDisplay;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;

	private: System::Windows::Forms::Button^  button27;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  but;

	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainF::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przypnijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->okienkoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->widokToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->standardToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->finansowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->graToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->txtDisplay = (gcnew System::Windows::Forms::TextBox());
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
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->but = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->plikToolStripMenuItem,
					this->widokToolStripMenuItem, this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(456, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->przypnijToolStripMenuItem,
					this->okienkoToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->plikToolStripMenuItem->Text = L"File";
			// 
			// przypnijToolStripMenuItem
			// 
			this->przypnijToolStripMenuItem->Name = L"przypnijToolStripMenuItem";
			this->przypnijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->przypnijToolStripMenuItem->Text = L"Pin";
			this->przypnijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainF::przypnijToolStripMenuItem_Click);
			// 
			// okienkoToolStripMenuItem
			// 
			this->okienkoToolStripMenuItem->Name = L"okienkoToolStripMenuItem";
			this->okienkoToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->okienkoToolStripMenuItem->Text = L"Window";
			this->okienkoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainF::okienkoToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zamknijToolStripMenuItem->Text = L"Close";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainF::zamknijToolStripMenuItem_Click);
			// 
			// widokToolStripMenuItem
			// 
			this->widokToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->standardToolStripMenuItem,
					this->finansowyToolStripMenuItem, this->graToolStripMenuItem
			});
			this->widokToolStripMenuItem->Name = L"widokToolStripMenuItem";
			this->widokToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->widokToolStripMenuItem->Text = L"View";
			// 
			// standardToolStripMenuItem
			// 
			this->standardToolStripMenuItem->Name = L"standardToolStripMenuItem";
			this->standardToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->standardToolStripMenuItem->Text = L"Standard";
			this->standardToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainF::standardToolStripMenuItem_Click);
			// 
			// finansowyToolStripMenuItem
			// 
			this->finansowyToolStripMenuItem->Name = L"finansowyToolStripMenuItem";
			this->finansowyToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->finansowyToolStripMenuItem->Text = L"Financial";
			this->finansowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainF::finansowyToolStripMenuItem_Click);
			// 
			// graToolStripMenuItem
			// 
			this->graToolStripMenuItem->Name = L"graToolStripMenuItem";
			this->graToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->graToolStripMenuItem->Text = L"Game";
			this->graToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainF::graToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->pomocToolStripMenuItem->Text = L"Author";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainF::pomocToolStripMenuItem_Click);
			// 
			// txtDisplay
			// 
			this->txtDisplay->BackColor = System::Drawing::Color::Silver;
			this->txtDisplay->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtDisplay->Font = (gcnew System::Drawing::Font(L"Times New Roman", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->txtDisplay->ForeColor = System::Drawing::Color::Navy;
			this->txtDisplay->Location = System::Drawing::Point(13, 34);
			this->txtDisplay->Name = L"txtDisplay";
			this->txtDisplay->Size = System::Drawing::Size(298, 41);
			this->txtDisplay->TabIndex = 1;
			this->txtDisplay->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(12, 260);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 55);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainF::button1_Click);
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(73, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(55, 55);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainF::button2_Click);
			// 
			// button3
			// 
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(134, 260);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainF::button3_Click);
			// 
			// button4
			// 
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(12, 199);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(55, 55);
			this->button4->TabIndex = 2;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainF::button4_Click);
			// 
			// button5
			// 
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(73, 199);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(55, 55);
			this->button5->TabIndex = 2;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainF::button5_Click);
			// 
			// button6
			// 
			this->button6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button6->Location = System::Drawing::Point(134, 199);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 55);
			this->button6->TabIndex = 2;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MainF::button6_Click);
			// 
			// button7
			// 
			this->button7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(12, 138);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 55);
			this->button7->TabIndex = 2;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MainF::button7_Click);
			// 
			// button8
			// 
			this->button8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(73, 138);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(55, 55);
			this->button8->TabIndex = 2;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MainF::button8_Click);
			// 
			// button9
			// 
			this->button9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button9->Location = System::Drawing::Point(134, 138);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(55, 55);
			this->button9->TabIndex = 2;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MainF::button9_Click);
			// 
			// button10
			// 
			this->button10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button10->Location = System::Drawing::Point(12, 321);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(116, 55);
			this->button10->TabIndex = 2;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MainF::button10_Click);
			// 
			// button11
			// 
			this->button11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button11->Location = System::Drawing::Point(134, 321);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(55, 55);
			this->button11->TabIndex = 2;
			this->button11->Text = L",";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MainF::button11_Click);
			// 
			// button12
			// 
			this->button12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button12->Location = System::Drawing::Point(195, 260);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(55, 116);
			this->button12->TabIndex = 2;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MainF::button12_Click);
			// 
			// button13
			// 
			this->button13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button13->Location = System::Drawing::Point(195, 199);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(55, 55);
			this->button13->TabIndex = 2;
			this->button13->Text = L"x";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MainF::button13_Click);
			// 
			// button14
			// 
			this->button14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button14->Location = System::Drawing::Point(195, 138);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 55);
			this->button14->TabIndex = 2;
			this->button14->Text = L"-";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MainF::button14_Click);
			// 
			// button15
			// 
			this->button15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button15->ForeColor = System::Drawing::Color::Black;
			this->button15->Location = System::Drawing::Point(12, 81);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(116, 55);
			this->button15->TabIndex = 2;
			this->button15->Text = L"C";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MainF::button15_Click);
			// 
			// button16
			// 
			this->button16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button16->ForeColor = System::Drawing::Color::Black;
			this->button16->Location = System::Drawing::Point(134, 81);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(55, 55);
			this->button16->TabIndex = 2;
			this->button16->Text = L"CE";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MainF::button16_Click);
			// 
			// button18
			// 
			this->button18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button18->ForeColor = System::Drawing::Color::Black;
			this->button18->Location = System::Drawing::Point(195, 81);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(55, 55);
			this->button18->TabIndex = 2;
			this->button18->Text = L"/";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MainF::button18_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::Gray;
			this->button17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button17->ForeColor = System::Drawing::Color::Black;
			this->button17->Location = System::Drawing::Point(256, 260);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 116);
			this->button17->TabIndex = 2;
			this->button17->Text = L"=";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MainF::button17_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Gray;
			this->button19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button19->ForeColor = System::Drawing::Color::Black;
			this->button19->Location = System::Drawing::Point(256, 199);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(55, 55);
			this->button19->TabIndex = 2;
			this->button19->Text = L"%";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MainF::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::Gray;
			this->button20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button20->ForeColor = System::Drawing::Color::Black;
			this->button20->Location = System::Drawing::Point(256, 138);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(55, 55);
			this->button20->TabIndex = 2;
			this->button20->Text = L"a²";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MainF::button20_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::Gray;
			this->button21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button21->ForeColor = System::Drawing::Color::Black;
			this->button21->Location = System::Drawing::Point(256, 81);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(55, 55);
			this->button21->TabIndex = 2;
			this->button21->Text = L"√";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MainF::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button22->Location = System::Drawing::Point(317, 321);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(129, 55);
			this->button22->TabIndex = 2;
			this->button22->Text = L"Mark_up";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MainF::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button23->Location = System::Drawing::Point(327, 260);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(116, 55);
			this->button23->TabIndex = 2;
			this->button23->Text = L"Margin";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MainF::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button24->Location = System::Drawing::Point(327, 199);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(116, 55);
			this->button24->TabIndex = 2;
			this->button24->Text = L"brutto→netto";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MainF::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button25->Location = System::Drawing::Point(327, 138);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(116, 55);
			this->button25->TabIndex = 2;
			this->button25->Text = L"netto→brutto";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MainF::button25_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button27->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button27->Location = System::Drawing::Point(195, 382);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(116, 55);
			this->button27->TabIndex = 2;
			this->button27->Text = L"Addition";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MainF::button27_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(38, 406);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(130, 130);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"pytajnik.png");
			this->imageList1->Images->SetKeyName(1, L"zle.png");
			this->imageList1->Images->SetKeyName(2, L"dobrze.png");
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button28->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button28->Location = System::Drawing::Point(195, 443);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(116, 55);
			this->button28->TabIndex = 2;
			this->button28->Text = L"Subtraction";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MainF::button26_Click);
			// 
			// but
			// 
			this->but->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->but->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->but->Cursor = System::Windows::Forms::Cursors::Hand;
			this->but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->but->Location = System::Drawing::Point(195, 504);
			this->but->Name = L"but";
			this->but->Size = System::Drawing::Size(116, 55);
			this->but->TabIndex = 4;
			this->but->Text = L"Multiplication";
			this->but->UseVisualStyleBackColor = false;
			this->but->Click += gcnew System::EventHandler(this, &MainF::but_Click);
			// 
			// MainF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(456, 560);
			this->Controls->Add(this->but);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtDisplay);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainF";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainF::MainF_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainF::MainF_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double F_Number, S_Number, Result,TestUser;
		char operation;
		bool status = false;
#pragma endregion

		private: Void Unsubscribe(String^ number){
			if (txtDisplay->Text == ""||status){
				txtDisplay->Text = number;
			}
			else
			{
				txtDisplay->Text += number;
			}
			status = false;

		}
	private: Void KeysView(bool TF){
		button12->Visible = TF;
		button13->Visible = TF;
		button14->Visible = TF;
		button18->Visible = TF;
		button19->Visible = TF;
		button20->Visible = TF;
		button21->Visible = TF;
	}

	private: System::Void pomocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		HelpBoard^ Aus = gcnew HelpBoard();
		Aus->Show();
	}
private: System::Void standardToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "";
	MainF::Width = 330;
	MainF::Height = 420;
	KeysView(true);

}
private: System::Void finansowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "";
	MainF::Width = 460;
	MainF::Height = 420;
	KeysView(true);
}
private: System::Void graToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MainF::Width = 340;
	MainF::Height = 600;
	this->txtDisplay->Text = "Play ?";
	KeysView(false);

}
private: System::Void przypnijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MainF::FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	TopMost = true;

}
private: System::Void okienkoToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MainF::FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;	
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	if (MessageBox::Show("Close Calculator ? ", "Calculator", MessageBoxButtons::YesNo,
		MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes){
		Application::Exit();
	}
}
private: System::Void MainF_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (MessageBox::Show("Are you sure ?", "Attention",
		MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
	{
		e->Cancel = true;
	}	
}

private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	status = true;
	operation = 'M';
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("0");
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("1");
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("2");
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("3");
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("4");
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("5");
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("6");
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("7");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("8");
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe("9");
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	Unsubscribe(",");
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number= Convert::ToDouble(txtDisplay->Text);
	operation = '+';
	//txtDisplay->Text = "";
	status = true;
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	
		F_Number = Convert::ToDouble(txtDisplay->Text);
		operation = '*';
		status = true;
}
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	operation = '-';
	status = true;
}
private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	operation = '/';
	status = true;
}
private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	S_Number = Convert::ToDouble(txtDisplay->Text);
	
	switch (operation)
	{
	case '+':
		Result = F_Number + S_Number;//add

		break;
	case '-':
		Result = F_Number - S_Number;//subb

		break;
	case '*':
		Result = F_Number * S_Number;//mull

		break;
	case '/':
		if (S_Number == 0){
			MessageBox::Show("Unable to division by Zero", "Error" );
		}

		else
		{
			Result = F_Number / S_Number; //Division	
		}
		break;
	case 'p':
		Result = (F_Number/100)*S_Number;//Procent  
		break;
	case 'B':
		Result = F_Number*(1 + S_Number / 100);//netto->brutto    
		
		break;
	case 'N':
		
		Result= Math::Round(Result = F_Number / (1 + S_Number / 100),2);//brutto->netto
		break;
	case 'M':                                        
		Result = Math::Round(Result = ((S_Number - F_Number) / S_Number) * 100, 2);//Marge
		break;
	case 'X':                                  
		Result = Math::Round(Result = ((S_Number - F_Number) / F_Number) * 100,2);//Mark_up
		break;
	case 't':                                        
		if (S_Number == TestUser){
			this->txtDisplay->Text = "GOOD !!!";
			this->pictureBox1->Image = imageList1->Images[2];		}
		else{
			this->txtDisplay->Text = "BADLY !!!";
			this->pictureBox1->Image = imageList1->Images[1];
		}
		status = true;
		break;
	case 'O':                                       
		if (S_Number == TestUser){
			this->txtDisplay->Text = "GOOD !!!";
			this->pictureBox1->Image = imageList1->Images[2];
		}
		else{
			this->txtDisplay->Text = "BADLY !!!";
			this->pictureBox1->Image = imageList1->Images[1];
		}
		status = true;
		break;
	case 'Z':                                        
		if (S_Number == TestUser){
			this->txtDisplay->Text = "GOOD !!!";
			this->pictureBox1->Image = imageList1->Images[2];
		}
		else{
			this->txtDisplay->Text = "BADLY !!!";
			this->pictureBox1->Image = imageList1->Images[1];
		}
		status = true;
		break;
	default:
		break;
	}
	String^ res;
	status = true;
	if (operation != 't'&& operation != 'O' && operation != 'Z'){
		txtDisplay->Text = Convert::ToString(Result);
		
	}
}
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "";
	F_Number = S_Number = 0;
	status = false;
}
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
	txtDisplay->Text = "";
	}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	Result = Math::Sqrt(F_Number);
	txtDisplay->Text = Convert::ToString(Result);
	status = true;
}
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	Result = F_Number*F_Number;
	txtDisplay->Text = Convert::ToString(Result);
}
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	status = true;  
	operation = 'p'; 
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	status = true;
	operation = 'B';
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	status = true;
	operation = 'N';
}
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
	F_Number = Convert::ToDouble(txtDisplay->Text);
	status = true;
	operation = 'X';
}
		 private: void Random_F(int Start, int Stop, String^ sign){
			 Random^ R_Number = gcnew Random;
			 F_Number = R_Number->Next(Start, Stop);
			 if (sign != "-"){
				 S_Number = R_Number->Next(Start, Stop);
			 }
			 else {
				 S_Number = R_Number->Next(Start,F_Number);
			 }
			 txtDisplay->Text = F_Number + sign + S_Number + "= ?";
			 pictureBox1->Image = imageList1->Images[0];
			 status = true;
			 operation = 't';
 }
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Random_F(1, 20, "+");
	TestUser = F_Number + S_Number;
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	
	Random_F(1, 20, "-");
	TestUser = F_Number - S_Number;
}
private: System::Void but_Click(System::Object^  sender, System::EventArgs^  e) {

		Random_F(1, 20, "*");
		TestUser = F_Number * S_Number;
	}
private: System::Void MainF_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
