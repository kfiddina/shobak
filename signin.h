#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for signin
	/// </summary>
	public ref class signin : public System::Windows::Forms::Form
	{
	public:
		signin(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=shobak";
	private: System::Windows::Forms::Panel^ panel3;
	public:
		MySqlConnection^ con = gcnew MySqlConnection(constr);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ usernametxt;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ passwordtxt;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ masukbtn;
	private: System::Windows::Forms::Button^ cancelbtn;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::ComponentModel::IContainer^ components;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->usernametxt = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->passwordtxt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->masukbtn = (gcnew System::Windows::Forms::Button());
			this->cancelbtn = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Roboto", 16.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(20, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 27);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Masuk";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->label2->Location = System::Drawing::Point(21, 94);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			this->label2->Click += gcnew System::EventHandler(this, &signin::label2_Click);
			// 
			// usernametxt
			// 
			this->usernametxt->BackColor = System::Drawing::Color::LightSteelBlue;
			this->usernametxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->usernametxt->Location = System::Drawing::Point(28, 121);
			this->usernametxt->Name = L"usernametxt";
			this->usernametxt->Size = System::Drawing::Size(225, 17);
			this->usernametxt->TabIndex = 2;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel1->Location = System::Drawing::Point(28, 141);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(225, 2);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->panel2->Location = System::Drawing::Point(28, 209);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(225, 2);
			this->panel2->TabIndex = 6;
			// 
			// passwordtxt
			// 
			this->passwordtxt->BackColor = System::Drawing::Color::LightSteelBlue;
			this->passwordtxt->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passwordtxt->Location = System::Drawing::Point(28, 189);
			this->passwordtxt->Name = L"passwordtxt";
			this->passwordtxt->Size = System::Drawing::Size(225, 17);
			this->passwordtxt->TabIndex = 5;
			this->passwordtxt->UseSystemPasswordChar = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->label3->Location = System::Drawing::Point(21, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(86, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &signin::label3_Click);
			// 
			// masukbtn
			// 
			this->masukbtn->BackColor = System::Drawing::Color::SteelBlue;
			this->masukbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->masukbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->masukbtn->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->masukbtn->ForeColor = System::Drawing::Color::White;
			this->masukbtn->Location = System::Drawing::Point(28, 243);
			this->masukbtn->Name = L"masukbtn";
			this->masukbtn->Size = System::Drawing::Size(112, 35);
			this->masukbtn->TabIndex = 7;
			this->masukbtn->Text = L"Masuk";
			this->masukbtn->UseVisualStyleBackColor = false;
			this->masukbtn->Click += gcnew System::EventHandler(this, &signin::masukbtn_Click);
			// 
			// cancelbtn
			// 
			this->cancelbtn->BackColor = System::Drawing::Color::Firebrick;
			this->cancelbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cancelbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancelbtn->Font = (gcnew System::Drawing::Font(L"Roboto", 12.25F));
			this->cancelbtn->ForeColor = System::Drawing::Color::White;
			this->cancelbtn->Location = System::Drawing::Point(141, 243);
			this->cancelbtn->Name = L"cancelbtn";
			this->cancelbtn->Size = System::Drawing::Size(112, 35);
			this->cancelbtn->TabIndex = 8;
			this->cancelbtn->Text = L"Batal";
			this->cancelbtn->UseVisualStyleBackColor = false;
			this->cancelbtn->Click += gcnew System::EventHandler(this, &signin::cancelbtn_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::LightSteelBlue;
			this->panel3->Controls->Add(this->cancelbtn);
			this->panel3->Controls->Add(this->masukbtn);
			this->panel3->Controls->Add(this->panel2);
			this->panel3->Controls->Add(this->passwordtxt);
			this->panel3->Controls->Add(this->label3);
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Controls->Add(this->usernametxt);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->label1);
			this->panel3->Location = System::Drawing::Point(5, 5);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(270, 315);
			this->panel3->TabIndex = 9;
			// 
			// signin
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::SteelBlue;
			this->ClientSize = System::Drawing::Size(280, 325);
			this->Controls->Add(this->panel3);
			this->Font = (gcnew System::Drawing::Font(L"Roboto", 10.25F));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"signin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"signin";
			this->Load += gcnew System::EventHandler(this, &signin::signin_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void signin_Load(System::Object^ sender, System::EventArgs^ e) {}
		private: System::Void cancelbtn_Click(System::Object^ sender, System::EventArgs^ e) {
			Form::Close();
		}
		private: System::Void masukbtn_Click(System::Object^ sender, System::EventArgs^ e);
	};
}
