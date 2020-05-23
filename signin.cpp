#include "signin.h"

void Project1::signin::masukbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (usernametxt->Text != "" && passwordtxt->Text != "") {
			String^ username = usernametxt->Text;
			String^ password = passwordtxt->Text;
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT * FROM user WHERE username = '" + username + "' AND password = '" + password + "'", con);
			con->Open();
			if (MySqlDataReader^ dr = cmd->ExecuteReader()) {
				
				while (dr->Read()) {
					String^ nama = dr->GetString(1);
					MessageBox::Show("Youre in bud, "+ nama);
				}
				con->Close();
			}
			else {
				MessageBox::Show("Username atau Password Salah", "Informasi");
				con->Close();
			}
		}
		else {
			MessageBox::Show("Mohon Lengkapi Kolom Isian!", "Informasi");
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}

