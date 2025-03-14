#pragma once
#include "pokaz_zwlekajacych.h"
#include "pokaz_ksiazki.h"

namespace projopr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for zalogowany_admin
	/// </summary>
	public ref class zalogowany_admin : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
		bool zamkniete = true;
	public:
		System::String^ Login;
		zalogowany_admin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		zalogowany_admin(System::String^ initialvalue)
		{
			InitializeComponent();
			Login = initialvalue;
			//
			//TODO: Add the constructor code here
			//
		}
		void SetPreviousForm(Form^ previous)
		{
			previousForm = previous;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~zalogowany_admin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ pokaz_ksiazki;
	private: System::Windows::Forms::Button^ pokaz_zwlekajacych;
	protected:


	private: System::Windows::Forms::Button^ powrot;
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
			this->pokaz_ksiazki = (gcnew System::Windows::Forms::Button());
			this->pokaz_zwlekajacych = (gcnew System::Windows::Forms::Button());
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// pokaz_ksiazki
			// 
			this->pokaz_ksiazki->Location = System::Drawing::Point(87, 45);
			this->pokaz_ksiazki->Name = L"pokaz_ksiazki";
			this->pokaz_ksiazki->Size = System::Drawing::Size(118, 23);
			this->pokaz_ksiazki->TabIndex = 0;
			this->pokaz_ksiazki->Text = L"pokaz_ksiazki";
			this->pokaz_ksiazki->UseVisualStyleBackColor = true;
			this->pokaz_ksiazki->Click += gcnew System::EventHandler(this, &zalogowany_admin::pokaz_ksiazki_Click);
			// 
			// pokaz_zwlekajacych
			// 
			this->pokaz_zwlekajacych->Location = System::Drawing::Point(83, 116);
			this->pokaz_zwlekajacych->Name = L"pokaz_zwlekajacych";
			this->pokaz_zwlekajacych->Size = System::Drawing::Size(122, 23);
			this->pokaz_zwlekajacych->TabIndex = 1;
			this->pokaz_zwlekajacych->Text = L"pokaz_zwlekajacych";
			this->pokaz_zwlekajacych->UseVisualStyleBackColor = true;
			this->pokaz_zwlekajacych->Click += gcnew System::EventHandler(this, &zalogowany_admin::pokaz_zwlekajacych_Click);
			// 
			// powrot
			// 
			this->powrot->Location = System::Drawing::Point(105, 190);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(75, 23);
			this->powrot->TabIndex = 2;
			this->powrot->Text = L"powrot";
			this->powrot->UseVisualStyleBackColor = true;
			this->powrot->Click += gcnew System::EventHandler(this, &zalogowany_admin::powrot_Click);
			// 
			// zalogowany_admin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->powrot);
			this->Controls->Add(this->pokaz_zwlekajacych);
			this->Controls->Add(this->pokaz_ksiazki);
			this->Name = L"zalogowany_admin";
			this->Text = L"zalogowany_admin";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &zalogowany_admin::zalogowany_admin_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void powrot_Click(System::Object^ sender, System::EventArgs^ e) {
		zamkniete = false;
		previousForm->Show();
		this->Close();
	}
	private: System::Void zalogowany_admin_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		previousForm->Show();
	}
private: System::Void pokaz_ksiazki_Click(System::Object^ sender, System::EventArgs^ e) {
	projopr::pokaz_ksiazki^ logowanie = gcnew projopr::pokaz_ksiazki();

	zamkniete = false;
	this->Hide();
	logowanie->SetPreviousForm(this);
	logowanie->Show();
}
private: System::Void pokaz_zwlekajacych_Click(System::Object^ sender, System::EventArgs^ e) {
	projopr::pokaz_zwlekajacych^ logowanie = gcnew projopr::pokaz_zwlekajacych();

	zamkniete = false;
	this->Hide();
	logowanie->SetPreviousForm(this);
	logowanie->Show();
}
};
}
