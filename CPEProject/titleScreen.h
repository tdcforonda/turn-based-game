#pragma once

#include "PVCclassPicker.h"

namespace CPEProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for titleScreen
	/// </summary>
	public ref class titleScreen : public System::Windows::Forms::Form
	{
	public:
		titleScreen(void)
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
		~titleScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ title;
	private: System::Windows::Forms::Button^ startGame;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(titleScreen::typeid));
			this->title = (gcnew System::Windows::Forms::Label());
			this->startGame = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// title
			// 
			this->title->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->title->AutoSize = true;
			this->title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::DarkRed;
			this->title->Location = System::Drawing::Point(198, 204);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(742, 108);
			this->title->TabIndex = 0;
			this->title->Text = L"RED QUARTER";
			this->title->Click += gcnew System::EventHandler(this, &titleScreen::title_Click);
			// 
			// startGame
			// 
			this->startGame->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->startGame->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->startGame->ForeColor = System::Drawing::Color::Blue;
			this->startGame->Location = System::Drawing::Point(188, 461);
			this->startGame->Name = L"startGame";
			this->startGame->Size = System::Drawing::Size(247, 51);
			this->startGame->TabIndex = 1;
			this->startGame->Text = L"START GAME";
			this->startGame->UseVisualStyleBackColor = true;
			this->startGame->Click += gcnew System::EventHandler(this, &titleScreen::startGame_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(666, 447);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(247, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &titleScreen::button1_Click);
			// 
			// titleScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1175, 742);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->startGame);
			this->Controls->Add(this->title);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"titleScreen";
			this->Text = L"CPE103L Project";
			this->Load += gcnew System::EventHandler(this, &titleScreen::titleScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void startGame_Click(System::Object^ sender, System::EventArgs^ e) {
		PVCclassPicker^ chooseClass = gcnew PVCclassPicker();
		chooseClass->Show();
		Hide();
	}
	private: System::Void titleScreen_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void title_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
