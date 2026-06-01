#pragma once
#include <msclr\marshal_cppstd.h>
#include "Structs.h"
#include "List.h"
#include "FileManager.h"

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UserDialogForm
	/// </summary>
	public ref class UserDialogForm : public System::Windows::Forms::Form
	{
	public:
		bool isEditMode;  //режим работы формы
		String^ oldLogin;// Сюда сохраним старый логин при редактировании
		void SetData(String^ login, String^ password, String^ role)
		{
			txtLogin->Text = login;
			txtPassword->Text = password;

			if (role == "admin") cmbRole->SelectedIndex = 0;
			else if (role == "organizer") cmbRole->SelectedIndex = 1;
			else cmbRole->SelectedIndex = 2;

			oldLogin = login;
			isEditMode = true;
		}

		UserDialogForm(void)
		{
			InitializeComponent();
			isEditMode = false;
			oldLogin = "";
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UserDialogForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtLogin;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::ComboBox^ cmbRole;
	private: System::Windows::Forms::Button^ btnSave;

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

		// Получить логин из поля
		String^ GetLogin() { return txtLogin->Text->Trim(); }

		// Получить пароль из поля
		String^ GetPassword() { return txtPassword->Text->Trim(); }

		// Получить роль из ComboBox
		String^ GetRole()
		{
			if (cmbRole->SelectedItem != nullptr)
				return cmbRole->SelectedItem->ToString();
			return "player";
		}
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserDialogForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtLogin = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->cmbRole = (gcnew System::Windows::Forms::ComboBox());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1192, 673);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// txtLogin
			// 
			this->txtLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->txtLogin->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtLogin->ForeColor = System::Drawing::Color::White;
			this->txtLogin->Location = System::Drawing::Point(417, 230);
			this->txtLogin->Multiline = true;
			this->txtLogin->Name = L"txtLogin";
			this->txtLogin->Size = System::Drawing::Size(410, 41);
			this->txtLogin->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->txtPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtPassword->ForeColor = System::Drawing::Color::White;
			this->txtPassword->Location = System::Drawing::Point(417, 302);
			this->txtPassword->Multiline = true;
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->Size = System::Drawing::Size(410, 41);
			this->txtPassword->TabIndex = 2;
			// 
			// cmbRole
			// 
			this->cmbRole->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->cmbRole->DropDownHeight = 100;
			this->cmbRole->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->cmbRole->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmbRole->ForeColor = System::Drawing::Color::White;
			this->cmbRole->FormattingEnabled = true;
			this->cmbRole->IntegralHeight = false;
			this->cmbRole->ItemHeight = 31;
			this->cmbRole->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"admin", L"organizer", L"player" });
			this->cmbRole->Location = System::Drawing::Point(420, 373);
			this->cmbRole->Name = L"cmbRole";
			this->cmbRole->Size = System::Drawing::Size(407, 39);
			this->cmbRole->TabIndex = 3;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::BlueViolet;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI Black", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Location = System::Drawing::Point(352, 437);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(482, 56);
			this->btnSave->TabIndex = 4;
			this->btnSave->Text = L"СОХРАНИТЬ";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &UserDialogForm::btnSave_Click);
			// 
			// UserDialogForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1192, 673);
			this->Controls->Add(this->btnSave);
			this->Controls->Add(this->cmbRole);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->txtLogin);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"UserDialogForm";
			this->Text = L"Панель управления пользователями";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtLogin->Text->Trim()->Length == 0 || txtPassword->Text->Trim()->Length == 0) {
			MessageBox::Show("Заполните логин и пароль!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (cmbRole->SelectedIndex == -1) {
			MessageBox::Show("Выберите роль!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		std::string loginStd = msclr::interop::marshal_as<std::string>(txtLogin->Text->Trim());
		std::string passwordStd = msclr::interop::marshal_as<std::string>(txtPassword->Text->Trim());
		std::string roleStd = msclr::interop::marshal_as<std::string>(cmbRole->SelectedItem->ToString());

		AccountList* accList = new AccountList;
		InitAccountList(accList);
		LoadAllAccounts(accList);

		if (isEditMode)
		{
			System::String^ tempOldLogin = oldLogin;
			std::string oldLoginStd = msclr::interop::marshal_as<std::string>(tempOldLogin);
			AccountNode* cur = accList->head;
			while (cur != NULL)
			{
				if (strcmp(cur->data.login, oldLoginStd.c_str()) == 0)
				{
					std::string oldRole = std::string(cur->data.role);

					strncpy_s(cur->data.login, loginStd.c_str(), 29);
					strncpy_s(cur->data.password, passwordStd.c_str(), 29);
					strncpy_s(cur->data.role, roleStd.c_str(), 14);

					if (oldRole != "organizer" && roleStd == "organizer")
					{
						OrganizerList* orgList = new OrganizerList;
						InitOrganizerList(orgList);
						LoadAllOrganizers(orgList);

						if (FindOrganizerByAccountId(orgList, cur->data.id) == nullptr)
						{
							int newOrgId = 1;
							OrganizerNode* o = orgList->head;
							while (o != NULL) {
								if (o->data.id >= newOrgId) newOrgId = o->data.id + 1;
								o = o->next;
							}

							Organizer org = {};
							org.id = newOrgId;
							org.accountId = cur->data.id;
							strcpy_s(org.orgName, loginStd.c_str());
							strcpy_s(org.contacts, "");
							org.trustRating = 5.0;
							org.eventsCount = 0;
							AddOrganizer(orgList, org);
							SaveAllOrganizers(orgList);
						}
						delete orgList;
					}
					break;
				}
				cur = cur->next;
			}
		}
		else
		{
			Account newAcc = {};
			newAcc.isBanned = false;
			newAcc.id = 1;

			AccountNode* cur = accList->head;
			while (cur != NULL) {
				if (cur->data.id >= newAcc.id) newAcc.id = cur->data.id + 1;
				cur = cur->next;
			}

			strncpy_s(newAcc.login, loginStd.c_str(), 29);
			strncpy_s(newAcc.password, passwordStd.c_str(), 29);
			strncpy_s(newAcc.role, roleStd.c_str(), 14);
			AddAccount(accList, newAcc);

			if (roleStd == "organizer")
			{
				OrganizerList* orgList = new OrganizerList;
				InitOrganizerList(orgList);
				LoadAllOrganizers(orgList);

				int newOrgId = 1;
				OrganizerNode* o = orgList->head;
				while (o != NULL) {
					if (o->data.id >= newOrgId) newOrgId = o->data.id + 1;
					o = o->next;
				}

				Organizer org = {};
				org.id = newOrgId;
				org.accountId = newAcc.id;
				strcpy_s(org.orgName, loginStd.c_str());
				strcpy_s(org.contacts, "");
				org.trustRating = 5.0;
				org.eventsCount = 0;
				AddOrganizer(orgList, org);
				SaveAllOrganizers(orgList);
				delete orgList;
			}
		}

		SaveAllAccounts(accList);
		delete accList;

		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	};
}
