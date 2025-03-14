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
	/// Summary for wypozycz_ksiazke
	/// </summary>
	public ref class wypozycz_ksiazke : public System::Windows::Forms::Form
	{
	private:
		bool zamkniete = true;
		Form^ previousForm;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ pokaz_tylko_dostepne;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ pokaz_ksiazki;

	public:
		System::String^ Login;
		wypozycz_ksiazke(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		wypozycz_ksiazke(System::String^ initialValue)
		{
			InitializeComponent();
			Login = initialValue;
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
		~wypozycz_ksiazke()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ Tytul;
	private: System::Windows::Forms::ColumnHeader^ Autor;
	private: System::Windows::Forms::ColumnHeader^ ile_wolnych_egzemplarzy;
	private: System::Windows::Forms::ColumnHeader^ Srednia_Ocen;
	private: System::Windows::Forms::ColumnHeader^ Kategoria;
	private: System::Windows::Forms::Label^ wiadomosci;
	private: System::Windows::Forms::Button^ wypozycz;
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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Tytul = (gcnew System::Windows::Forms::ColumnHeader());
			this->Autor = (gcnew System::Windows::Forms::ColumnHeader());
			this->Kategoria = (gcnew System::Windows::Forms::ColumnHeader());
			this->Srednia_Ocen = (gcnew System::Windows::Forms::ColumnHeader());
			this->ile_wolnych_egzemplarzy = (gcnew System::Windows::Forms::ColumnHeader());
			this->wiadomosci = (gcnew System::Windows::Forms::Label());
			this->wypozycz = (gcnew System::Windows::Forms::Button());
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->pokaz_tylko_dostepne = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pokaz_ksiazki = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Tytul, this->Autor,
					this->Kategoria, this->Srednia_Ocen, this->ile_wolnych_egzemplarzy
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(120, 45);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(375, 255);
			this->listView1->TabIndex = 1;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Tytul
			// 
			this->Tytul->Text = L"Tytul";
			// 
			// Autor
			// 
			this->Autor->Text = L"Autor";
			// 
			// Kategoria
			// 
			this->Kategoria->DisplayIndex = 4;
			this->Kategoria->Text = L"Kategoria";
			// 
			// Srednia_Ocen
			// 
			this->Srednia_Ocen->Text = L"Srednia_Ocen";
			// 
			// ile_wolnych_egzemplarzy
			// 
			this->ile_wolnych_egzemplarzy->DisplayIndex = 2;
			this->ile_wolnych_egzemplarzy->Text = L"ile_wolnych_egzemplarzy";
			// 
			// wiadomosci
			// 
			this->wiadomosci->AutoSize = true;
			this->wiadomosci->Location = System::Drawing::Point(279, 437);
			this->wiadomosci->Name = L"wiadomosci";
			this->wiadomosci->Size = System::Drawing::Size(0, 13);
			this->wiadomosci->TabIndex = 2;
			// 
			// wypozycz
			// 
			this->wypozycz->Location = System::Drawing::Point(268, 473);
			this->wypozycz->Name = L"wypozycz";
			this->wypozycz->Size = System::Drawing::Size(75, 23);
			this->wypozycz->TabIndex = 3;
			this->wypozycz->Text = L"wypozycz";
			this->wypozycz->UseVisualStyleBackColor = true;
			this->wypozycz->Click += gcnew System::EventHandler(this, &wypozycz_ksiazke::wypozycz_Click);
			// 
			// powrot
			// 
			this->powrot->Location = System::Drawing::Point(420, 473);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(75, 23);
			this->powrot->TabIndex = 4;
			this->powrot->Text = L"powrot";
			this->powrot->UseVisualStyleBackColor = true;
			this->powrot->Click += gcnew System::EventHandler(this, &wypozycz_ksiazke::powrot_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(374, 353);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 354);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(259, 354);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// pokaz_tylko_dostepne
			// 
			this->pokaz_tylko_dostepne->AutoSize = true;
			this->pokaz_tylko_dostepne->Location = System::Drawing::Point(237, 393);
			this->pokaz_tylko_dostepne->Name = L"pokaz_tylko_dostepne";
			this->pokaz_tylko_dostepne->Size = System::Drawing::Size(133, 17);
			this->pokaz_tylko_dostepne->TabIndex = 8;
			this->pokaz_tylko_dostepne->Text = L"pokaz_tylko_dostepne";
			this->pokaz_tylko_dostepne->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(166, 321);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Tytul";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(293, 320);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"autor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(438, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"kategorie";
			// 
			// pokaz_ksiazki
			// 
			this->pokaz_ksiazki->Location = System::Drawing::Point(121, 473);
			this->pokaz_ksiazki->Name = L"pokaz_ksiazki";
			this->pokaz_ksiazki->Size = System::Drawing::Size(99, 23);
			this->pokaz_ksiazki->TabIndex = 12;
			this->pokaz_ksiazki->Text = L"pokaz_ksiazki";
			this->pokaz_ksiazki->UseVisualStyleBackColor = true;
			this->pokaz_ksiazki->Click += gcnew System::EventHandler(this, &wypozycz_ksiazke::pokaz_ksiazki_Click);
			// 
			// wypozycz_ksiazke
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 562);
			this->Controls->Add(this->pokaz_ksiazki);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pokaz_tylko_dostepne);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->powrot);
			this->Controls->Add(this->wypozycz);
			this->Controls->Add(this->wiadomosci);
			this->Controls->Add(this->listView1);
			this->Name = L"wypozycz_ksiazke";
			this->Text = L"wypozycz_ksiazke";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &wypozycz_ksiazke::wypozycz_ksiazke_FormClosing);
			this->Load += gcnew System::EventHandler(this, &wypozycz_ksiazke::wypozycz_ksiazke_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void wypozycz_ksiazke_Load(System::Object^ sender, System::EventArgs^ e) {
			MYSQL mysql;
			mysql_init(&mysql); // incjalizacja

			if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
			{
				std::string zapytanie = "SELECT Nazwa_kategorii FROM biblioteka.kategorie;";
				if (mysql_query(&mysql, zapytanie.c_str()) == 0)
				{
					MYSQL_RES* result = mysql_store_result(&mysql);
					if (result)
					{
						while (MYSQL_ROW row = mysql_fetch_row(result)) {
							// Access individual columns by index
							std::string column1 = row[0] ? row[0] : "-";

							System::String^ sysColumn1 = gcnew String(column1.c_str());

							comboBox1->Items->Add(sysColumn1);
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
		private: System::Void wypozycz_ksiazke_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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
private: System::Void pokaz_ksiazki_Click(System::Object^ sender, System::EventArgs^ e) {
	this->listView1->Items->Clear();
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
	{
		System::String^ Tytul = textBox1->Text;
		std::string tytul = marshal_as<std::string>(Tytul);
		System::String^ Autor = textBox2->Text;
		std::string autor = marshal_as<std::string>(Autor);
		System::String^ Kategoria = comboBox1->SelectedText;
		std::string kategoria = marshal_as<std::string>(Kategoria);
		INT Dost=0;
		if (pokaz_tylko_dostepne->Checked)
		{
			Dost = 1;
		}
		std::string dostepne = std::to_string(Dost);
		std::string zapytanie = "select * from do_wypozyczen where Tytul like '%"+tytul+"%' and Nazwa_kategorii like '%"+kategoria+"%' and imie_Nazwisko like '%"+autor+"%' and ile_dostepnych>="+dostepne+"";
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

					System::String^ sysColumn1 = gcnew String(column1.c_str());
					System::String^ sysColumn2 = gcnew String(column2.c_str());
					System::String^ sysColumn3 = gcnew String(column3.c_str());
					System::String^ sysColumn4 = gcnew String(column4.c_str());
					System::String^ sysColumn5 = gcnew String(column5.c_str());

					ListViewItem^ item = gcnew ListViewItem(sysColumn1);  // Text for the first column

					item->SubItems->Add(sysColumn2);  // Text for the second column
					item->SubItems->Add(sysColumn3);  // Text for the third column
					item->SubItems->Add(sysColumn4);
					item->SubItems->Add(sysColumn5);

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
private: System::Void wypozycz_Click(System::Object^ sender, System::EventArgs^ e) {
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
	{
		//nie wiem po co to ale bez tego nie dziala
		std::string numer_ksiazki;
		System::String^ Login2 = Login;
		std::string Login_zwykly = marshal_as<std::string>(Login2);

		System::String^ Tytul = listView1->SelectedItems[0]->SubItems[0]->Text;
		std::string tytul = marshal_as<std::string>(Tytul);
		System::String^ Autor = listView1->SelectedItems[0]->SubItems[1]->Text;
		std::string autor = marshal_as<std::string>(Autor);

		std::string zapytanie = "SELECT idKsiazki FROM biblioteka.ksiazki_fizyczne join ksiazki_tytuly on ksiazki_tytuly.idKsiazki_tytuly = ksiazki_fizyczne.Rodzaj_ksiazki join autorzy on autorzy.idautorzy = ksiazki_tytuly.Autor_id where ksiazki_tytuly.Tytul = '"+ tytul +"' and autorzy.imie_Nazwisko = '"+ autor +"' and ksiazki_fizyczne.Czy_wypozyczona = false limit 1";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			MYSQL_RES* result = mysql_store_result(&mysql);
			if (result)
			{
				while (MYSQL_ROW row = mysql_fetch_row(result)) {
					// Access individual columns by index
					numer_ksiazki = row[0] ? row[0] : "-";
				}

				// Zwolnienie wyników
				mysql_free_result(result);
			}
			else
			{
				this->wiadomosci->Text = "mysql_store_result1() failed";
			}
		}
		else
		{
			this->wiadomosci->Text = "mysql_query1() failed";
		}
		zapytanie = "Insert into wypozyczenia values(default,'"+Login_zwykly+"','"+ numer_ksiazki +"',now(),DATE_ADD(NOW(), INTERVAL 2 WEEK),false)";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			this->wiadomosci->Text = "wypozyczono ksiazke";
		}
		else
		{
			this->wiadomosci->Text = "mysql_query2() failed";
		}
	}
	mysql_close(&mysql);
}
};
}
