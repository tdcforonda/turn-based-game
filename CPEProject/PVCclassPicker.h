#pragma once

#include <iostream>
#include "chooseAttackType.h"
#include "characterData.h"

namespace CPEProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PVCclassPicker
	/// </summary>
	public ref class PVCclassPicker : public System::Windows::Forms::Form
	{
	public:
		PVCclassPicker(void)
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
		~PVCclassPicker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ComboBox^ cbClass1;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cbClass2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ randomButton;

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PVCclassPicker::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->cbClass1 = (gcnew System::Windows::Forms::ComboBox());
			this->cbClass2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->randomButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Onyx", 36, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(326, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(463, 80);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CHOOSE YOUR FIGHTER";
			this->label1->Click += gcnew System::EventHandler(this, &PVCclassPicker::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(45, 169);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(425, 311);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &PVCclassPicker::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(605, 169);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(327, 311);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// cbClass1
			// 
			this->cbClass1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbClass1->FormattingEnabled = true;
			this->cbClass1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Swordsman", L"Mage", L"Palladin", L"Marksman",
					L"Rogue"
			});
			this->cbClass1->Location = System::Drawing::Point(208, 471);
			this->cbClass1->Name = L"cbClass1";
			this->cbClass1->Size = System::Drawing::Size(169, 28);
			this->cbClass1->TabIndex = 3;
			this->cbClass1->SelectedIndexChanged += gcnew System::EventHandler(this, &PVCclassPicker::comboBox1_SelectedIndexChanged);
			// 
			// cbClass2
			// 
			this->cbClass2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbClass2->FormattingEnabled = true;
			this->cbClass2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Swordsman", L"Mage", L"Palladin", L"Marksman",
					L"Rogue"
			});
			this->cbClass2->Location = System::Drawing::Point(703, 471);
			this->cbClass2->Name = L"cbClass2";
			this->cbClass2->Size = System::Drawing::Size(169, 28);
			this->cbClass2->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(291, 428);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Player";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(764, 428);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(79, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Computer";
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Location = System::Drawing::Point(443, 571);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(182, 60);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Ready!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PVCclassPicker::button1_Click);
			// 
			// randomButton
			// 
			this->randomButton->Location = System::Drawing::Point(722, 514);
			this->randomButton->Name = L"randomButton";
			this->randomButton->Size = System::Drawing::Size(133, 26);
			this->randomButton->TabIndex = 8;
			this->randomButton->Text = L"Randomize";
			this->randomButton->UseVisualStyleBackColor = true;
			this->randomButton->Click += gcnew System::EventHandler(this, &PVCclassPicker::randomButton_Click);
			// 
			// PVCclassPicker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1152, 723);
			this->Controls->Add(this->randomButton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->cbClass2);
			this->Controls->Add(this->cbClass1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PVCclassPicker";
			this->Text = L" CPE103L Project";
			this->Load += gcnew System::EventHandler(this, &PVCclassPicker::PVCclassPicker_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PVCclassPicker_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ class1 = cbClass1->Text;
	String^ class2 = cbClass2->Text;

	int rn;

	String^ player;


	if (class1 != "" && class2 != "")
	{

		rn = rand() % 2 + 1;
		if (rn == 1)
		{
			player = "Player's Turn";
			MessageBox::Show("Player will go first.", "COIN FLIP!", MessageBoxButtons::OK, MessageBoxIcon::Information);

			characterData^ pn = gcnew characterData();
			pn->playerNumber(player);

			characterData^ cd = gcnew characterData();
			cd->classChoice(class1, class2);

			chooseAttackType^ attackType = gcnew chooseAttackType();
			attackType-> cd = cd;
			attackType-> pn = pn;
			attackType->Show();
			Hide();
		}
		else
		{
			player = "Computer's Turn";
			MessageBox::Show("Computer will go first.", "COIN FLIP!", MessageBoxButtons::OK, MessageBoxIcon::Information);
			characterData^ cd = gcnew characterData();
			cd->classChoice(class1, class2);

			characterData^ pn = gcnew characterData();
			pn->playerNumber(player);

			chooseAttackType^ attackType = gcnew chooseAttackType();
			attackType->cd = cd;
			attackType->pn = pn;
			attackType->Show();
			Hide();

		}
	}
	else
	{
		MessageBox::Show("Please pick a class for both fighters.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void randomButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int random = rand() % 5 + 1;

	if (random == 1)
	{
		cbClass2->Text = "Swordsman";
	}
	else if (random == 2)
	{
		cbClass2->Text = "Mage";
	}
	else if (random == 3)
	{
		cbClass2->Text = "Palladin";
	}
	else if (random == 4)
	{
		cbClass2->Text = "Marksman";
	}
	else if (random == 5)
	{
		cbClass2->Text = "Rogue";
	}
}
};
}
