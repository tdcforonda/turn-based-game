#pragma once

#include "PVPclassPicker.h"

namespace CPEProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for gameMode
	/// </summary>
	public ref class gameMode : public System::Windows::Forms::Form
	{
	public:
		gameMode(void)
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
		~gameMode()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelChoose;
	protected:

	protected:
	private: System::Windows::Forms::Button^ PVPbutton;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(gameMode::typeid));
			this->labelChoose = (gcnew System::Windows::Forms::Label());
			this->PVPbutton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelChoose
			// 
			this->labelChoose->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->labelChoose->AutoSize = true;
			this->labelChoose->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 28, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelChoose->ForeColor = System::Drawing::Color::MediumBlue;
			this->labelChoose->Location = System::Drawing::Point(351, 98);
			this->labelChoose->Name = L"labelChoose";
			this->labelChoose->Size = System::Drawing::Size(585, 58);
			this->labelChoose->TabIndex = 0;
			this->labelChoose->Text = L"CHOOSE GAME MODE";
			// 
			// PVPbutton
			// 
			this->PVPbutton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->PVPbutton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PVPbutton.Image")));
			this->PVPbutton->Location = System::Drawing::Point(361, 199);
			this->PVPbutton->Name = L"PVPbutton";
			this->PVPbutton->Size = System::Drawing::Size(562, 470);
			this->PVPbutton->TabIndex = 1;
			this->PVPbutton->UseVisualStyleBackColor = true;
			this->PVPbutton->Click += gcnew System::EventHandler(this, &gameMode::PVPbutton_Click);
			// 
			// gameMode
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1474, 876);
			this->Controls->Add(this->PVPbutton);
			this->Controls->Add(this->labelChoose);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"gameMode";
			this->Text = L"CPE103L Project";
			this->Load += gcnew System::EventHandler(this, &gameMode::gameMode_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void gameMode_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PVPbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		PVPclassPicker^ classPicker = gcnew PVPclassPicker();
		classPicker ->Show();
		Hide();
	}
private: System::Void PVCbutton_Click(System::Object^ sender, System::EventArgs^ e) {

}
};
}
