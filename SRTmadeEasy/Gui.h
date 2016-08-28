#pragma once
#include "Functions.h"
#include <msclr\marshal_cppstd.h>
#include "mylib.h"
#include <iostream>
#include <vector>

namespace SRTmadeEasy {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Gui
	/// </summary>
	public ref class Gui : public System::Windows::Forms::Form
	{
	public:
		Gui(void)
		{
			InitializeComponent();
			InitializeComponent1();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Gui()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  addButton;
	protected:

	private: System::Windows::Forms::TextBox^  fromTextBox;

	private: System::Windows::Forms::Label^  fromLabel;

	private: System::Windows::Forms::Label^  textLabel;
	private: System::Windows::Forms::TextBox^  captionTextBox;
	private: System::Windows::Forms::Label^  toLabel;
	private: System::Windows::Forms::TextBox^  toTextBox;
	private: System::Windows::Forms::Label^  capToEditLabel;
	private: System::Windows::Forms::TextBox^  capEditTextBox;


	private: System::Windows::Forms::Button^  editButton;
	private: System::Windows::Forms::Button^  createButton;
	private: System::Windows::Forms::Label^  addWarningLabel;
	private: System::Windows::Forms::Label^  invalidTimeLabel;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  srtNameLabel;

	private: System::Windows::Forms::TextBox^  srtNameTextBox;
	private: System::Windows::Forms::TextBox^  langCodeTextBox;

	private: System::Windows::Forms::Label^  langCodeLabel;








	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;








	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  invalidLabel;

	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;



		array<System::Windows::Forms::Label^>  ^LabelArr;
	private: System::Windows::Forms::Label^  capStartLabel;
	private: System::Windows::Forms::Label^  capEndLabel;
	private: System::Windows::Forms::Label^  srtFinishedLabel;
			 array<System::Windows::Forms::Label^>  ^LabelArr2;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Gui::typeid));
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->fromTextBox = (gcnew System::Windows::Forms::TextBox());
			this->fromLabel = (gcnew System::Windows::Forms::Label());
			this->textLabel = (gcnew System::Windows::Forms::Label());
			this->captionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->toLabel = (gcnew System::Windows::Forms::Label());
			this->toTextBox = (gcnew System::Windows::Forms::TextBox());
			this->capToEditLabel = (gcnew System::Windows::Forms::Label());
			this->capEditTextBox = (gcnew System::Windows::Forms::TextBox());
			this->editButton = (gcnew System::Windows::Forms::Button());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->addWarningLabel = (gcnew System::Windows::Forms::Label());
			this->invalidTimeLabel = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->srtNameLabel = (gcnew System::Windows::Forms::Label());
			this->srtNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->langCodeTextBox = (gcnew System::Windows::Forms::TextBox());
			this->langCodeLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->invalidLabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->capStartLabel = (gcnew System::Windows::Forms::Label());
			this->capEndLabel = (gcnew System::Windows::Forms::Label());
			this->srtFinishedLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tableLayoutPanel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(141, 198);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(75, 23);
			this->addButton->TabIndex = 0;
			this->addButton->TabStop = false;
			this->addButton->Text = L"Add Caption";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &Gui::button1_Click);
			// 
			// fromTextBox
			// 
			this->fromTextBox->Location = System::Drawing::Point(72, 92);
			this->fromTextBox->Name = L"fromTextBox";
			this->fromTextBox->Size = System::Drawing::Size(100, 20);
			this->fromTextBox->TabIndex = 2;
			this->fromTextBox->Text = L"0";
			this->fromTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// fromLabel
			// 
			this->fromLabel->AutoSize = true;
			this->fromLabel->Location = System::Drawing::Point(77, 70);
			this->fromLabel->Name = L"fromLabel";
			this->fromLabel->Size = System::Drawing::Size(79, 13);
			this->fromLabel->TabIndex = 2;
			this->fromLabel->Text = L"From (seconds)";
			// 
			// textLabel
			// 
			this->textLabel->AutoSize = true;
			this->textLabel->Location = System::Drawing::Point(151, 135);
			this->textLabel->Name = L"textLabel";
			this->textLabel->Size = System::Drawing::Size(67, 13);
			this->textLabel->TabIndex = 3;
			this->textLabel->Text = L"Caption Text";
			// 
			// captionTextBox
			// 
			this->captionTextBox->Location = System::Drawing::Point(32, 159);
			this->captionTextBox->Name = L"captionTextBox";
			this->captionTextBox->Size = System::Drawing::Size(315, 20);
			this->captionTextBox->TabIndex = 4;
			// 
			// toLabel
			// 
			this->toLabel->AutoSize = true;
			this->toLabel->Location = System::Drawing::Point(217, 70);
			this->toLabel->Name = L"toLabel";
			this->toLabel->Size = System::Drawing::Size(75, 13);
			this->toLabel->TabIndex = 6;
			this->toLabel->Text = L"To ( seconds) ";
			// 
			// toTextBox
			// 
			this->toTextBox->Location = System::Drawing::Point(204, 92);
			this->toTextBox->Name = L"toTextBox";
			this->toTextBox->Size = System::Drawing::Size(100, 20);
			this->toTextBox->TabIndex = 3;
			this->toTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// capToEditLabel
			// 
			this->capToEditLabel->AutoSize = true;
			this->capToEditLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->capToEditLabel->Location = System::Drawing::Point(139, 17);
			this->capToEditLabel->Name = L"capToEditLabel";
			this->capToEditLabel->Size = System::Drawing::Size(89, 13);
			this->capToEditLabel->TabIndex = 7;
			this->capToEditLabel->Text = L"Caption #  to Edit";
			// 
			// capEditTextBox
			// 
			this->capEditTextBox->Location = System::Drawing::Point(161, 33);
			this->capEditTextBox->Name = L"capEditTextBox";
			this->capEditTextBox->Size = System::Drawing::Size(43, 20);
			this->capEditTextBox->TabIndex = 1;
			this->capEditTextBox->Text = L"1";
			this->capEditTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->capEditTextBox->TextChanged += gcnew System::EventHandler(this, &Gui::capTextChange);
			// 
			// editButton
			// 
			this->editButton->Location = System::Drawing::Point(141, 198);
			this->editButton->Name = L"editButton";
			this->editButton->Size = System::Drawing::Size(75, 23);
			this->editButton->TabIndex = 11;
			this->editButton->TabStop = false;
			this->editButton->Text = L"Save Edit";
			this->editButton->UseVisualStyleBackColor = true;
			this->editButton->Visible = false;
			this->editButton->Click += gcnew System::EventHandler(this, &Gui::editButton_Click);
			// 
			// createButton
			// 
			this->createButton->BackColor = System::Drawing::SystemColors::Highlight;
			this->createButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createButton->Location = System::Drawing::Point(264, 311);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(84, 37);
			this->createButton->TabIndex = 12;
			this->createButton->TabStop = false;
			this->createButton->Text = L"Create SRT";
			this->createButton->UseVisualStyleBackColor = false;
			this->createButton->Click += gcnew System::EventHandler(this, &Gui::createButton_Click);
			// 
			// addWarningLabel
			// 
			this->addWarningLabel->AutoSize = true;
			this->addWarningLabel->ForeColor = System::Drawing::Color::Red;
			this->addWarningLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->addWarningLabel->Location = System::Drawing::Point(244, 195);
			this->addWarningLabel->Name = L"addWarningLabel";
			this->addWarningLabel->Size = System::Drawing::Size(79, 26);
			this->addWarningLabel->TabIndex = 13;
			this->addWarningLabel->Text = L"Invalid caption \r\nnumber";
			this->addWarningLabel->Visible = false;
			// 
			// invalidTimeLabel
			// 
			this->invalidTimeLabel->AutoSize = true;
			this->invalidTimeLabel->ForeColor = System::Drawing::Color::Red;
			this->invalidTimeLabel->Location = System::Drawing::Point(235, 33);
			this->invalidTimeLabel->Name = L"invalidTimeLabel";
			this->invalidTimeLabel->Size = System::Drawing::Size(88, 26);
			this->invalidTimeLabel->TabIndex = 14;
			this->invalidTimeLabel->Text = L"From time greater\r\n than to time";
			this->invalidTimeLabel->Visible = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(27, 421);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(321, 84);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			// 
			// srtNameLabel
			// 
			this->srtNameLabel->AutoSize = true;
			this->srtNameLabel->Location = System::Drawing::Point(38, 303);
			this->srtNameLabel->Name = L"srtNameLabel";
			this->srtNameLabel->Size = System::Drawing::Size(74, 13);
			this->srtNameLabel->TabIndex = 16;
			this->srtNameLabel->Text = L"SRT file name";
			// 
			// srtNameTextBox
			// 
			this->srtNameTextBox->Location = System::Drawing::Point(29, 323);
			this->srtNameTextBox->Name = L"srtNameTextBox";
			this->srtNameTextBox->Size = System::Drawing::Size(100, 20);
			this->srtNameTextBox->TabIndex = 5;
			// 
			// langCodeTextBox
			// 
			this->langCodeTextBox->Location = System::Drawing::Point(142, 323);
			this->langCodeTextBox->Name = L"langCodeTextBox";
			this->langCodeTextBox->Size = System::Drawing::Size(100, 20);
			this->langCodeTextBox->TabIndex = 6;
			this->langCodeTextBox->Text = L".en_GB";
			this->langCodeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// langCodeLabel
			// 
			this->langCodeLabel->AutoSize = true;
			this->langCodeLabel->Location = System::Drawing::Point(151, 303);
			this->langCodeLabel->Name = L"langCodeLabel";
			this->langCodeLabel->Size = System::Drawing::Size(83, 13);
			this->langCodeLabel->TabIndex = 18;
			this->langCodeLabel->Text = L"Language Code";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				36.12717F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				43.64162F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->pictureBox5, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox6, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox4, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox2, 1, 6);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox3, 1, 8);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox7, 1, 10);
			this->tableLayoutPanel1->Controls->Add(this->pictureBox8, 1, 12);
			this->tableLayoutPanel1->Location = System::Drawing::Point(514, 53);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 14;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 40)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(346, 425);
			this->tableLayoutPanel1->TabIndex = 27;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(128, 63);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(107, 27);
			this->pictureBox5->TabIndex = 28;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(128, 123);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(107, 27);
			this->pictureBox6->TabIndex = 29;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(128, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(107, 27);
			this->pictureBox4->TabIndex = 27;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(128, 183);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(107, 27);
			this->pictureBox2->TabIndex = 30;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(128, 243);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(107, 27);
			this->pictureBox3->TabIndex = 31;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(128, 303);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(107, 27);
			this->pictureBox7->TabIndex = 32;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(128, 363);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(107, 27);
			this->pictureBox8->TabIndex = 33;
			this->pictureBox8->TabStop = false;
			// 
			// invalidLabel
			// 
			this->invalidLabel->AutoSize = true;
			this->invalidLabel->ForeColor = System::Drawing::Color::Red;
			this->invalidLabel->Location = System::Drawing::Point(239, 33);
			this->invalidLabel->Name = L"invalidLabel";
			this->invalidLabel->Size = System::Drawing::Size(107, 13);
			this->invalidLabel->TabIndex = 28;
			this->invalidLabel->Text = L"Invalid from or to time";
			this->invalidLabel->Visible = false;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(445, 98);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 7;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 60)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(77, 425);
			this->tableLayoutPanel2->TabIndex = 30;
			// 
			// capStartLabel
			// 
			this->capStartLabel->AutoSize = true;
			this->capStartLabel->Location = System::Drawing::Point(520, 20);
			this->capStartLabel->Name = L"capStartLabel";
			this->capStartLabel->Size = System::Drawing::Size(94, 13);
			this->capStartLabel->TabIndex = 31;
			this->capStartLabel->Text = L"Caption Start Time";
			// 
			// capEndLabel
			// 
			this->capEndLabel->AutoSize = true;
			this->capEndLabel->Location = System::Drawing::Point(774, 20);
			this->capEndLabel->Name = L"capEndLabel";
			this->capEndLabel->Size = System::Drawing::Size(91, 13);
			this->capEndLabel->TabIndex = 32;
			this->capEndLabel->Text = L"Caption End Time";
			// 
			// srtFinishedLabel
			// 
			this->srtFinishedLabel->AutoSize = true;
			this->srtFinishedLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->srtFinishedLabel->ForeColor = System::Drawing::Color::Red;
			this->srtFinishedLabel->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
			this->srtFinishedLabel->Location = System::Drawing::Point(140, 148);
			this->srtFinishedLabel->Name = L"srtFinishedLabel";
			this->srtFinishedLabel->Size = System::Drawing::Size(673, 138);
			this->srtFinishedLabel->TabIndex = 33;
			this->srtFinishedLabel->Text = L"Your SRT file is now in the folder \r\nwhere you installed SRT Made Easy.\r\nOpen wit"
				L"h Notepad or similar.";
			this->srtFinishedLabel->Visible = false;
			// 
			// Gui
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(922, 541);
			this->Controls->Add(this->srtFinishedLabel);
			this->Controls->Add(this->capEndLabel);
			this->Controls->Add(this->capStartLabel);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->invalidLabel);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->langCodeTextBox);
			this->Controls->Add(this->langCodeLabel);
			this->Controls->Add(this->srtNameTextBox);
			this->Controls->Add(this->srtNameLabel);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->invalidTimeLabel);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->addWarningLabel);
			this->Controls->Add(this->editButton);
			this->Controls->Add(this->capEditTextBox);
			this->Controls->Add(this->capToEditLabel);
			this->Controls->Add(this->toLabel);
			this->Controls->Add(this->toTextBox);
			this->Controls->Add(this->captionTextBox);
			this->Controls->Add(this->textLabel);
			this->Controls->Add(this->fromLabel);
			this->Controls->Add(this->fromTextBox);
			this->Controls->Add(this->addButton);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Gui";
			this->Text = L"SRT Made Easy by The Digiterati";
			this->Load += gcnew System::EventHandler(this, &Gui::Gui_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tableLayoutPanel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void InitializeComponent1(void)
		{
			//create the label array
			this->LabelArr2 = gcnew array<System::Windows::Forms::Label^>(7);
			int i = 0;
			while (i < 7)	//number of labels
			{
				this->LabelArr2[i] = (gcnew System::Windows::Forms::Label());
				for (int x = 0; x < 1; x++) {
					for (int y = 0; y < 7; y++) {
						this->LabelArr2[i] = (gcnew System::Windows::Forms::Label());
						this->tableLayoutPanel2->Controls->Add(this->LabelArr2[i], x, y);
						this->LabelArr2[i]->AutoSize = true;
						this->LabelArr2[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
							static_cast<System::Byte>(0)));
						this->LabelArr2[i]->ForeColor = System::Drawing::Color::DodgerBlue;
						this->LabelArr2[i]->Location = System::Drawing::Point(2, 33);
						this->LabelArr2[i]->Size = System::Drawing::Size(65, 13);
						this->LabelArr2[i]->TabIndex = 29;


						i++;

					}
				}
			}

			//create the label array
			this->LabelArr = gcnew array<System::Windows::Forms::Label^>(21);
			i = 0;
			while (i < 21)	//number of labels
			{
				this->LabelArr[i] = (gcnew System::Windows::Forms::Label());
				for (int x = 0; x < 3; x++) {
					for (int y = 0; y < 14; y++) {
						if ((x == 0) || (x == 2 && ((y & 1) == 0))) {	// if x == 0 or if y is even
							this->LabelArr[i] = (gcnew System::Windows::Forms::Label());
							this->tableLayoutPanel1->Controls->Add(this->LabelArr[i], x, y);
							this->LabelArr[i]->AutoSize = true;
							this->LabelArr[i]->Location = System::Drawing::Point(1, 0);
							this->LabelArr[i]->Size = System::Drawing::Size(35, 13);
							this->LabelArr[i]->TabIndex = 0;
							this->LabelArr[i]->TextAlign = System::Drawing::ContentAlignment::TopLeft;
							this->LabelArr[i]->Anchor = System::Windows::Forms::AnchorStyles::None;
							this->LabelArr[i]->ForeColor = System::Drawing::Color::DodgerBlue;
							this->LabelArr[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
								static_cast<System::Byte>(0)));
							if (((x == 0) && (y & 1) == 1)) {	//if looking at caption label
								this->tableLayoutPanel1->SetColumnSpan(this->LabelArr[i], 3);
								this->LabelArr[i]->ForeColor = System::Drawing::Color::Black;
								this->LabelArr[i]->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
									static_cast<System::Byte>(0)));
							}
							i++;
						}
					}
				}
			}
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int capNum;
		capNum = System::Convert::ToInt32(capEditTextBox->Text);

		int intFromTime = 0;
		int intToTime = 0;

		try {
			intFromTime = System::Convert::ToInt32(fromTextBox->Text);
			intToTime = System::Convert::ToInt32(toTextBox->Text);

			if (intFromTime < intToTime) {
				if (capNum - 1 == captions.size()) {	//make sure its a new caption
														//	converting text from textbox to std::string
					this->addWarningLabel->Visible = false;
					this->invalidTimeLabel->Visible = false;
					msclr::interop::marshal_context context;
					std::string fromTime = context.marshal_as<std::string>(fromTextBox->Text);
					msclr::interop::marshal_context context2;
					std::string toTime = context2.marshal_as<std::string>(toTextBox->Text);
					msclr::interop::marshal_context context3;
					std::string caption = context3.marshal_as<std::string>(captionTextBox->Text);
					msclr::interop::marshal_context context4;
					std::string capToEdit = context4.marshal_as<std::string>(capEditTextBox->Text);
					int currentCap = textCap(fromTime, toTime, caption, capToEdit);
					capEditTextBox->Text = System::Convert::ToString(currentCap);
					toTextBox->Text = "";
					captionTextBox->Text = "";
					//	std::vector<std::string> lastCaption = captions[currentCap - 2];
					//	String^ strToTime = gcnew String(lastCaption[2].c_str());

					fromTextBox->Text = System::Convert::ToString(toTimes[currentCap - 2]);
				}
				else {
					this->addWarningLabel->Visible = true;
				}
			}
			else {
				this->invalidTimeLabel->Visible = true;
			}
		}
		catch(...){
			this->invalidLabel->Visible = true;
		}



 ;
	}

private: System::Void capTextChange(System::Object^  sender, System::EventArgs^  e) {
	//	capToEditLabel->Text = "it worked";
	this->srtFinishedLabel->Visible = false;
	this->invalidLabel->Visible = false;
	this->addWarningLabel->Visible = false;
	this->invalidTimeLabel->Visible = false;
	msclr::interop::marshal_context context4;
	std::string capToEdit = context4.marshal_as<std::string>(capEditTextBox->Text);
	//check to see if capNum only contains numbers
	bool has_only_digits = true;
	for (size_t n = 0; n < capToEdit.length(); n++)
	{
		if (!isdigit(capToEdit[n]))
		{
			has_only_digits = false;
			break;
		}
	}

	if (has_only_digits && capEditTextBox->Text != "" && capEditTextBox->Text != "0") {
		int capNum;
		capNum = System::Convert::ToInt32(capEditTextBox->Text);

		if (capNum <= captions.size()) {		//check to see if caption exists	EDIT mode
			this->editButton->Visible = true;
			this->addButton->Visible = false;
			std::vector<std::string> singleCaption = captions[capNum - 1]; //get caption to edit
			String^ fromTime = gcnew String(singleCaption[1].c_str());
			String^ toTime = gcnew String(singleCaption[2].c_str());
			String^ caption = gcnew String(singleCaption[3].c_str());



			fromTextBox->Text = fromTime;
			toTextBox->Text = toTime;
			captionTextBox->Text = caption;
		}

		if (capNum - 1 == captions.size()) {	//if adding new caption	ADD mode
			this->editButton->Visible = false;
			this->addButton->Visible = true;
			std::vector<std::string> singleCaption = captions[capNum - 2]; //get previous caption 
			fromTextBox->Text = gcnew String(singleCaption[2].c_str());
			toTextBox->Text = "";
			captionTextBox->Text = "";
		}
	}



	int i = 0;
	for (std::vector<std::vector<std::string>>::reverse_iterator iter = captions.rbegin();iter != captions.rend(); ++iter) {
		if (i < 7) {
			std::vector<std::string> singleCaption = *iter;
			String^ fromTime = gcnew String(singleCaption[1].c_str());
			String^ toTime = gcnew String(singleCaption[2].c_str());
			String^ caption = gcnew String(singleCaption[3].c_str());

			std::string strcaptionNumber = "Caption: " + singleCaption[0];
			String^ captionNumber = gcnew String(strcaptionNumber.c_str());

			LabelArr2[i]->Text = captionNumber;
			LabelArr[i * 2] ->Text = fromTime;
			LabelArr[i + 14] ->Text = toTime;
			LabelArr[(i * 2) + 1] ->Text = caption;
		}
		i++;
	}

}


	private: System::Void Gui_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void createButton_Click(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	std::string fileName = context.marshal_as<std::string>(srtNameTextBox->Text);
	msclr::interop::marshal_context context2;
	std::string langCode = context.marshal_as<std::string>(langCodeTextBox->Text);
	writeSRT(fileName, langCode);
	this->srtFinishedLabel->Visible = true;
}
private: System::Void editButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int capNum;
	capNum = System::Convert::ToInt32(capEditTextBox->Text);

	int intFromTime = System::Convert::ToInt32(fromTextBox->Text);
	int intToTime = System::Convert::ToInt32(toTextBox->Text);

	if (intFromTime < intToTime) {
		if (capNum <= captions.size()) {		//check to see if caption exists
			this->addWarningLabel->Visible = false;
			this->invalidTimeLabel->Visible = false;
			std::vector<std::string> singleCaption;// = captions[capNum - 1]; //get caption to edit


			msclr::interop::marshal_context context4;
			singleCaption.push_back(context4.marshal_as<std::string>(capEditTextBox->Text));
			msclr::interop::marshal_context context;
			singleCaption.push_back(context.marshal_as<std::string>(fromTextBox->Text));
			msclr::interop::marshal_context context2;
			singleCaption.push_back(context2.marshal_as<std::string>(toTextBox->Text));
			msclr::interop::marshal_context context3;
			singleCaption.push_back(context3.marshal_as<std::string>(captionTextBox->Text));

			captions[capNum - 1] = singleCaption;
			capEditTextBox->Text = System::Convert::ToString(captions.size() + 1);	//return to final caption
		}
	}
	else {
		this->invalidTimeLabel->Visible = true;
	}
	
}

};
}
