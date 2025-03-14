#pragma once
#include <string>
#include <mysql.h>
#include <msclr/marshal_cppstd.h>
#include "dodaj_ocene.h"

namespace projopr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for moje_wypozyczenia
	/// </summary>
	public ref class moje_wypozyczenia : public System::Windows::Forms::Form
	{
	private:
		bool zamkniete = true;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ pokaz_nieoddane;
	private: System::Windows::Forms::Button^ pokaz_oddane;
	private: System::Windows::Forms::Button^ pokaz_wszystkie;
	private: System::Windows::Forms::Button^ dodaj_ocene;
	private: System::Windows::Forms::Button^ powrot;

	private: System::Windows::Forms::ColumnHeader^ Tytul;
	private: System::Windows::Forms::ColumnHeader^ Autor;
	private: System::Windows::Forms::ColumnHeader^ Do_kiedy_wypozyczona;
		   Form^ previousForm;
	private: System::Windows::Forms::Label^ wiadomosci;
	private: System::Windows::Forms::Button^ zwroc_ksiazke;

	public:
		System::String^ Login;
		moje_wypozyczenia(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		moje_wypozyczenia(System::String^ initialValue)
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
		~moje_wypozyczenia()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Tytul = (gcnew System::Windows::Forms::ColumnHeader());
			this->Autor = (gcnew System::Windows::Forms::ColumnHeader());
			this->Do_kiedy_wypozyczona = (gcnew System::Windows::Forms::ColumnHeader());
			this->pokaz_nieoddane = (gcnew System::Windows::Forms::Button());
			this->pokaz_oddane = (gcnew System::Windows::Forms::Button());
			this->pokaz_wszystkie = (gcnew System::Windows::Forms::Button());
			this->dodaj_ocene = (gcnew System::Windows::Forms::Button());
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->wiadomosci = (gcnew System::Windows::Forms::Label());
			this->zwroc_ksiazke = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Tytul, this->Autor,
					this->Do_kiedy_wypozyczona
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(137, 65);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(375, 255);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Tytul
			// 
			this->Tytul->Text = L"Tytul";
			this->Tytul->Width = 111;
			// 
			// Autor
			// 
			this->Autor->Text = L"Autor";
			this->Autor->Width = 96;
			// 
			// Do_kiedy_wypozyczona
			// 
			this->Do_kiedy_wypozyczona->Text = L"Do_kiedy_wypozyczona";
			this->Do_kiedy_wypozyczona->Width = 107;
			// 
			// pokaz_nieoddane
			// 
			this->pokaz_nieoddane->Location = System::Drawing::Point(127, 348);
			this->pokaz_nieoddane->Name = L"pokaz_nieoddane";
			this->pokaz_nieoddane->Size = System::Drawing::Size(110, 23);
			this->pokaz_nieoddane->TabIndex = 1;
			this->pokaz_nieoddane->Text = L"pokaz_nieoddane";
			this->pokaz_nieoddane->UseVisualStyleBackColor = true;
			this->pokaz_nieoddane->Click += gcnew System::EventHandler(this, &moje_wypozyczenia::pokaz_nieoddane_Click);
			// 
			// pokaz_oddane
			// 
			this->pokaz_oddane->Location = System::Drawing::Point(263, 348);
			this->pokaz_oddane->Name = L"pokaz_oddane";
			this->pokaz_oddane->Size = System::Drawing::Size(104, 23);
			this->pokaz_oddane->TabIndex = 2;
			this->pokaz_oddane->Text = L"pokaz_oddane";
			this->pokaz_oddane->UseVisualStyleBackColor = true;
			this->pokaz_oddane->Click += gcnew System::EventHandler(this, &moje_wypozyczenia::pokaz_oddane_Click);
			// 
			// pokaz_wszystkie
			// 
			this->pokaz_wszystkie->Location = System::Drawing::Point(401, 348);
			this->pokaz_wszystkie->Name = L"pokaz_wszystkie";
			this->pokaz_wszystkie->Size = System::Drawing::Size(101, 23);
			this->pokaz_wszystkie->TabIndex = 3;
			this->pokaz_wszystkie->Text = L"pokaz_wszystkie";
			this->pokaz_wszystkie->UseVisualStyleBackColor = true;
			this->pokaz_wszystkie->Click += gcnew System::EventHandler(this, &moje_wypozyczenia::pokaz_wszystkie_Click);
			// 
			// dodaj_ocene
			// 
			this->dodaj_ocene->Location = System::Drawing::Point(162, 425);
			this->dodaj_ocene->Name = L"dodaj_ocene";
			this->dodaj_ocene->Size = System::Drawing::Size(75, 23);
			this->dodaj_ocene->TabIndex = 4;
			this->dodaj_ocene->Text = L"dodaj_ocene";
			this->dodaj_ocene->UseVisualStyleBackColor = true;
			this->dodaj_ocene->Click += gcnew System::EventHandler(this, &moje_wypozyczenia::dodaj_ocene_Click);
			// 
			// powrot
			// 
			this->powrot->Location = System::Drawing::Point(401, 425);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(75, 23);
			this->powrot->TabIndex = 5;
			this->powrot->Text = L"powrot";
			this->powrot->UseVisualStyleBackColor = true;
			this->powrot->Click += gcnew System::EventHandler(this, &moje_wypozyczenia::powrot_Click);
			// 
			// wiadomosci
			// 
			this->wiadomosci->AutoSize = true;
			this->wiadomosci->Location = System::Drawing::Point(311, 395);
			this->wiadomosci->Name = L"wiadomosci";
			this->wiadomosci->Size = System::Drawing::Size(0, 13);
			this->wiadomosci->TabIndex = 6;
			// 
			// zwroc_ksiazke
			// 
			this->zwroc_ksiazke->Location = System::Drawing::Point(263, 425);
			this->zwroc_ksiazke->Name = L"zwroc_ksiazke";
			this->zwroc_ksiazke->Size = System::Drawing::Size(106, 23);
			this->zwroc_ksiazke->TabIndex = 7;
			this->zwroc_ksiazke->Text = L"zwroc_ksiazke";
			this->zwroc_ksiazke->UseVisualStyleBackColor = true;
			this->zwroc_ksiazke->Click += gcnew System::EventHandler(this, &moje_wypozyczenia::zwroc_ksiazke_Click);
			// 
			// moje_wypozyczenia
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(705, 495);
			this->Controls->Add(this->zwroc_ksiazke);
			this->Controls->Add(this->wiadomosci);
			this->Controls->Add(this->powrot);
			this->Controls->Add(this->dodaj_ocene);
			this->Controls->Add(this->pokaz_wszystkie);
			this->Controls->Add(this->pokaz_oddane);
			this->Controls->Add(this->pokaz_nieoddane);
			this->Controls->Add(this->listView1);
			this->Name = L"moje_wypozyczenia";
			this->Text = L"moje_wypozyczenia";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &moje_wypozyczenia::moje_wypozyczenia_FormClosing);
			this->Load += gcnew System::EventHandler(this, &moje_wypozyczenia::moje_wypozyczenia_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void moje_wypozyczenia_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (zamkniete == true)
		{
			previousForm->Show();
		}
	}
	private: System::Void powrot_Click(System::Object^ sender, System::EventArgs^ e) {
		zamkniete = false;
		previousForm->Show();
		this->Close();
	}
private: System::Void moje_wypozyczenia_Load(System::Object^ sender, System::EventArgs^ e) {
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
	{
		//nie wiem po co to ale bez tego nie dziala
		System::String^ Login2 = Login;
		std::string Login_zwykly = marshal_as<std::string>(Login2);
		std::string zapytanie = "select * from wypozyczenia_view where login like '" + Login_zwykly + "' and Czy_zwrocona = false";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			MYSQL_RES* result = mysql_store_result(&mysql);
			if (result)
			{
				while (MYSQL_ROW row = mysql_fetch_row(result)) {
					// Access individual columns by index
					std::string column1 = row[0] ? row[0] : "-";
					std::string column2 = row[1] ? row[1] : "-";
					std::string column3 = row[2] ? row[2] : "-";
					std::string column4 = row[3] ? row[3] : "-";
					std::string column5 = row[4] ? row[4] : "-";
					std::string column6 = row[5] ? row[5] : "-";

					System::String^ sysColumn1 = gcnew String(column1.c_str());
					System::String^ sysColumn2 = gcnew String(column2.c_str());
					System::String^ sysColumn3 = gcnew String(column3.c_str());
					System::String^ sysColumn4 = gcnew String(column4.c_str());
					System::String^ sysColumn5 = gcnew String(column5.c_str());
					System::String^ sysColumn6 = gcnew String(column6.c_str());

					ListViewItem^ item = gcnew ListViewItem(sysColumn2);  // Text for the first column

					item->SubItems->Add(sysColumn3);  // Text for the second column
					item->SubItems->Add(sysColumn4);  // Text for the third column
					item->Tag = sysColumn5;
					item->SubItems[1]->Tag = sysColumn1;

					this->listView1->Items->Add(item);
				}

				// Zwolnienie wyników
				mysql_free_result(result);
			}
			else
			{
				this->wiadomosci->Text = "mysql_store_result() failed";
			}
		}
		else
		{
			this->wiadomosci->Text = "mysql_query() failed";
		}
	}
	mysql_close(&mysql);
}
private: System::Void pokaz_nieoddane_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listView1->Items->Clear();
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
	{
		//nie wiem po co to ale bez tego nie dziala
		System::String^ Login2 = Login;
		std::string Login_zwykly = marshal_as<std::string>(Login2);
		std::string zapytanie = "select * from wypozyczenia_view where login like '" + Login_zwykly + "' and Czy_zwrocona = false";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			MYSQL_RES* result = mysql_store_result(&mysql);
			if (result)
			{
				while (MYSQL_ROW row = mysql_fetch_row(result)) {
					// Access individual columns by index
					std::string column1 = row[0] ? row[0] : "-";
					std::string column2 = row[1] ? row[1] : "-";
					std::string column3 = row[2] ? row[2] : "-";
					std::string column4 = row[3] ? row[3] : "-";
					std::string column5 = row[4] ? row[4] : "-";
					std::string column6 = row[5] ? row[5] : "-";

					System::String^ sysColumn1 = gcnew String(column1.c_str());
					System::String^ sysColumn2 = gcnew String(column2.c_str());
					System::String^ sysColumn3 = gcnew String(column3.c_str());
					System::String^ sysColumn4 = gcnew String(column4.c_str());
					System::String^ sysColumn5 = gcnew String(column5.c_str());
					System::String^ sysColumn6 = gcnew String(column6.c_str());

					ListViewItem^ item = gcnew ListViewItem(sysColumn2);  // Text for the first column

					item->SubItems->Add(sysColumn3);  // Text for the second column
					item->SubItems->Add(sysColumn4);  // Text for the third column
					item->Tag = sysColumn5;
					item->SubItems[1]->Tag = sysColumn1;

					this->listView1->Items->Add(item);
				}

				// Zwolnienie wyników
				mysql_free_result(result);
			}
			else
			{
				this->wiadomosci->Text = "mysql_store_result() failed";
			}
		}
		else
		{
			this->wiadomosci->Text = "mysql_query() failed";
		}
	}
	mysql_close(&mysql);
}
private: System::Void pokaz_oddane_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listView1->Items->Clear();
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
	{
		//nie wiem po co to ale bez tego nie dziala
		System::String^ Login2 = Login;
		std::string Login_zwykly = marshal_as<std::string>(Login2);
		std::string zapytanie = "select * from wypozyczenia_view where login like '" + Login_zwykly + "' and Czy_zwrocona = true";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			MYSQL_RES* result = mysql_store_result(&mysql);
			if (result)
			{
				while (MYSQL_ROW row = mysql_fetch_row(result)) {
					// Access individual columns by index
					std::string column1 = row[0] ? row[0] : "-";
					std::string column2 = row[1] ? row[1] : "-";
					std::string column3 = row[2] ? row[2] : "-";
					std::string column4 = row[3] ? row[3] : "-";
					std::string column5 = row[4] ? row[4] : "-";
					std::string column6 = row[5] ? row[5] : "-";

					System::String^ sysColumn1 = gcnew String(column1.c_str());
					System::String^ sysColumn2 = gcnew String(column2.c_str());
					System::String^ sysColumn3 = gcnew String(column3.c_str());
					System::String^ sysColumn4 = gcnew String(column4.c_str());
					System::String^ sysColumn5 = gcnew String(column5.c_str());
					System::String^ sysColumn6 = gcnew String(column6.c_str());

					ListViewItem^ item = gcnew ListViewItem(sysColumn2);  // Text for the first column

					item->SubItems->Add(sysColumn3);  // Text for the second column
					item->SubItems->Add(sysColumn4);  // Text for the third column
					item->Tag = sysColumn5;
					item->SubItems[1]->Tag = sysColumn1;

					this->listView1->Items->Add(item);
				}

				// Zwolnienie wyników
				mysql_free_result(result);
			}
			else
			{
				this->wiadomosci->Text = "mysql_store_result() failed";
			}
		}
		else
		{
			this->wiadomosci->Text = "mysql_query() failed";
		}
	}
	mysql_close(&mysql);
}
private: System::Void pokaz_wszystkie_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listView1->Items->Clear();
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
	{
		//nie wiem po co to ale bez tego nie dziala
		System::String^ Login2 = Login;
		std::string Login_zwykly = marshal_as<std::string>(Login2);
		std::string zapytanie = "select * from wypozyczenia_view where login like '"+ Login_zwykly +"'";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			MYSQL_RES* result = mysql_store_result(&mysql);
			if (result)
			{
				while (MYSQL_ROW row = mysql_fetch_row(result)) {
					// Access individual columns by index
					std::string column1 = row[0] ? row[0] : "-";
					std::string column2 = row[1] ? row[1] : "-";
					std::string column3 = row[2] ? row[2] : "-";
					std::string column4 = row[3] ? row[3] : "-";
					std::string column5 = row[4] ? row[4] : "-";
					std::string column6 = row[5] ? row[5] : "-";

					System::String^ sysColumn1 = gcnew String(column1.c_str());
					System::String^ sysColumn2 = gcnew String(column2.c_str());
					System::String^ sysColumn3 = gcnew String(column3.c_str());
					System::String^ sysColumn4 = gcnew String(column4.c_str());
					System::String^ sysColumn5 = gcnew String(column5.c_str());
					System::String^ sysColumn6 = gcnew String(column6.c_str());

					ListViewItem^ item = gcnew ListViewItem(sysColumn2);  // Text for the first column

					item->SubItems->Add(sysColumn3);  // Text for the second column
					item->SubItems->Add(sysColumn4);  // Text for the third column
					item->Tag = sysColumn5;
					item->SubItems[1]->Tag = sysColumn1;

					this->listView1->Items->Add(item);
				}

				// Zwolnienie wyników
				mysql_free_result(result);
			}
			else
			{
				this->wiadomosci->Text = "mysql_store_result() failed";
			}
		}
		else
		{
			this->wiadomosci->Text = "mysql_query() failed";
		}
	}
	mysql_close(&mysql);
}
private: System::Void dodaj_ocene_Click(System::Object^ sender, System::EventArgs^ e) {
	int tytul = Convert::ToInt32(listView1->SelectedItems[0]->SubItems[1]->Tag);

	projopr::dodaj_ocene^ logowanie = gcnew projopr::dodaj_ocene(Login, tytul);

	this->Hide();
	logowanie->SetPreviousForm(this);
	logowanie->Show();
}
private: System::Void zwroc_ksiazke_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems[0]->SubItems[0]->Tag=='0')
	{
		MYSQL mysql;
		mysql_init(&mysql); // incjalizacja

		if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
		{
			std::string ksiazka = marshal_as<std::string>(listView1->SelectedItems[0]->SubItems[0]->Text);

			std::string zapytanie = "update wypozyczenia set Czy_zwrocona = true where Id_ksiazki = " + ksiazka + "";
			if (mysql_query(&mysql, zapytanie.c_str()) == 0)
			{
				this->wiadomosci->Text = "zwrocono ksiazke";
			}
			else
			{
				this->wiadomosci->Text = "mysql_query() failed";
			}
		}
		mysql_close(&mysql);
	}
	else
	{
		this->wiadomosci->Text = "ksiazka juz zwrocona";
	}
}
};
}
