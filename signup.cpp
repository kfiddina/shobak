#include "signup.h"

void Project1::signup::daftarbtn_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		if (namatxt->Text != "" && notlptxt->Text != "" && usernametxt->Text != "" && passwordtxt->Text != "") {
			String^ nama = namatxt->Text;
			String^ notlp = notlptxt->Text;
			String^ username = usernametxt->Text;
			String^ password = passwordtxt->Text;
			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO user(nama, notlp, username, password, level) VALUES('"+nama+"','"+notlp+"','"+username+"','"+password+"','Pelanggan') ", con);
			con->Open();if (cmd->ExecuteReader()) {
				MessageBox::Show("Youre in bud");
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
