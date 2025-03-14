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
	/// Summary for pokaz_ksiazki
	/// </summary>
	public ref class pokaz_ksiazki : public System::Windows::Forms::Form
	{
	private:
		bool zamkniete = true;
		Form^ previousForm;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ pokaz_ksiazkib;

	private: System::Windows::Forms::Button^ dodaj_egzemplarz;
	private: System::Windows::Forms::Button^ edytuj_egzemplarz;
	private: System::Windows::Forms::Button^ usun_egzemplarz;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ColumnHeader^ id_tytulu;
	private: System::Windows::Forms::ColumnHeader^ id_ksiazki;



	public:
		System::String^ Login;
		pokaz_ksiazki(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		pokaz_ksiazki(System::String^ initialValue)
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
		~pokaz_ksiazki()
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


	private: System::Windows::Forms::ColumnHeader^ Kategoria;
	private: System::Windows::Forms::Label^ wiadomosci;


	private: System::Windows::Forms::Button^ powrot;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

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
			this->id_tytulu = (gcnew System::Windows::Forms::ColumnHeader());
			this->id_ksiazki = (gcnew System::Windows::Forms::ColumnHeader());
			this->wiadomosci = (gcnew System::Windows::Forms::Label());
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pokaz_ksiazkib = (gcnew System::Windows::Forms::Button());
			this->dodaj_egzemplarz = (gcnew System::Windows::Forms::Button());
			this->edytuj_egzemplarz = (gcnew System::Windows::Forms::Button());
			this->usun_egzemplarz = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Tytul, this->Autor,
					this->Kategoria, this->id_tytulu, this->id_ksiazki
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
			this->Tytul->Text = L"tytul";
			// 
			// Autor
			// 
			this->Autor->Text = L"autor";
			// 
			// Kategoria
			// 
			this->Kategoria->Text = L"kategoria";
			// 
			// id_tytulu
			// 
			this->id_tytulu->Text = L"id_tytulu";
			// 
			// id_ksiazki
			// 
			this->id_ksiazki->Text = L"id_ksiazki";
			// 
			// wiadomosci
			// 
			this->wiadomosci->AutoSize = true;
			this->wiadomosci->Location = System::Drawing::Point(279, 437);
			this->wiadomosci->Name = L"wiadomosci";
			this->wiadomosci->Size = System::Drawing::Size(0, 13);
			this->wiadomosci->TabIndex = 2;
			// 
			// powrot
			// 
			this->powrot->Location = System::Drawing::Point(259, 514);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(75, 23);
			this->powrot->TabIndex = 4;
			this->powrot->Text = L"powrot";
			this->powrot->UseVisualStyleBackColor = true;
			this->powrot->Click += gcnew System::EventHandler(this, &pokaz_ksiazki::powrot_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(299, 353);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(45, 354);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(168, 354);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(82, 320);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(30, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Tytul";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(195, 321);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"autor";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(332, 320);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(51, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"kategorie";
			// 
			// pokaz_ksiazkib
			// 
			this->pokaz_ksiazkib->Location = System::Drawing::Point(169, 403);
			this->pokaz_ksiazkib->Name = L"pokaz_ksiazkib";
			this->pokaz_ksiazkib->Size = System::Drawing::Size(99, 23);
			this->pokaz_ksiazkib->TabIndex = 12;
			this->pokaz_ksiazkib->Text = L"pokaz_ksiazki";
			this->pokaz_ksiazkib->UseVisualStyleBackColor = true;
			this->pokaz_ksiazkib->Click += gcnew System::EventHandler(this, &pokaz_ksiazki::pokaz_ksiazki_Click);
			// 
			// dodaj_egzemplarz
			// 
			this->dodaj_egzemplarz->Location = System::Drawing::Point(323, 403);
			this->dodaj_egzemplarz->Name = L"dodaj_egzemplarz";
			this->dodaj_egzemplarz->Size = System::Drawing::Size(141, 23);
			this->dodaj_egzemplarz->TabIndex = 14;
			this->dodaj_egzemplarz->Text = L"dodaj_kolejny_egzemplarz";
			this->dodaj_egzemplarz->UseVisualStyleBackColor = true;
			this->dodaj_egzemplarz->Click += gcnew System::EventHandler(this, &pokaz_ksiazki::dodaj_egzemplarz_Click);
			// 
			// edytuj_egzemplarz
			// 
			this->edytuj_egzemplarz->Location = System::Drawing::Point(120, 453);
			this->edytuj_egzemplarz->Name = L"edytuj_egzemplarz";
			this->edytuj_egzemplarz->Size = System::Drawing::Size(165, 23);
			this->edytuj_egzemplarz->TabIndex = 15;
			this->edytuj_egzemplarz->Text = L"zmien_status_wypozyczenia";
			this->edytuj_egzemplarz->UseVisualStyleBackColor = true;
			this->edytuj_egzemplarz->Click += gcnew System::EventHandler(this, &pokaz_ksiazki::edytuj_egzemplarz_Click);
			// 
			// usun_egzemplarz
			// 
			this->usun_egzemplarz->Location = System::Drawing::Point(323, 453);
			this->usun_egzemplarz->Name = L"usun_egzemplarz";
			this->usun_egzemplarz->Size = System::Drawing::Size(141, 23);
			this->usun_egzemplarz->TabIndex = 16;
			this->usun_egzemplarz->Text = L"usun_egzemplarz";
			this->usun_egzemplarz->UseVisualStyleBackColor = true;
			this->usun_egzemplarz->Click += gcnew System::EventHandler(this, &pokaz_ksiazki::usun_egzemplarz_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(469, 353);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 17;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(496, 320);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 13);
			this->label4->TabIndex = 18;
			this->label4->Text = L"id_ksiazki";
			// 
			// pokaz_ksiazki
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 562);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->usun_egzemplarz);
			this->Controls->Add(this->edytuj_egzemplarz);
			this->Controls->Add(this->dodaj_egzemplarz);
			this->Controls->Add(this->pokaz_ksiazkib);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->powrot);
			this->Controls->Add(this->wiadomosci);
			this->Controls->Add(this->listView1);
			this->Name = L"pokaz_ksiazki";
			this->Text = L"pokaz_ksiazki";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &pokaz_ksiazki::wypozycz_ksiazke_FormClosing);
			this->Load += gcnew System::EventHandler(this, &pokaz_ksiazki::wypozycz_ksiazke_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void wypozycz_ksiazke_Load(System::Object^ sender, System::EventArgs^ e) {
		MYSQL mysql;
		mysql_init(&mysql); // incjalizacja

		if (mysql_real_connect(&mysql, "127.0.0.1", "root", "root", "biblioteka", 3306, NULL, 0))
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
	private: System::Void pokaz_ksiazki_Click(System::Object^ sender, System::EventArgs^ e) {
		this->listView1->Items->Clear();
		MYSQL mysql;
		mysql_init(&mysql); // incjalizacja

		if (mysql_real_connect(&mysql, "127.0.0.1", "root", "root", "biblioteka", 3306, NULL, 0))
		{
			System::String^ Tytul = textBox1->Text;
			std::string tytul = marshal_as<std::string>(Tytul);
			System::String^ Autor = textBox2->Text;
			std::string autor = marshal_as<std::string>(Autor);
			System::String^ Kategoria = comboBox1->SelectedText;
			std::string kategoria = marshal_as<std::string>(Kategoria);
			System::String^ ID = textBox3->Text;
			std::string id = marshal_as<std::string>(ID);
			std::string zapytanie = "select * from do_admina where Tytul like '%" + tytul + "%' and Nazwa_kategorii like '%" + kategoria + "%' and imie_Nazwisko like '%" + autor + "%' and idKsiazki like '%"+id+"%'";
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
	private: System::Void dodaj_egzemplarz_Click(System::Object^ sender, System::EventArgs^ e) {
		MYSQL mysql;
		mysql_init(&mysql); // incjalizacja

		if (mysql_real_connect(&mysql, "127.0.0.1", "root", "root", "biblioteka", 3306, NULL, 0))
		{
			System::String^ Tytul = listView1->SelectedItems[0]->SubItems[3]->Text;
			std::string tytul = marshal_as<std::string>(Tytul);
			std::string zapytanie = "insert into ksiazki_fizyczne values(default,'"+ tytul +"',false)";
			if (mysql_query(&mysql, zapytanie.c_str()) == 0)
			{
				this->wiadomosci->Text = "dodano egzemplarz";
			}
			else
			{
				this->wiadomosci->Text = "mysql_query() failed";
			}
		}
		mysql_close(&mysql);
	}
private: System::Void usun_egzemplarz_Click(System::Object^ sender, System::EventArgs^ e) {
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "root", "root", "biblioteka", 3306, NULL, 0))
	{
		System::String^ Egzemplarz = listView1->SelectedItems[0]->SubItems[4]->Text;
		std::string egzemplarz = marshal_as<std::string>(Egzemplarz);
		std::string zapytanie = "delete from ksiazki_fizyczne where idKsiazki = "+ egzemplarz +"";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			this->wiadomosci->Text = "usunieto egzemplarz";
		}
		else
		{
			this->wiadomosci->Text = "mysql_query() failed";
		}
	}
	mysql_close(&mysql);
}
private: System::Void edytuj_egzemplarz_Click(System::Object^ sender, System::EventArgs^ e) {
	MYSQL mysql;
	mysql_init(&mysql); // incjalizacja

	if (mysql_real_connect(&mysql, "127.0.0.1", "root", "root", "biblioteka", 3306, NULL, 0))
	{
		System::String^ Egzemplarz = listView1->SelectedItems[0]->SubItems[4]->Text;
		std::string egzemplarz = marshal_as<std::string>(Egzemplarz);
		std::string zapytanie = "update ksiazki_fizyczne set Czy_wypozyczona = not Czy_wypozyczona where idKsiazki = "+ egzemplarz +"";
		if (mysql_query(&mysql, zapytanie.c_str()) == 0)
		{
			this->wiadomosci->Text = "dodano egzemplarz";
		}
		else
		{
			this->wiadomosci->Text = "mysql_query() failed";
		}
	}
	mysql_close(&mysql);
}
};
}
