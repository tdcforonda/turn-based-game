#pragma once


#include "characterData.h"

namespace CPEProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for characterDatahidden
	/// </summary>
	public ref class characterDatahidden : public System::Windows::Forms::Form
	{
	public:
		characterData^ cd = gcnew characterData();

	public:
		characterDatahidden(void)
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
		~characterDatahidden()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ classType1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ classType2;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->classType1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->classType2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(93, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Player 1 CT:";
			// 
			// classType1
			// 
			this->classType1->AutoSize = true;
			this->classType1->Location = System::Drawing::Point(61, 56);
			this->classType1->Name = L"classType1";
			this->classType1->Size = System::Drawing::Size(82, 20);
			this->classType1->TabIndex = 1;
			this->classType1->Text = L"show here";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 115);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Player 2 CT:";
			// 
			// classType2
			// 
			this->classType2->AutoSize = true;
			this->classType2->Location = System::Drawing::Point(61, 161);
			this->classType2->Name = L"classType2";
			this->classType2->Size = System::Drawing::Size(82, 20);
			this->classType2->TabIndex = 3;
			this->classType2->Text = L"show here";
			// 
			// characterDatahidden
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(709, 403);
			this->Controls->Add(this->classType2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->classType1);
			this->Controls->Add(this->label1);
			this->Name = L"characterDatahidden";
			this->Text = L"characterDatahidden";
			this->Load += gcnew System::EventHandler(this, &characterDatahidden::characterDatahidden_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void characterDatahidden_Load(System::Object^ sender, System::EventArgs^ e) {	
		classType1->Text = cd->getcharacterClass1();
		classType2->Text = cd->getCharacterClass2();
	}
	};
}
