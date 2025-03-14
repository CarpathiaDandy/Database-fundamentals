#pragma once
#include <mysql.h>
#include <string>


namespace projopr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for pokaz_zwlekajacych
	/// </summary>
	public ref class pokaz_zwlekajacych : public System::Windows::Forms::Form
	{
	private:
		Form^ previousForm;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Imie;
	private: System::Windows::Forms::ColumnHeader^ Nazwisko;
	private: System::Windows::Forms::ColumnHeader^ Adres;
	private: System::Windows::Forms::ColumnHeader^ Saldo_Konta;
	private: System::Windows::Forms::ColumnHeader^ Ilosc_zaleglych;
	private: System::Windows::Forms::Button^ powrot;
	private: System::Windows::Forms::Label^ wiadomosci;
		   bool zamkniete = true;
	public:
		pokaz_zwlekajacych(void)
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
		~pokaz_zwlekajacych()
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
			this->Imie = (gcnew System::Windows::Forms::ColumnHeader());
			this->Nazwisko = (gcnew System::Windows::Forms::ColumnHeader());
			this->Adres = (gcnew System::Windows::Forms::ColumnHeader());
			this->Saldo_Konta = (gcnew System::Windows::Forms::ColumnHeader());
			this->Ilosc_zaleglych = (gcnew System::Windows::Forms::ColumnHeader());
			this->powrot = (gcnew System::Windows::Forms::Button());
			this->wiadomosci = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->Imie, this->Nazwisko,
					this->Adres, this->Saldo_Konta, this->Ilosc_zaleglych
			});
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(121, 47);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(350, 231);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// Imie
			// 
			this->Imie->Text = L"Imie";
			// 
			// Nazwisko
			// 
			this->Nazwisko->Text = L"Nazwisko";
			// 
			// Adres
			// 
			this->Adres->Text = L"Adres";
			// 
			// Saldo_Konta
			// 
			this->Saldo_Konta->Text = L"Saldo_Konta";
			// 
			// Ilosc_zaleglych
			// 
			this->Ilosc_zaleglych->Text = L"Ilosc_zaleglych";
			// 
			// powrot
			// 
			this->powrot->Location = System::Drawing::Point(289, 361);
			this->powrot->Name = L"powrot";
			this->powrot->Size = System::Drawing::Size(75, 23);
			this->powrot->TabIndex = 1;
			this->powrot->Text = L"powrot";
			this->powrot->UseVisualStyleBackColor = true;
			this->powrot->Click += gcnew System::EventHandler(this, &pokaz_zwlekajacych::powrot_Click);
			// 
			// wiadomosci
			// 
			this->wiadomosci->AutoSize = true;
			this->wiadomosci->Location = System::Drawing::Point(309, 312);
			this->wiadomosci->Name = L"wiadomosci";
			this->wiadomosci->Size = System::Drawing::Size(0, 13);
			this->wiadomosci->TabIndex = 2;
			// 
			// pokaz_zwlekajacych
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 429);
			this->Controls->Add(this->wiadomosci);
			this->Controls->Add(this->powrot);
			this->Controls->Add(this->listView1);
			this->Name = L"pokaz_zwlekajacych";
			this->Text = L"pokaz_zwlekajacych";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &pokaz_zwlekajacych::pokaz_zwlekajacych_FormClosing);
			this->Load += gcnew System::EventHandler(this, &pokaz_zwlekajacych::pokaz_zwlekajacych_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pokaz_zwlekajacych_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
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
	private: System::Void pokaz_zwlekajacych_Load(System::Object^ sender, System::EventArgs^ e) {
		MYSQL mysql;
		mysql_init(&mysql); // incjalizacja
		if (mysql_real_connect(&mysql, "127.0.0.1", "root", "root", "biblioteka", 3306, NULL, 0))
		{
			std::string zapytanie = "select * from zalegajacy";
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
};
}
