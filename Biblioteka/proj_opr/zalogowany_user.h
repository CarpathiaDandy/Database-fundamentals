#pragma once

#include <string>
#include <mysql.h>
#include <msclr/marshal_cppstd.h>
#include "moje_wypozyczenia.h"
#include "wypozycz_ksiazke.h"
#include "ocen_ksiazke.h"


namespace projopr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//user uzytkownik2;

	/// <summary>
	/// Summary for zalogowany_user
	/// </summary>
	public ref class zalogowany_user : public System::Windows::Forms::Form
	{
	private:
		bool zamkniete = true;
	private: System::Windows::Forms::Button^ ocen_ksiazke;
		   Form^ previousForm;
	public:
		System::String^ Login;
		zalogowany_user(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		zalogowany_user(System::String^ initialValue)
		{
			InitializeComponent();
			Login = initialValue;
		}
		void SetPreviousForm(Form^ previous)
		{
			previousForm = previous;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~zalogowany_user()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ moje_wypozyczenia;
	protected:

	private: System::Windows::Forms::Button^ wypozycz_ksiazke;
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
			this->moje_wypozyczenia = (gcnew System::Windows::Forms::Button());
			this->wypozycz_ksiazke = (gcnew System::Windows::Forms::Button());
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->ocen_ksiazke = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// moje_wypozyczenia
			// 
			this->moje_wypozyczenia->Location = System::Drawing::Point(164, 70);
			this->moje_wypozyczenia->Name = L"moje_wypozyczenia";
			this->moje_wypozyczenia->Size = System::Drawing::Size(205, 23);
			this->moje_wypozyczenia->TabIndex = 0;
			this->moje_wypozyczenia->Text = L"moje_wypozyczenia";
			this->moje_wypozyczenia->UseVisualStyleBackColor = true;
			this->moje_wypozyczenia->Click += gcnew System::EventHandler(this, &zalogowany_user::moje_wypozyczenia_Click);
			// 
			// wypozycz_ksiazke
			// 
			this->wypozycz_ksiazke->Location = System::Drawing::Point(164, 131);
			this->wypozycz_ksiazke->Name = L"wypozycz_ksiazke";
			this->wypozycz_ksiazke->Size = System::Drawing::Size(178, 23);
			this->wypozycz_ksiazke->TabIndex = 1;
			this->wypozycz_ksiazke->Text = L"wypozycz_ksiazke";
			this->wypozycz_ksiazke->UseVisualStyleBackColor = true;
			this->wypozycz_ksiazke->Click += gcnew System::EventHandler(this, &zalogowany_user::wypozycz_ksiazke_Click);
			// 
			// powrot
			// 
			this->powrot->Location = System::Drawing::Point(191, 321);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(75, 23);
			this->powrot->TabIndex = 2;
			this->powrot->Text = L"powrot";
			this->powrot->UseVisualStyleBackColor = true;
			this->powrot->Click += gcnew System::EventHandler(this, &zalogowany_user::powrot_Click);
			// 
			// ocen_ksiazke
			// 
			this->ocen_ksiazke->Location = System::Drawing::Point(191, 208);
			this->ocen_ksiazke->Name = L"ocen_ksiazke";
			this->ocen_ksiazke->Size = System::Drawing::Size(142, 23);
			this->ocen_ksiazke->TabIndex = 3;
			this->ocen_ksiazke->Text = L"ocen_ksiazke";
			this->ocen_ksiazke->UseVisualStyleBackColor = true;
			this->ocen_ksiazke->Click += gcnew System::EventHandler(this, &zalogowany_user::ocen_ksiazke_Click);
			// 
			// zalogowany_user
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(409, 395);
			this->Controls->Add(this->ocen_ksiazke);
			this->Controls->Add(this->powrot);
			this->Controls->Add(this->wypozycz_ksiazke);
			this->Controls->Add(this->moje_wypozyczenia);
			this->Name = L"zalogowany_user";
			this->Text = L"zalogowany_user";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &zalogowany_user::zalogowany_user_FormClosing);
			this->Load += gcnew System::EventHandler(this, &zalogowany_user::zalogowany_user_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void zalogowany_user_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void zalogowany_user_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (zamkniete==true)
		{
			previousForm->Show();
		}
	}
	private: System::Void powrot_Click(System::Object^ sender, System::EventArgs^ e) {
		zamkniete = false;
		previousForm->Show();
		this->Close();
	}
	private: System::Void moje_wypozyczenia_Click(System::Object^ sender, System::EventArgs^ e) {
	projopr::moje_wypozyczenia^ logowanie = gcnew projopr::moje_wypozyczenia(Login);

	this->Hide();
	logowanie->SetPreviousForm(this);
	logowanie->Show();
}
private: System::Void wypozycz_ksiazke_Click(System::Object^ sender, System::EventArgs^ e) {
	projopr::wypozycz_ksiazke^ logowanie = gcnew projopr::wypozycz_ksiazke(Login);

	this->Hide();
	logowanie->SetPreviousForm(this);
	logowanie->Show();
}
private: System::Void ocen_ksiazke_Click(System::Object^ sender, System::EventArgs^ e) {
	projopr::ocen_ksiazke^ logowanie = gcnew projopr::ocen_ksiazke(Login);

	this->Hide();
	logowanie->SetPreviousForm(this);
	logowanie->Show();
}
};
}
