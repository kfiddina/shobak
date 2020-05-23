#pragma once
#include "signin.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for page1
	/// </summary>
	public ref class signup : public System::Windows::Forms::Form
	{
	public:
		signup(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=shobak";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signup()
		{
			if (components)
			{
				delete components;
			}
		}



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ passwordtxt;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ notlptxt;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ usernametxt;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ namatxt;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ cancelbtn;
	private: System::Windows::Forms::Button^ daftarbtn;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->daftarbtn = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->notlptxt = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->usernametxt = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->namatxt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::MintCream;
			this->panel1->Location = System::Drawing::Point(340, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(412, 537);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->cancelbtn);
			this->panel2->Controls->Add(this->daftarbtn);
			this->panel2->Controls->Add(this->panel5);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->passwordtxt);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->notlptxt);
			this->panel2->Controls->Add(this->panel6);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->usernametxt);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->namatxt);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(340, 537);
			this->panel2->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label6->Font = (gcnew System::Drawing::Font(L"Roboto", 10.75F));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Location = System::Drawing::Point(78, 421);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(184, 18);
			this->label6->TabIndex = 22;
			this->label6->Text = L"Punya akun\? Masuk di sini";
			this->label6->Click += gcnew System::EventHandler(this, &signup::label6_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->BackColor = System::Drawing::Color::Firebrick;
			this->cancelbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cancelbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->cancelbtn->ForeColor = System::Drawing::Color::White;
			this->cancelbtn->Location = System::Drawing::Point(171, 378);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(112, 35);
			this->cancelbtn->TabIndex = 21;
			this->cancelbtn->Text = L"Batal";
			this->cancelbtn->UseVisualStyleBackColor = false;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &signup::cancelbtn_Click_1);
			// 
			// daftarbtn
			// 
			this->daftarbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->daftarbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->daftarbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->daftarbtn->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->daftarbtn->ForeColor = System::Drawing::Color::White;
			this->daftarbtn->Location = System::Drawing::Point(58, 378);
			this->daftarbtn->Name = L"daftarbtn";
			this->daftarbtn->Size = System::Drawing::Size(112, 35);
			this->daftarbtn->TabIndex = 20;
			this->daftarbtn->Text = L"Daftar";
			this->daftarbtn->UseVisualStyleBackColor = false;
			this->daftarbtn->Click += gcnew System::EventHandler(this, &signup::daftarbtn_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel5->Location = System::Drawing::Point(58, 366);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(225, 2);
			this->panel5->TabIndex = 19;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel3->Location = System::Drawing::Point(58, 235);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(225, 2);
			this->panel3->TabIndex = 13;
			// 
			// passwordtxt
			// 
			this->passwordtxt->BackColor = System::Drawing::Color::LightSteelBlue;
			this->passwordtxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordtxt->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->passwordtxt->Location = System::Drawing::Point(58, 346);
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->Size = System::Drawing::Size(225, 17);
			this->passwordtxt->TabIndex = 18;
			this->passwordtxt->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->label4->Location = System::Drawing::Point(51, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 20);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Password";
			// 
			// notlptxt
			// 
			this->notlptxt->BackColor = System::Drawing::Color::LightSteelBlue;
			this->notlptxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->notlptxt->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->notlptxt->Location = System::Drawing::Point(58, 215);
			this->notlptxt->Name = L"notlptxt";
			this->notlptxt->Size = System::Drawing::Size(225, 17);
			this->notlptxt->TabIndex = 12;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel6->Location = System::Drawing::Point(58, 298);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(225, 2);
			this->panel6->TabIndex = 16;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->label3->Location = System::Drawing::Point(51, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 20);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Nomor Telepon";
			// 
			// usernametxt
			// 
			this->usernametxt->BackColor = System::Drawing::Color::LightSteelBlue;
			this->usernametxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametxt->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->usernametxt->Location = System::Drawing::Point(58, 278);
			this->usernametxt->Name = L"usernametxt";
			this->usernametxt->Size = System::Drawing::Size(225, 17);
			this->usernametxt->TabIndex = 15;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel4->Location = System::Drawing::Point(58, 167);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(225, 2);
			this->panel4->TabIndex = 10;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->label5->Location = System::Drawing::Point(51, 251);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 20);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Username";
			// 
			// namatxt
			// 
			this->namatxt->BackColor = System::Drawing::Color::LightSteelBlue;
			this->namatxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->namatxt->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->namatxt->Location = System::Drawing::Point(58, 147);
			this->namatxt->Name = L"namatxt";
			this->namatxt->Size = System::Drawing::Size(225, 17);
			this->namatxt->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->label2->Location = System::Drawing::Point(51, 120);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(123, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Nama Lengkap";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 16.25F, System::Drawing::FontStyle::Bold));
			this->label1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->label1->Location = System::Drawing::Point(50, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 27);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Daftar";
			// 
			// page1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::AliceBlue;
			this->ClientSize = System::Drawing::Size(752, 537);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"page1";
			this->Text = L"S H O B A K";
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
			signin^ h_masuk = gcnew signin;
			h_masuk->ShowDialog();
		}
		private: System::Void cancelbtn_Click_1(System::Object^ sender, System::EventArgs^ e) {
			Form::Close();
		}
		private: System::Void daftarbtn_Click(System::Object^ sender, System::EventArgs^ e);
};
}
