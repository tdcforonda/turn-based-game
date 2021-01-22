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
	/// Summary for PVPclassPicker
	/// </summary>
	public ref class PVPclassPicker : public System::Windows::Forms::Form
	{
	public:
		PVPclassPicker(void)
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
		~PVPclassPicker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ cbClass1;
	private: System::Windows::Forms::ComboBox^ cbClass2;


	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PVPclassPicker::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cbClass1 = (gcnew System::Windows::Forms::ComboBox());
			this->cbClass2 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"HelveticaNeueLT Std", 26, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MidnightBlue;
			this->label1->Location = System::Drawing::Point(139, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(661, 124);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CHOOSE YOUR FIGHTER\r\n\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &PVPclassPicker::label1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(243, 381);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 20);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Player 1";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(615, 381);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Player 2";
			// 
			// cbClass1
			// 
			this->cbClass1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->cbClass1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbClass1->FormattingEnabled = true;
			this->cbClass1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Swordsman", L"Mage", L"Palladin", L"Marksman",
					L"Rogue"
			});
			this->cbClass1->Location = System::Drawing::Point(212, 430);
			this->cbClass1->Name = L"cbClass1";
			this->cbClass1->Size = System::Drawing::Size(121, 28);
			this->cbClass1->TabIndex = 5;
			this->cbClass1->SelectedIndexChanged += gcnew System::EventHandler(this, &PVPclassPicker::comboBox1_SelectedIndexChanged);
			// 
			// cbClass2
			// 
			this->cbClass2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cbClass2->FormattingEnabled = true;
			this->cbClass2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Swordsman", L"Palladin", L"Marksman", L"Rogue" });
			this->cbClass2->Location = System::Drawing::Point(589, 430);
			this->cbClass2->Name = L"cbClass2";
			this->cbClass2->Size = System::Drawing::Size(121, 28);
			this->cbClass2->TabIndex = 6;
			this->cbClass2->SelectedIndexChanged += gcnew System::EventHandler(this, &PVPclassPicker::cbClass2_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(150, 181);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(242, 193);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(532, 181);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(208, 193);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(401, 496);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(144, 54);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Ready!";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PVPclassPicker::button1_Click);
			// 
			// PVPclassPicker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(921, 626);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cbClass2);
			this->Controls->Add(this->cbClass1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"PVPclassPicker";
			this->Text = L"CPE103L Project";
			this->Load += gcnew System::EventHandler(this, &PVPclassPicker::PVPclassPicker_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//cbClass1->SelectedIndex = 0;
	}
	private: System::Void cbClass2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//cbClass2->SelectedIndex = 0;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		String^ class1 = cbClass1->Text;
		int^ index = cbClass1->SelectedIndex;

		String^ class2 = cbClass2->Text;
		int^ index2 = cbClass2->SelectedIndex;

		int^ rn;

		String^ player;


		if (class1 != "" && class2 != "")
		{
			rn = rand() % 2 + 1;
			if (rn == 1)
			{
				player = "Player 1's Turn";
				MessageBox::Show("Player 1 will go first.", "COIN FLIP!", MessageBoxButtons::OK, MessageBoxIcon::Information);

				characterData^ pn = gcnew characterData();
				pn->playerNumber(player);

				characterData^ cd = gcnew characterData();
				cd->classChoice(class1, class2);

				chooseAttackType^ attackType = gcnew chooseAttackType();
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
private: System::Void PVPclassPicker_Load(System::Object^ sender, System::EventArgs^ e) { 
}
};
}
