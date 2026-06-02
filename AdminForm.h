#pragma once
#include "msclr\marshal_cppstd.h"
#include "Structs.h"
#include "List.h"
#include "FileManager.h"
#include "UserDialogForm.h"

namespace kurs {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private: AccountList* accList;
	private: DisciplineList* discList;
	private: TournamentList* tournList;
	private: System::Windows::Forms::TabControl^ dgvDisciplines;



















	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::ComboBox^ comboBoxFilter;
	private: System::Windows::Forms::Button^ btnShow;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::ComboBox^ cmbSearchField;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::DataGridView^ dgvUsers;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnAddDiscipline;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtDisciplineName;
	private: System::Windows::Forms::Button^ btnDeleteDiscipline;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dgvTournaments;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column15;
	private: System::Windows::Forms::Button^ btnApproveTournament;
	private: System::Windows::Forms::Button^ btnRejectTournament;









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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dgvDisciplines = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxFilter = (gcnew System::Windows::Forms::ComboBox());
			this->btnShow = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->cmbSearchField = (gcnew System::Windows::Forms::ComboBox());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->dgvUsers = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnDeleteDiscipline = (gcnew System::Windows::Forms::Button());
			this->btnAddDiscipline = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtDisciplineName = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->dgvTournaments = (gcnew System::Windows::Forms::DataGridView());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnApproveTournament = (gcnew System::Windows::Forms::Button());
			this->btnRejectTournament = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->dgvDisciplines->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTournaments))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1309, 585);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dgvDisciplines
			// 
			this->dgvDisciplines->Controls->Add(this->tabPage1);
			this->dgvDisciplines->Controls->Add(this->tabPage2);
			this->dgvDisciplines->Controls->Add(this->tabPage3);
			this->dgvDisciplines->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dgvDisciplines->Location = System::Drawing::Point(0, 0);
			this->dgvDisciplines->Name = L"dgvDisciplines";
			this->dgvDisciplines->SelectedIndex = 0;
			this->dgvDisciplines->Size = System::Drawing::Size(1309, 585);
			this->dgvDisciplines->TabIndex = 12;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->tabPage1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage1.BackgroundImage")));
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->comboBoxFilter);
			this->tabPage1->Controls->Add(this->btnShow);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->btnSearch);
			this->tabPage1->Controls->Add(this->cmbSearchField);
			this->tabPage1->Controls->Add(this->txtSearch);
			this->tabPage1->Controls->Add(this->dgvUsers);
			this->tabPage1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1301, 556);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Пользователи";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(1101, 12);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(115, 31);
			this->label2->TabIndex = 21;
			this->label2->Text = L"ID/Логин";
			// 
			// comboBoxFilter
			// 
			this->comboBoxFilter->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->comboBoxFilter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->comboBoxFilter->FormattingEnabled = true;
			this->comboBoxFilter->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Показать всех", L"Заблокированные", L"Организаторы",
					L"Админы", L"Игроки"
			});
			this->comboBoxFilter->Location = System::Drawing::Point(1041, 242);
			this->comboBoxFilter->Name = L"comboBoxFilter";
			this->comboBoxFilter->Size = System::Drawing::Size(235, 36);
			this->comboBoxFilter->TabIndex = 20;
			// 
			// btnShow
			// 
			this->btnShow->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnShow->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnShow->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnShow->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnShow->ForeColor = System::Drawing::Color::White;
			this->btnShow->Location = System::Drawing::Point(1041, 285);
			this->btnShow->MaximumSize = System::Drawing::Size(300, 300);
			this->btnShow->Name = L"btnShow";
			this->btnShow->Size = System::Drawing::Size(235, 35);
			this->btnShow->TabIndex = 19;
			this->btnShow->Text = L"ПОКАЗАТЬ";
			this->btnShow->UseVisualStyleBackColor = false;
			this->btnShow->Click += gcnew System::EventHandler(this, &AdminForm::btnShow_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1041, 445);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(235, 35);
			this->button3->TabIndex = 18;
			this->button3->Text = L"РЕДАКТИРОВАТЬ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(1041, 486);
			this->button2->MaximumSize = System::Drawing::Size(300, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(235, 35);
			this->button2->TabIndex = 17;
			this->button2->Text = L"УДАЛИТЬ";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(1041, 404);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(235, 35);
			this->button1->TabIndex = 16;
			this->button1->Text = L"ДОБАВИТЬ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSearch->ForeColor = System::Drawing::Color::White;
			this->btnSearch->Location = System::Drawing::Point(1041, 130);
			this->btnSearch->MaximumSize = System::Drawing::Size(235, 35);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(235, 35);
			this->btnSearch->TabIndex = 15;
			this->btnSearch->Text = L"НАЙТИ";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &AdminForm::btnSearch_Click);
			// 
			// cmbSearchField
			// 
			this->cmbSearchField->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->cmbSearchField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cmbSearchField->FormattingEnabled = true;
			this->cmbSearchField->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Логин", L"ID" });
			this->cmbSearchField->Location = System::Drawing::Point(1041, 88);
			this->cmbSearchField->MaximumSize = System::Drawing::Size(235, 0);
			this->cmbSearchField->Name = L"cmbSearchField";
			this->cmbSearchField->Size = System::Drawing::Size(235, 36);
			this->cmbSearchField->TabIndex = 14;
			// 
			// txtSearch
			// 
			this->txtSearch->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtSearch->Location = System::Drawing::Point(1041, 48);
			this->txtSearch->MaximumSize = System::Drawing::Size(235, 35);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(235, 34);
			this->txtSearch->TabIndex = 13;
			// 
			// dgvUsers
			// 
			this->dgvUsers->AllowUserToAddRows = false;
			this->dgvUsers->AllowUserToOrderColumns = true;
			this->dgvUsers->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dgvUsers->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->dgvUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsers->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1, this->Column4,
					this->Column2, this->Column3, this->Column5
			});
			this->dgvUsers->GridColor = System::Drawing::Color::LightSteelBlue;
			this->dgvUsers->Location = System::Drawing::Point(8, 6);
			this->dgvUsers->MultiSelect = false;
			this->dgvUsers->Name = L"dgvUsers";
			this->dgvUsers->ReadOnly = true;
			this->dgvUsers->RowHeadersWidth = 51;
			this->dgvUsers->RowTemplate->Height = 24;
			this->dgvUsers->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvUsers->Size = System::Drawing::Size(1000, 540);
			this->dgvUsers->TabIndex = 12;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Логин";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Пароль";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Роль";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"ID";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Заблокирован";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 200;
			// 
			// tabPage2
			// 
			this->tabPage2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage2.BackgroundImage")));
			this->tabPage2->Controls->Add(this->btnDeleteDiscipline);
			this->tabPage2->Controls->Add(this->btnAddDiscipline);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->txtDisciplineName);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1301, 556);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Дисциплины";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnDeleteDiscipline
			// 
			this->btnDeleteDiscipline->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnDeleteDiscipline->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnDeleteDiscipline->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDeleteDiscipline->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnDeleteDiscipline->ForeColor = System::Drawing::Color::White;
			this->btnDeleteDiscipline->Location = System::Drawing::Point(1058, 263);
			this->btnDeleteDiscipline->MaximumSize = System::Drawing::Size(235, 38);
			this->btnDeleteDiscipline->Name = L"btnDeleteDiscipline";
			this->btnDeleteDiscipline->Size = System::Drawing::Size(199, 38);
			this->btnDeleteDiscipline->TabIndex = 4;
			this->btnDeleteDiscipline->Text = L"УДАЛИТЬ";
			this->btnDeleteDiscipline->UseVisualStyleBackColor = false;
			this->btnDeleteDiscipline->Click += gcnew System::EventHandler(this, &AdminForm::btnDeleteDiscipline_Click);
			// 
			// btnAddDiscipline
			// 
			this->btnAddDiscipline->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnAddDiscipline->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnAddDiscipline->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnAddDiscipline->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnAddDiscipline->ForeColor = System::Drawing::Color::White;
			this->btnAddDiscipline->Location = System::Drawing::Point(1058, 219);
			this->btnAddDiscipline->MaximumSize = System::Drawing::Size(235, 38);
			this->btnAddDiscipline->Name = L"btnAddDiscipline";
			this->btnAddDiscipline->Size = System::Drawing::Size(199, 38);
			this->btnAddDiscipline->TabIndex = 3;
			this->btnAddDiscipline->Text = L"ДОБАВИТЬ";
			this->btnAddDiscipline->UseVisualStyleBackColor = false;
			this->btnAddDiscipline->Click += gcnew System::EventHandler(this, &AdminForm::btnAddDiscipline_Click);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(1043, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(227, 28);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Название дисциплины";
			// 
			// txtDisciplineName
			// 
			this->txtDisciplineName->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->txtDisciplineName->Location = System::Drawing::Point(1058, 175);
			this->txtDisciplineName->Name = L"txtDisciplineName";
			this->txtDisciplineName->Size = System::Drawing::Size(199, 38);
			this->txtDisciplineName->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column7,
					this->Column6
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1000, 540);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"ID";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Дисциплина";
			this->Column6->MinimumWidth = 200;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 200;
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tabPage3.BackgroundImage")));
			this->tabPage3->Controls->Add(this->btnRejectTournament);
			this->tabPage3->Controls->Add(this->btnApproveTournament);
			this->tabPage3->Controls->Add(this->dgvTournaments);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1301, 556);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Турниры";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// dgvTournaments
			// 
			this->dgvTournaments->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->dgvTournaments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTournaments->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column8,
					this->Column9, this->Column10, this->Column11, this->Column12, this->Column13, this->Column14, this->Column15
			});
			this->dgvTournaments->Location = System::Drawing::Point(8, 6);
			this->dgvTournaments->Name = L"dgvTournaments";
			this->dgvTournaments->RowHeadersWidth = 51;
			this->dgvTournaments->RowTemplate->Height = 24;
			this->dgvTournaments->Size = System::Drawing::Size(1000, 540);
			this->dgvTournaments->TabIndex = 0;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"ID";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Название";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Дисциплина";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Формат";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Column12
			// 
			this->Column12->HeaderText = L"Призовой фонд";
			this->Column12->MinimumWidth = 6;
			this->Column12->Name = L"Column12";
			this->Column12->Width = 125;
			// 
			// Column13
			// 
			this->Column13->HeaderText = L"Дата";
			this->Column13->MinimumWidth = 6;
			this->Column13->Name = L"Column13";
			this->Column13->Width = 125;
			// 
			// Column14
			// 
			this->Column14->HeaderText = L"Статус";
			this->Column14->MinimumWidth = 6;
			this->Column14->Name = L"Column14";
			this->Column14->Width = 125;
			// 
			// Column15
			// 
			this->Column15->HeaderText = L"Мест";
			this->Column15->MinimumWidth = 6;
			this->Column15->Name = L"Column15";
			this->Column15->Width = 125;
			// 
			// btnApproveTournament
			// 
			this->btnApproveTournament->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnApproveTournament->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnApproveTournament->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnApproveTournament->ForeColor = System::Drawing::Color::White;
			this->btnApproveTournament->Location = System::Drawing::Point(1050, 195);
			this->btnApproveTournament->Name = L"btnApproveTournament";
			this->btnApproveTournament->Size = System::Drawing::Size(226, 49);
			this->btnApproveTournament->TabIndex = 1;
			this->btnApproveTournament->Text = L"ПОДТВЕРДИТЬ";
			this->btnApproveTournament->UseVisualStyleBackColor = false;
			this->btnApproveTournament->Click += gcnew System::EventHandler(this, &AdminForm::btnApproveTournament_Click);
			// 
			// btnRejectTournament
			// 
			this->btnRejectTournament->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnRejectTournament->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnRejectTournament->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnRejectTournament->ForeColor = System::Drawing::Color::White;
			this->btnRejectTournament->Location = System::Drawing::Point(1050, 250);
			this->btnRejectTournament->Name = L"btnRejectTournament";
			this->btnRejectTournament->Size = System::Drawing::Size(226, 49);
			this->btnRejectTournament->TabIndex = 2;
			this->btnRejectTournament->Text = L"ОТКЛОНИТЬ";
			this->btnRejectTournament->UseVisualStyleBackColor = false;
			this->btnRejectTournament->Click += gcnew System::EventHandler(this, &AdminForm::btnRejectTournament_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1309, 585);
			this->Controls->Add(this->dgvDisciplines);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(900, 500);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Панель Админа";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->dgvDisciplines->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTournaments))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		void RefreshTable()
		{
			dgvUsers->Rows->Clear();

			AccountNode* current = accList->head;
			while (current != NULL)
			{
				String^ id = current->data.id.ToString();
				String^ login = msclr::interop::marshal_as<String^>(std::string(current->data.login));
				String^ password = msclr::interop::marshal_as<String^>(std::string(current->data.password));
				String^ role = msclr::interop::marshal_as<String^>(std::string(current->data.role));
				String^ banned = current->data.isBanned ? "Да" : "Нет";

				dgvUsers->Rows->Add(id, login, password, role, banned);

				current = current->next;
			}
		}

		void RefreshDisciplineTable()
		{
			dataGridView1->Rows->Clear();

			DisciplineNode* current = discList->head;
			while (current != NULL)
			{
				String^ id = current->data.id.ToString();
				String^ name = msclr::interop::marshal_as<String^>(std::string(current->data.name));
				dataGridView1->Rows->Add(id, name);
				current = current->next;
			}
		}

		void RefreshTournamentTable()
		{
			dgvTournaments->Rows->Clear();

			TournamentNode* cur = tournList->head;
			while (cur != NULL)
			{
				if (strcmp(cur->data.status, "На проверке") == 0)
				{
					int freePlaces = cur->data.maxPlayers - cur->data.currentPlayers;
					String^ places = freePlaces.ToString() + " / " + cur->data.maxPlayers.ToString();

					dgvTournaments->Rows->Add(
						cur->data.id,
						gcnew String(cur->data.title),
						gcnew String(cur->data.discipline),
						gcnew String(cur->data.format),
						cur->data.prizePool,
						gcnew String(cur->data.date),
						gcnew String(cur->data.status),
						places
					);
				}
				cur = cur->next;
			}
		}

	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
		accList = new AccountList;
		InitAccountList(accList);
		LoadAllAccounts(accList);

		// Настраиваем столбцы таблицы вручную
		dgvUsers->Columns->Clear();
		dgvUsers->Columns->Add("colId", "ID");
		dgvUsers->Columns->Add("colLogin", "Логин");
		dgvUsers->Columns->Add("colPassword", "Пароль");
		dgvUsers->Columns->Add("colRole", "Роль");
		dgvUsers->Columns->Add("colBanned", "Заблокирован");

		// Заполняем таблицу из списка
		RefreshTable();
		discList = new DisciplineList;
		InitDisciplineList(discList);
		LoadAllDisciplines(discList);
		CreateDefaultDisciplines(discList); // создаст дефолтные если файл пустой

		dataGridView1->Columns->Clear();
		dataGridView1->Columns->Add("colDiscId", "ID");
		dataGridView1->Columns->Add("colDiscName", "Дисциплина");
		dataGridView1->AllowUserToAddRows = false;
		dataGridView1->ReadOnly = true;
		dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		dataGridView1->MultiSelect = false;
		RefreshDisciplineTable();

		tournList = new TournamentList;
		InitTournamentList(tournList);
		LoadAllTournaments(tournList);

		dgvTournaments->AllowUserToAddRows = false;
		dgvTournaments->ReadOnly = true;
		dgvTournaments->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
		dgvTournaments->MultiSelect = false;

		RefreshTournamentTable();
	}

	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		// Получаем текст поиска
		String^ searchText = txtSearch->Text->Trim();

		if (searchText->Length == 0)
		{
			MessageBox::Show("Введите текст для поиска!",
				"Поиск", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Конвертируем в char[]
		std::string searchStd = msclr::interop::marshal_as<std::string>(searchText);
		char search[30] = {};
		strncpy_s(search, searchStd.c_str(), 29);

		// Очищаем таблицу
		dgvUsers->Rows->Clear();

		// Определяем по какому полю ищем
		int fieldIndex = cmbSearchField->SelectedIndex;
		// 0 = Логин, 2 = ID

		AccountNode* current = accList->head;
		while (current != NULL)
		{
			bool found = false;

			if (fieldIndex == 0) // поиск по Логину
			{
				if (strstr(current->data.login, search) != NULL)
					found = true;
			}
			else if (fieldIndex == 1) // поиск по ID
			{
				// Конвертируем ID в строку и сравниваем
				char idStr[10] = {};
				sprintf_s(idStr, "%d", current->data.id);
				if (strstr(idStr, search) != NULL)
					found = true;
			}
			else
			{
				// Если поле не выбрано — ищем по логину
				if (strstr(current->data.login, search) != NULL)
					found = true;
			}

			// Если нашли — добавляем в таблицу
			if (found)
			{
				String^ id = current->data.id.ToString();
				String^ login = msclr::interop::marshal_as<String^>(std::string(current->data.login));
				String^ password = msclr::interop::marshal_as<String^>(std::string(current->data.password));
				String^ role = msclr::interop::marshal_as<String^>(std::string(current->data.role));
				String^ banned = current->data.isBanned ? "Да" : "Нет";

				dgvUsers->Rows->Add(id, login, password, role, banned);
			}

			current = current->next;
		}

		if (dgvUsers->Rows->Count == 0)
			MessageBox::Show("Ничего не найдено!", "Поиск",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnShow_Click(System::Object^ sender, System::EventArgs^ e) {
		if (comboBoxFilter->SelectedIndex == -1) {
			MessageBox::Show("Выберите категорию для отображения!",
				"Внимание", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		String^ filter = comboBoxFilter->SelectedItem->ToString();

		// Сначала загружаем все данные заново
		RefreshTable();

		// Если "Показать всех" — просто оставляем всё как есть
		if (filter == "Показать всех")
			return;

		// Убираем фокус с ячейки — иначе крашнется при скрытии строк
		dgvUsers->CurrentCell = nullptr;

		for (int i = 0; i < dgvUsers->Rows->Count; i++)
		{
			DataGridViewRow^ row = dgvUsers->Rows[i];
			if (row->IsNewRow) continue;

			// Столбец 3 — Роль, столбец 4 — Заблокирован
			String^ role = (row->Cells[3]->Value != nullptr) ? row->Cells[3]->Value->ToString() : "";
			String^ banned = (row->Cells[4]->Value != nullptr) ? row->Cells[4]->Value->ToString() : "";

			if (filter == "Заблокированные")
				row->Visible = (banned == "Да");

			else if (filter == "Организаторы")
				row->Visible = (role == "organizer");

			else if (filter == "Админы")
				row->Visible = (role == "admin");

			else if (filter == "Игроки")
				row->Visible = (role == "player");
		}

		// Если ничего не нашлось — говорим об этом
		bool anyVisible = false;
		for (int i = 0; i < dgvUsers->Rows->Count; i++)
			if (!dgvUsers->Rows[i]->IsNewRow && dgvUsers->Rows[i]->Visible)
				anyVisible = true;

		if (!anyVisible)
			MessageBox::Show("Нет пользователей с таким критерием.",
				"Результат", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверяем что строка выбрана
		if (dgvUsers->SelectedRows->Count == 0)
		{
			MessageBox::Show("Выберите пользователя для удаления!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Получаем ID из выделенной строки
		int selectedId = int::Parse(dgvUsers->SelectedRows[0]->Cells[0]->Value->ToString());

		// Подтверждение удаления
		String^ login = dgvUsers->SelectedRows[0]->Cells[1]->Value->ToString();
		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Удалить пользователя " + login + "?",
			"Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			// Удаляем из списка
			RemoveAccount(accList, selectedId);

			// Сохраняем изменения в файл
			SaveAllAccounts(accList);

			// Обновляем таблицу
			RefreshTable();

			MessageBox::Show("Пользователь удалён!", "Успех",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Открываем пустую форму
		UserDialogForm^ dialog = gcnew UserDialogForm();
		dialog->Text = "Добавить пользователя";

		// Если нажали СОХРАНИТЬ — обновляем таблицу
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Перезагружаем список из файла
			LoadAllAccounts(accList);

			// Обновляем таблицу
			RefreshTable();
		}
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Проверяем что строка выбрана
		if (dgvUsers->SelectedRows->Count == 0)
		{
			MessageBox::Show("Выберите пользователя для редактирования!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Получаем данные из выбранной строки
		// Порядок колонок: ID, Логин, Пароль, Роль, Заблокирован
		String^ login = dgvUsers->SelectedRows[0]->Cells[1]->Value->ToString();
		String^ password = dgvUsers->SelectedRows[0]->Cells[2]->Value->ToString();
		String^ role = dgvUsers->SelectedRows[0]->Cells[3]->Value->ToString();

		// Открываем форму и заполняем данными
		UserDialogForm^ dialog = gcnew UserDialogForm();
		dialog->SetData(login, password, role);

		// Если нажали СОХРАНИТЬ — обновляем таблицу
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Перезагружаем список из файла
			LoadAllAccounts(accList);

			// Обновляем таблицу
			RefreshTable();
		}
	}

	private: System::Void btnAddDiscipline_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = txtDisciplineName->Text->Trim();

		if (name->Length == 0)
		{
			MessageBox::Show("Введите название дисциплины!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Считаем максимальный ID и делаем +1
		int newId = 1;
		DisciplineNode* cur = discList->head;
		while (cur != NULL) {
			if (cur->data.id >= newId)
				newId = cur->data.id + 1;
			cur = cur->next;
		}

		Discipline d;
		d.id = newId;

		std::string nameStd = msclr::interop::marshal_as<std::string>(name);
		strcpy_s(d.name, nameStd.c_str());

		AddDiscipline(discList, d);
		SaveAllDisciplines(discList);
		RefreshDisciplineTable();

		txtDisciplineName->Clear();
		MessageBox::Show("Дисциплина добавлена!", "Успех",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnDeleteDiscipline_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count == 0)
		{
			MessageBox::Show("Выберите дисциплину для удаления!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int selectedId = int::Parse(
			dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString());

		String^ discName = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();

		System::Windows::Forms::DialogResult result = MessageBox::Show(
			"Удалить дисциплину \"" + discName + "\"?",
			"Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			RemoveDiscipline(discList, selectedId);
			SaveAllDisciplines(discList);
			RefreshDisciplineTable();

			MessageBox::Show("Дисциплина удалена!", "Успех",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void btnApproveTournament_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvTournaments->SelectedRows->Count == 0)
		{
			MessageBox::Show("Выберите турнир!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int id = int::Parse(dgvTournaments->SelectedRows[0]->Cells[0]->Value->ToString());

		TournamentNode* cur = tournList->head;
		while (cur != NULL)
		{
			if (cur->data.id == id)
			{
				strcpy_s(cur->data.status, "Активен");
				break;
			}
			cur = cur->next;
		}

		SaveAllTournaments(tournList);
		RefreshTournamentTable();

		MessageBox::Show("Турнир подтверждён!", "Успех",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnRejectTournament_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvTournaments->SelectedRows->Count == 0)
		{
			MessageBox::Show("Выберите турнир!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int id = int::Parse(dgvTournaments->SelectedRows[0]->Cells[0]->Value->ToString());

		TournamentNode* cur = tournList->head;
		while (cur != NULL)
		{
			if (cur->data.id == id)
			{
				strcpy_s(cur->data.status, "Черновик");
				break;
			}
			cur = cur->next;
		}

		SaveAllTournaments(tournList);
		RefreshTournamentTable();

		MessageBox::Show("Турнир отклонён, возвращён организатору.", "Готово",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	};
}