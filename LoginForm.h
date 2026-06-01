#pragma once
#include "msclr\marshal_cppstd.h"
#include "OrganizerForm.h"
#include "Structs.h"
#include "List.h"
#include "FileManager.h"
#include "PlayerForm.h"
#include "AdminForm.h"




namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AccountList* accList;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnLog;
	private: System::Windows::Forms::Button^ btnReg;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
	void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnReg = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1280, 720);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// txtLogin
			// 
			this->txtLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->txtLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtLogin->ForeColor = System::Drawing::Color::White;
			this->txtLogin->Location = System::Drawing::Point(476, 329);
			this->txtLogin->Multiline = true;
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(368, 36);
			this->txtLogin->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtPassword->ForeColor = System::Drawing::Color::White;
			this->txtPassword->Location = System::Drawing::Point(476, 406);
			this->txtPassword->Multiline = true;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(368, 36);
			this->txtPassword->TabIndex = 2;
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::Color::BlueViolet;
			this->btnLog->FlatAppearance->BorderSize = 0;
			this->btnLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnLog->ForeColor = System::Drawing::Color::White;
			this->btnLog->Location = System::Drawing::Point(417, 476);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(438, 61);
			this->btnLog->TabIndex = 3;
			this->btnLog->Text = L"ВОЙТИ";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &LoginForm::btnLog_Click);
			// 
			// btnReg
			// 
			this->btnReg->BackColor = System::Drawing::Color::BlueViolet;
			this->btnReg->FlatAppearance->BorderSize = 0;
			this->btnReg->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnReg->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnReg->ForeColor = System::Drawing::Color::White;
			this->btnReg->Location = System::Drawing::Point(417, 557);
			this->btnReg->Name = L"btnReg";
			this->btnReg->Size = System::Drawing::Size(438, 61);
			this->btnReg->TabIndex = 4;
			this->btnReg->Text = L"ЗАРЕГЕСТРИРОВАТЬСЯ";
			this->btnReg->UseVisualStyleBackColor = false;
			this->btnReg->Click += gcnew System::EventHandler(this, &LoginForm::btnReg_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1280, 720);
			this->Controls->Add(this->btnReg);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Авторизация";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load_1);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::LoginForm_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		accList = new AccountList;
		CreateDataFolder();
		InitAccountList(accList);
		LoadAllAccounts(accList);
		CreateDefaultAccounts(accList);
	}

	private: System::Void btnLog_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ loginStr = txtLogin->Text->Trim();
		String^ passwordStr = txtPassword->Text->Trim();

		if (loginStr->Length == 0 || passwordStr->Length == 0)
		{
			MessageBox::Show(
				"Заполните поля логина и пароля!",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}

		std::string loginStd = msclr::interop::marshal_as<std::string>(loginStr);
		std::string passwordStd = msclr::interop::marshal_as<std::string>(passwordStr);
		char login[30] = {};
		char password[30] = {};
		strncpy_s(login, loginStd.c_str(), 29);
		strncpy_s(password, passwordStd.c_str(), 29);

		AccountNode* found = FindAccountByLoginPass(accList, login, password);

		if (found == NULL)
		{
			MessageBox::Show(
				"Неверный логин или пароль!",
				"Ошибка входа",
				MessageBoxButtons::OK,
				MessageBoxIcon::Error);

			txtPassword->Clear();
			txtPassword->Focus();
			return;
		}

		if (found->data.isBanned)
		{
			MessageBox::Show(
				"Ваш аккаунт заблокирован!\nОбратитесь к администратору.",
				"Доступ запрещён",
				MessageBoxButtons::OK,
				MessageBoxIcon::Stop);
			return;
		}

		if (strcmp(found->data.role, "admin") == 0)
		{
			MessageBox::Show(
				"Добро пожаловать, Администратор!",
				"Вход выполнен",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);

			this->Hide();
			AdminForm^ form = gcnew AdminForm;
			form->ShowDialog();
			this->Show();
			this->Close();
		}
		else if (strcmp(found->data.role, "organizer") == 0)
		{
			MessageBox::Show(
				"Добро пожаловать, Организатор!",
				"Вход выполнен",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);

			this->Hide();
			OrganizerForm^ form = gcnew OrganizerForm(found->data.id);
			form->ShowDialog();
			this->Show();
			this->Close();
		}
		else if (strcmp(found->data.role, "player") == 0)
		{
			MessageBox::Show(
				"Добро пожаловать, Игрок!",
				"Вход выполнен",
				MessageBoxButtons::OK,
				MessageBoxIcon::Information);

			this->Hide();
			PlayerForm^ form = gcnew PlayerForm;
			form->ShowDialog();
			this->Show();
			this->Close();
		}
	}

	private: System::Void LoginForm_Load_1(System::Object^ sender, System::EventArgs^ e) {
		accList = new AccountList;
		CreateDataFolder();
		InitAccountList(accList);
		LoadAllAccounts(accList);
		CreateDefaultAccounts(accList);
	}

	private: System::Void btnReg_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ loginStr = txtLogin->Text->Trim();
		String^ passwordStr = txtPassword->Text->Trim();
		if (loginStr->Length == 0 || passwordStr->Length == 0)
		{
			MessageBox::Show(
				"Заполните поля логина и пароля!",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}

		if (passwordStr->Length < 6)
		{
			MessageBox::Show(
				"Пароль должен быть не менее 6 символов!",
				"Ошибка",
				MessageBoxButtons::OK,
				MessageBoxIcon::Warning);
			return;
		}

		std::string loginStd = msclr::interop::marshal_as<std::string>(loginStr);
		std::string passwordStd = msclr::interop::marshal_as<std::string>(passwordStr);
		char login[30] = {};
		char password[30] = {};
		strncpy_s(login, loginStd.c_str(), 29);
		strncpy_s(password, passwordStd.c_str(), 29);

		AccountNode* existing = accList->head;
		while (existing != NULL)
		{
			if (strcmp(existing->data.login, login) == 0)
			{
				MessageBox::Show(
					"Такой логин уже занят!\nПридумайте другой.",
					"Ошибка регистрации",
					MessageBoxButtons::OK,
					MessageBoxIcon::Warning);
				return;
			}
			existing = existing->next;
		}

		int newId = 1;
		AccountNode* cur = accList->head;
		while (cur != NULL)
		{
			if (cur->data.id >= newId)
				newId = cur->data.id + 1;
			cur = cur->next;
		}

		Account newAcc;
		newAcc.id = newId;
		newAcc.isBanned = false;
		strcpy_s(newAcc.login, login);
		strcpy_s(newAcc.password, password);
		strcpy_s(newAcc.role, "player");
		AddAccount(accList, newAcc);
		SaveAllAccounts(accList);

		MessageBox::Show(
			"Регистрация прошла успешно!\n\n"
			"Логин: " + loginStr + "\n"
			"Роль: Игрок\n\n"
			"Теперь вы можете войти.",
			"Готово!",
			MessageBoxButtons::OK,
			MessageBoxIcon::Information);

		txtLogin->Clear();
		txtPassword->Clear();
		txtLogin->Focus();
	}

	private: System::Void LoginForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter)
		{
			e->Handled = true;
			e->SuppressKeyPress = true;
			btnLog_Click(sender, e);
		}
	}
	};
}
