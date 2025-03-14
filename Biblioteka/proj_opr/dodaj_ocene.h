#pragma once
#include <string>
#include <mysql.h>
#include <msclr/marshal_cppstd.h>

namespace projopr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for dodaj_ocene
	/// </summary>
	public ref class dodaj_ocene : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
		bool zamkniete = true;
	public:
		System::String^ Login;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Button^ zapisz_ocene;
	private: System::Windows::Forms::Label^ wiadomosci;
	public:
		int Tytul;
		dodaj_ocene(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		dodaj_ocene(System::String^ initialValue1, int initialValue2)
		{
			InitializeComponent();
			Login = initialValue1;
			Tytul = initialValue2;
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
		~dodaj_ocene()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ podaj_ocene;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ powrot;


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
			this->podaj_ocene = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->zapisz_ocene = (gcnew System::Windows::Forms::Button());
			this->wiadomosci = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			this->SuspendLayout();
			// 
			// podaj_ocene
			// 
			this->podaj_ocene->AutoSize = true;
			this->podaj_ocene->Location = System::Drawing::Point(188, 151);
			this->podaj_ocene->Name = L"podaj_ocene";
			this->podaj_ocene->Size = System::Drawing::Size(69, 13);
			this->podaj_ocene->TabIndex = 1;
			this->podaj_ocene->Text = L"podaj_ocene";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(223, 285);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 2;
			// 
			// powrot
			// 
			this->powrot->Location = System::Drawing::Point(182, 371);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(75, 23);
			this->powrot->TabIndex = 3;
			this->powrot->Text = L"powrot";
			this->powrot->UseVisualStyleBackColor = true;
			this->powrot->Click += gcnew System::EventHandler(this, &dodaj_ocene::powrot_Click);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->DecimalPlaces = 1;
			this->numericUpDown2->Location = System::Drawing::Point(169, 226);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 5;
			// 
			// zapisz_ocene
			// 
			this->zapisz_ocene->Location = System::Drawing::Point(182, 285);
			this->zapisz_ocene->Name = L"zapisz_ocene";
			this->zapisz_ocene->Size = System::Drawing::Size(126, 23);
			this->zapisz_ocene->TabIndex = 6;
			this->zapisz_ocene->Text = L"zapisz_ocene";
			this->zapisz_ocene->UseVisualStyleBackColor = true;
			this->zapisz_ocene->Click += gcnew System::EventHandler(this, &dodaj_ocene::zapisz_ocene_Click);
			// 
			// wiadomosci
			// 
			this->wiadomosci->AutoSize = true;
			this->wiadomosci->Location = System::Drawing::Point(226, 330);
			this->wiadomosci->Name = L"wiadomosci";
			this->wiadomosci->Size = System::Drawing::Size(0, 13);
			this->wiadomosci->TabIndex = 7;
			// 
			// dodaj_ocene
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(480, 457);
			this->Controls->Add(this->wiadomosci);
			this->Controls->Add(this->zapisz_ocene);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->powrot);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->podaj_ocene);
			this->Name = L"dodaj_ocene";
			this->Text = L"dodaj_ocene";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &dodaj_ocene::dodaj_ocene_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void zapisz_ocene_Click(System::Object^ sender, System::EventArgs^ e) {
		MYSQL mysql;
		mysql_init(&mysql); // incjalizacja

		if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
		{
			//nie wiem po co to ale bez tego nie dziala
			System::String^ Login2 = Login;
			std::string Login_zwykly = marshal_as<std::string>(Login2);
			// Duzo zabaway ze zmiana zmiennoprzecionkowego na stringa.
			System::Decimal decimalValue = numericUpDown2->Value; 
			System::String^ stringValue = decimalValue.ToString();
			std::string Ocena = marshal_as<std::string>(stringValue);
			std::string Tytul2 = std::to_string(Tytul);
			std::string zapytanie = "insert into biblioteka.oceny_ksiazek values(default, '"+Login_zwykly+"', '"+Ocena+"', "+ Tytul2 +")";
			if (mysql_query(&mysql, zapytanie.c_str()) == 0)
			{
				this->wiadomosci->Text = "dodano ocene";
			}
			else
			{
				this->wiadomosci->Text = "mysql_query() failed";
			}
		}
		mysql_close(&mysql);
	}
private: System::Void dodaj_ocene_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (zamkniete == true)
	{
		previousForm->Show();
	}
}
private: System::Void powrot_Click(System::Object^ sender, System::EventArgs^ e) {
	zamkniete = false;
	this->Close();
	previousForm->Show();
}
};
}
