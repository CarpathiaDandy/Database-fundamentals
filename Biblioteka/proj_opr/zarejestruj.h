﻿#pragma once
#include <string.h>
#include <iostream>
#include <fstream>
#include <mysql.h>
#include <sstream>
#include <msclr/marshal_cppstd.h>

namespace projopr {

	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for zarejestruj
	/// </summary>
	public ref class zarejestruj : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	private: System::Windows::Forms::TextBox^ imie;

	private: System::Windows::Forms::TextBox^ nazwisko;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ adres;
	public:
		bool zamkniete = true;
		zarejestruj(void)
		{
			InitializeComponent();
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
		~zarejestruj()
		{
			if (components)
			{
				delete components; 
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ zarejestruj_sie;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ login;
	private: System::Windows::Forms::TextBox^ haslo;
	private: System::Windows::Forms::Label^ wiadomosci;

	private: System::Windows::Forms::Label^ label4;




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
			this->zarejestruj_sie = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->login = (gcnew System::Windows::Forms::TextBox());
			this->haslo = (gcnew System::Windows::Forms::TextBox());
			this->wiadomosci = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->imie = (gcnew System::Windows::Forms::TextBox());
			this->nazwisko = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->adres = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(172, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"zarejestruj";
			// 
			// zarejestruj_sie
			// 
			this->zarejestruj_sie->Location = System::Drawing::Point(101, 419);
			this->zarejestruj_sie->Name = L"zarejestruj_sie";
			this->zarejestruj_sie->Size = System::Drawing::Size(75, 23);
			this->zarejestruj_sie->TabIndex = 1;
			this->zarejestruj_sie->Text = L"zarejestruj sie";
			this->zarejestruj_sie->UseVisualStyleBackColor = true;
			this->zarejestruj_sie->Click += gcnew System::EventHandler(this, &zarejestruj::zarejestruj_sie_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(260, 419);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &zarejestruj::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(115, 77);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"login";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(118, 151);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"haslo";
			// 
			// login
			// 
			this->login->Location = System::Drawing::Point(81, 106);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(100, 20);
			this->login->TabIndex = 5;
			this->login->TextChanged += gcnew System::EventHandler(this, &zarejestruj::login_TextChanged);
			// 
			// haslo
			// 
			this->haslo->Location = System::Drawing::Point(82, 177);
			this->haslo->Name = L"haslo";
			this->haslo->Size = System::Drawing::Size(100, 20);
			this->haslo->TabIndex = 6;
			// 
			// wiadomosci
			// 
			this->wiadomosci->AutoSize = true;
			this->wiadomosci->Location = System::Drawing::Point(191, 393);
			this->wiadomosci->Name = L"wiadomosci";
			this->wiadomosci->Size = System::Drawing::Size(35, 13);
			this->wiadomosci->TabIndex = 7;
			this->wiadomosci->Text = L"label4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(118, 220);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Imie";
			this->label4->Click += gcnew System::EventHandler(this, &zarejestruj::label4_Click);
			// 
			// imie
			// 
			this->imie->Location = System::Drawing::Point(81, 236);
			this->imie->Name = L"imie";
			this->imie->Size = System::Drawing::Size(100, 20);
			this->imie->TabIndex = 10;
			// 
			// nazwisko
			// 
			this->nazwisko->Location = System::Drawing::Point(76, 291);
			this->nazwisko->Name = L"nazwisko";
			this->nazwisko->Size = System::Drawing::Size(100, 20);
			this->nazwisko->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(109, 275);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"nazwisko";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(109, 328);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(33, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"adres";
			// 
			// adres
			// 
			this->adres->Location = System::Drawing::Point(76, 353);
			this->adres->Name = L"adres";
			this->adres->Size = System::Drawing::Size(100, 20);
			this->adres->TabIndex = 14;
			// 
			// zarejestruj
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(467, 489);
			this->Controls->Add(this->adres);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->nazwisko);
			this->Controls->Add(this->imie);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->wiadomosci);
			this->Controls->Add(this->haslo);
			this->Controls->Add(this->login);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->zarejestruj_sie);
			this->Controls->Add(this->label1);
			this->Name = L"zarejestruj";
			this->Text = L"zarejestruj";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &zarejestruj::zarejestruj_FormClosing);
			this->Load += gcnew System::EventHandler(this, &zarejestruj::zarejestruj_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void typ_konta_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		previousForm->Show();
		this->Close();
	}

private: System::Void zarejestruj_sie_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ Login = this->login->Text;
	String^ Haslo = this->haslo->Text;
	String^ Imie = this->imie->Text;
	String^ Nazwisko = this->nazwisko->Text;
	String^ Adres = this->adres->Text;

	if (Login == nullptr || Login=="")
	{
		this->login->Text = "";
		this->haslo->Text = "";
		this->wiadomosci->Text = "Nie podano loginu";
		
	}
	else if (Haslo == nullptr || Haslo == "")
	{
		this->login->Text = "";
		this->haslo->Text = "";
		this->wiadomosci->Text = "Nie podano hasla";
	}
	else if (Imie == nullptr || Imie == "")
	{
		this->login->Text = "";
		this->haslo->Text = "";
		this->wiadomosci->Text = "Nie podano imienia";
	}
	else if (Nazwisko == nullptr || Nazwisko == "")
	{
		this->login->Text = "";
		this->haslo->Text = "";
		this->wiadomosci->Text = "Nie podano nazwisko";
	}
	else if (Adres == nullptr || Adres == "")
	{
		this->login->Text = "";
		this->haslo->Text = "";
		this->wiadomosci->Text = "Nie podano adres";
	}
	else
	{
		this->login->Text = "";

		


		//sprawdzanie czy jest w bazie taki uzywkownik
		
		MYSQL mysql;
		mysql_init(&mysql); // incjalizacja
		
		if (mysql_real_connect(&mysql, "127.0.0.1", "user", "useruser", "biblioteka", 3306, NULL, 0))
		{
			string Login_zwykly = marshal_as<std::string>(Login);
			string zapytanie = "SELECT * FROM uzytkownicy WHERE login='" + Login_zwykly + "'";

			if (mysql_query(&mysql, zapytanie.c_str()) == 0)
			{
				MYSQL_RES* result = mysql_store_result(&mysql);
				if (result)
				{
					MYSQL_ROW row = mysql_fetch_row(result);
					// Sprawdzenie, czy coś zostało zwrócone
					if (row != NULL)
					{
						this->wiadomosci->Text = "konto juz istnieje";
					}
					else
					{
						string haslo_zwykly = marshal_as<std::string>(Haslo);
						string imie_zwykly = marshal_as<std::string>(Imie);
						string nazwisko_zwykly = marshal_as<std::string>(Nazwisko);
						string adres_zwykly = marshal_as<std::string>(Adres);
						string zapytanie = "insert into uzytkownicy values('"+Login_zwykly+"','"+haslo_zwykly+"','"+imie_zwykly+"','"+nazwisko_zwykly+"','"+adres_zwykly+"',false,0.0); ";
						if (mysql_query(&mysql, zapytanie.c_str()) == 0)
						{
							this->wiadomosci->Text = "Dodano uzytkownika do bazy";
						}
						else
						{
							this->wiadomosci->Text = "mysql_query() failed";
						}
						
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
}
private: System::Void zarejestruj_Load(System::Object^ sender, System::EventArgs^ e) {
	this->login->Text = "";
	this->haslo->Text = "";
	this->wiadomosci->Text = "";
}


private: System::Void zarejestruj_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (zamkniete == true)
	{
		previousForm->Show();
	}
}
private: System::Void login_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
