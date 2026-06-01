#pragma once
#include "msclr\marshal_cppstd.h"
#include "Structs.h"
#include "List.h"
#include "FileManager.h"
#include "OrganizerForm.h"
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
	public ref class OrganizerForm : public System::Windows::Forms::Form
	{
	public:
	public: int loggedAccountId;

		  OrganizerForm(int accountId)
		  {
			  loggedAccountId = accountId;
			  InitializeComponent();
		  }

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~OrganizerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::ComboBox^ cmbFilter;

	private: System::Windows::Forms::DataGridView^ dgvTournaments;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::Button^ btnEdit;
	private: System::Windows::Forms::Button^ btnCreate;

	private: System::Windows::Forms::Button^ btnSendToReview;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: TournamentList* tournList;
	private: int currentOrgId;
	private: OrganizerList* orgList;
	private: AccountList* accList;
	private: int currentAccountId;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ btnSave;


	private: System::Windows::Forms::TextBox^ txtContacts;
	private: System::Windows::Forms::TextBox^ txtOrgName;
	private: System::Windows::Forms::Label^ lblLogin;
	private: System::Windows::Forms::Label^ lblID;
	private: System::Windows::Forms::Label^ lblEventsCount;
	private: System::Windows::Forms::Label^ lblRating;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::ComponentModel::IContainer^ components;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OrganizerForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnSendToReview = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->cmbFilter = (gcnew System::Windows::Forms::ComboBox());
			this->dgvTournaments = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->lblEventsCount = (gcnew System::Windows::Forms::Label());
			this->lblRating = (gcnew System::Windows::Forms::Label());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->txtContacts = (gcnew System::Windows::Forms::TextBox());
			this->txtOrgName = (gcnew System::Windows::Forms::TextBox());
			this->lblLogin = (gcnew System::Windows::Forms::Label());
			this->lblID = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTournaments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1309, 585);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->txtSearch);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->btnSendToReview);
			this->tabPage1->Controls->Add(this->btnDelete);
			this->tabPage1->Controls->Add(this->btnEdit);
			this->tabPage1->Controls->Add(this->btnCreate);
			this->tabPage1->Controls->Add(this->btnSearch);
			this->tabPage1->Controls->Add(this->cmbFilter);
			this->tabPage1->Controls->Add(this->dgvTournaments);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1301, 556);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Турниры";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1038, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 31);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Название";
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold));
			this->txtSearch->Location = System::Drawing::Point(1038, 52);
			this->txtSearch->Multiline = true;
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(218, 39);
			this->txtSearch->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(791, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 31);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Статус";
			// 
			// btnSendToReview
			// 
			this->btnSendToReview->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnSendToReview->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSendToReview->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnSendToReview->ForeColor = System::Drawing::Color::White;
			this->btnSendToReview->Location = System::Drawing::Point(922, 331);
			this->btnSendToReview->MaximumSize = System::Drawing::Size(235, 60);
			this->btnSendToReview->Name = L"btnSendToReview";
			this->btnSendToReview->Size = System::Drawing::Size(235, 60);
			this->btnSendToReview->TabIndex = 7;
			this->btnSendToReview->Text = L"ОТПРАВИТЬ НА ПРОВЕРКУ";
			this->btnSendToReview->UseVisualStyleBackColor = false;
			this->btnSendToReview->Click += gcnew System::EventHandler(this, &OrganizerForm::btnSendToReview_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnDelete->ForeColor = System::Drawing::Color::White;
			this->btnDelete->Location = System::Drawing::Point(922, 285);
			this->btnDelete->MaximumSize = System::Drawing::Size(235, 40);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(235, 40);
			this->btnDelete->TabIndex = 6;
			this->btnDelete->Text = L"УДАЛИТЬ";
			this->btnDelete->UseVisualStyleBackColor = false;
			this->btnDelete->Click += gcnew System::EventHandler(this, &OrganizerForm::btnDelete_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnEdit->ForeColor = System::Drawing::Color::White;
			this->btnEdit->Location = System::Drawing::Point(922, 239);
			this->btnEdit->MaximumSize = System::Drawing::Size(235, 40);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(235, 40);
			this->btnEdit->TabIndex = 5;
			this->btnEdit->Text = L"РЕДАКТИРОВАТЬ";
			this->btnEdit->UseVisualStyleBackColor = false;
			this->btnEdit->Click += gcnew System::EventHandler(this, &OrganizerForm::btnEdit_Click);
			// 
			// btnCreate
			// 
			this->btnCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnCreate->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnCreate->ForeColor = System::Drawing::Color::White;
			this->btnCreate->Location = System::Drawing::Point(922, 193);
			this->btnCreate->MaximumSize = System::Drawing::Size(235, 40);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(235, 40);
			this->btnCreate->TabIndex = 4;
			this->btnCreate->Text = L"СОЗДАТЬ ТУРНИР";
			this->btnCreate->UseVisualStyleBackColor = false;
			this->btnCreate->Click += gcnew System::EventHandler(this, &OrganizerForm::btnCreate_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnSearch->ForeColor = System::Drawing::Color::White;
			this->btnSearch->Location = System::Drawing::Point(915, 97);
			this->btnSearch->MaximumSize = System::Drawing::Size(235, 40);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(235, 40);
			this->btnSearch->TabIndex = 3;
			this->btnSearch->Text = L"НАЙТИ";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &OrganizerForm::btnSearch_Click);
			// 
			// cmbFilter
			// 
			this->cmbFilter->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold));
			this->cmbFilter->FormattingEnabled = true;
			this->cmbFilter->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Все турниры", L"Черновик", L"На проверке", L"В ожидании",
					L"Активен", L"Завершён", L"Отменён"
			});
			this->cmbFilter->Location = System::Drawing::Point(797, 52);
			this->cmbFilter->Name = L"cmbFilter";
			this->cmbFilter->Size = System::Drawing::Size(235, 39);
			this->cmbFilter->TabIndex = 2;
			// 
			// dgvTournaments
			// 
			this->dgvTournaments->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->dgvTournaments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvTournaments->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dgvTournaments->Location = System::Drawing::Point(8, 6);
			this->dgvTournaments->Name = L"dgvTournaments";
			this->dgvTournaments->ReadOnly = true;
			this->dgvTournaments->RowHeadersWidth = 51;
			this->dgvTournaments->RowTemplate->Height = 24;
			this->dgvTournaments->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dgvTournaments->Size = System::Drawing::Size(760, 540);
			this->dgvTournaments->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 50;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Название";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 150;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Дисциплина";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Формат";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 70;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Призовой фонд";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Дата";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->ReadOnly = true;
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Статус";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->ReadOnly = true;
			this->Column7->Width = 125;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(3, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1295, 550);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->pictureBox6);
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1301, 556);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Матчи";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(3, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(1295, 550);
			this->pictureBox6->TabIndex = 0;
			this->pictureBox6->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1301, 556);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Заявки";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(3, 3);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(1295, 550);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->pictureBox4);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1301, 556);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Жалобы";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(3, 3);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1295, 550);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->label8);
			this->tabPage4->Controls->Add(this->label7);
			this->tabPage4->Controls->Add(this->label6);
			this->tabPage4->Controls->Add(this->label5);
			this->tabPage4->Controls->Add(this->label4);
			this->tabPage4->Controls->Add(this->label3);
			this->tabPage4->Controls->Add(this->lblEventsCount);
			this->tabPage4->Controls->Add(this->lblRating);
			this->tabPage4->Controls->Add(this->btnSave);
			this->tabPage4->Controls->Add(this->txtContacts);
			this->tabPage4->Controls->Add(this->txtOrgName);
			this->tabPage4->Controls->Add(this->lblLogin);
			this->tabPage4->Controls->Add(this->lblID);
			this->tabPage4->Controls->Add(this->pictureBox5);
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1301, 556);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Профиль";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(70, 134);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(567, 38);
			this->label8->TabIndex = 15;
			this->label8->Text = L"КОЛИЧЕСТВО МЕРОПРИЯТИЙ";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->label8, L"Нельзя изменить!");
			// 
			// label7
			// 
			this->label7->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(70, 34);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(567, 38);
			this->label7->TabIndex = 14;
			this->label7->Text = L"РЕЙТИНГ ДОВЕРИЯ";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->label7, L"Нельзя изменить!");
			// 
			// label6
			// 
			this->label6->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(875, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(286, 38);
			this->label6->TabIndex = 13;
			this->label6->Text = L"КОНТАКТЫ";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->label6, L"Можно изменить");
			// 
			// label5
			// 
			this->label5->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(653, 134);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(216, 38);
			this->label5->TabIndex = 12;
			this->label5->Text = L"ИМЯ";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->label5, L"Можно изменить");
			// 
			// label4
			// 
			this->label4->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(652, 34);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(216, 38);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ЛОГИН";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->label4, L"Нельзя изменить!");
			// 
			// label3
			// 
			this->label3->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(874, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(287, 38);
			this->label3->TabIndex = 10;
			this->label3->Text = L"ID";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->label3, L"Нельзя изменить!");
			// 
			// lblEventsCount
			// 
			this->lblEventsCount->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->lblEventsCount->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->lblEventsCount->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblEventsCount->ForeColor = System::Drawing::Color::White;
			this->lblEventsCount->Location = System::Drawing::Point(70, 172);
			this->lblEventsCount->Name = L"lblEventsCount";
			this->lblEventsCount->Size = System::Drawing::Size(567, 46);
			this->lblEventsCount->TabIndex = 9;
			this->lblEventsCount->Text = L"Кол-во мероприятий";
			this->lblEventsCount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lblEventsCount, L"Нельзя изменить!");
			// 
			// lblRating
			// 
			this->lblRating->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->lblRating->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->lblRating->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblRating->ForeColor = System::Drawing::Color::White;
			this->lblRating->Location = System::Drawing::Point(70, 72);
			this->lblRating->Name = L"lblRating";
			this->lblRating->Size = System::Drawing::Size(567, 42);
			this->lblRating->TabIndex = 8;
			this->lblRating->Text = L"+рейтинг";
			this->lblRating->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->lblRating, L"Нельзя изменить!");
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Location = System::Drawing::Point(443, 452);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(404, 94);
			this->btnSave->TabIndex = 7;
			this->btnSave->Text = L"СОХРАНИТЬ ИЗМЕНЕНИЯ";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &OrganizerForm::btnSave_Click);
			// 
			// txtContacts
			// 
			this->txtContacts->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->txtContacts->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtContacts->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtContacts->ForeColor = System::Drawing::Color::White;
			this->txtContacts->Location = System::Drawing::Point(875, 172);
			this->txtContacts->Multiline = true;
			this->txtContacts->Name = L"txtContacts";
			this->txtContacts->Size = System::Drawing::Size(286, 46);
			this->txtContacts->TabIndex = 4;
			this->txtContacts->Text = L"+контакт";
			this->toolTip1->SetToolTip(this->txtContacts, L"Можно изменить\r\n");
			// 
			// txtOrgName
			// 
			this->txtOrgName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->txtOrgName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->txtOrgName->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtOrgName->ForeColor = System::Drawing::Color::White;
			this->txtOrgName->Location = System::Drawing::Point(653, 172);
			this->txtOrgName->Multiline = true;
			this->txtOrgName->Name = L"txtOrgName";
			this->txtOrgName->Size = System::Drawing::Size(216, 46);
			this->txtOrgName->TabIndex = 3;
			this->txtOrgName->Text = L"+имя";
			this->toolTip1->SetToolTip(this->txtOrgName, L"Можно изменить");
			// 
			// lblLogin
			// 
			this->lblLogin->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->lblLogin->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->lblLogin->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->lblLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblLogin->ForeColor = System::Drawing::Color::White;
			this->lblLogin->Location = System::Drawing::Point(652, 72);
			this->lblLogin->Name = L"lblLogin";
			this->lblLogin->Size = System::Drawing::Size(216, 40);
			this->lblLogin->TabIndex = 2;
			this->lblLogin->Text = L"+логин";
			this->toolTip1->SetToolTip(this->lblLogin, L"Нельзя изменить!");
			// 
			// lblID
			// 
			this->lblID->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->lblID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(50)));
			this->lblID->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblID->ForeColor = System::Drawing::Color::White;
			this->lblID->Location = System::Drawing::Point(874, 72);
			this->lblID->Name = L"lblID";
			this->lblID->Size = System::Drawing::Size(287, 40);
			this->lblID->TabIndex = 1;
			this->lblID->Text = L"+айди";
			this->toolTip1->SetToolTip(this->lblID, L"Нельзя изменить!");
			// 
			// pictureBox5
			// 
			this->pictureBox5->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->pictureBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(3, 3);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(1295, 550);
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &OrganizerForm::pictureBox5_Click);
			// 
			// OrganizerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1309, 585);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(900, 500);
			this->Name = L"OrganizerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Панель Организатора";
			this->Load += gcnew System::EventHandler(this, &OrganizerForm::OrganizerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvTournaments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	void RefreshTournaments()
		{
			dgvTournaments->Rows->Clear();

			String^ filter = cmbFilter->SelectedItem != nullptr
				? cmbFilter->SelectedItem->ToString()
				: "Все турниры";

			TournamentNode* cur = tournList->head;
			while (cur != NULL)
			{
				// Показываем только турниры этого организатора
				if (cur->data.organizerId != currentOrgId) {
					cur = cur->next;
					continue;
				}

				String^ status = msclr::interop::marshal_as<String^>(std::string(cur->data.status));

				// Применяем фильтр по статусу
				if (filter != "Все турниры" && status != filter) {
					cur = cur->next;
					continue;
				}

				String^ id = cur->data.id.ToString();
				String^ title = msclr::interop::marshal_as<String^>(std::string(cur->data.title));
				String^ disc = msclr::interop::marshal_as<String^>(std::string(cur->data.discipline));
				String^ format = msclr::interop::marshal_as<String^>(std::string(cur->data.format));
				String^ prize = cur->data.prizePool.ToString();
				String^ date = msclr::interop::marshal_as<String^>(std::string(cur->data.date));

				dgvTournaments->Rows->Add(id, title, disc, format, prize, date, status);
				cur = cur->next;
			}
		}

	private: void LoadProfileTab()
	{
		OrganizerNode* orgNode = FindOrganizerByAccountId(orgList, currentAccountId);
		if (orgNode == nullptr) return;

		Organizer& o = orgNode->data;
		AccountNode* accNode = FindAccountById(accList, currentAccountId);

		lblID->Text = currentAccountId.ToString();
		if (accNode != nullptr) {
			String^ login = msclr::interop::marshal_as<String^>(std::string(accNode->data.login));
			lblLogin->Text = login;
		}

		txtOrgName->Text = msclr::interop::marshal_as<String^>(std::string(o.orgName));
		txtContacts->Text = msclr::interop::marshal_as<String^>(std::string(o.contacts));
		lblRating->Text = o.trustRating.ToString("F1") + " / 10.0";
		lblEventsCount->Text = o.eventsCount.ToString();
	}
	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ searchText = txtSearch->Text->Trim();
		String^ filter = cmbFilter->SelectedItem != nullptr
			? cmbFilter->SelectedItem->ToString()
			: "Все турниры";

		dgvTournaments->Rows->Clear();

		TournamentNode* cur = tournList->head;
		while (cur != NULL)
		{
			if (cur->data.organizerId != currentOrgId) {
				cur = cur->next;
				continue;
			}

			String^ status = msclr::interop::marshal_as<String^>(std::string(cur->data.status));
			String^ title = msclr::interop::marshal_as<String^>(std::string(cur->data.title));

			// Фильтр по статусу
			if (filter != "Все турниры" && status != filter) {
				cur = cur->next;
				continue;
			}

			// Фильтр по названию если введён текст
			if (searchText->Length > 0) {
				std::string searchStd = msclr::interop::marshal_as<std::string>(searchText);
				char search[50] = {};
				strncpy_s(search, searchStd.c_str(), 49);
				if (strstr(cur->data.title, search) == NULL) {
					cur = cur->next;
					continue;
				}
			}

			String^ id = cur->data.id.ToString();
			String^ disc = msclr::interop::marshal_as<String^>(std::string(cur->data.discipline));
			String^ format = msclr::interop::marshal_as<String^>(std::string(cur->data.format));
			String^ prize = cur->data.prizePool.ToString();
			String^ date = msclr::interop::marshal_as<String^>(std::string(cur->data.date));

			dgvTournaments->Rows->Add(id, title, disc, format, prize, date, status);
			cur = cur->next;
		}

		if (dgvTournaments->Rows->Count == 0)
			MessageBox::Show("Ничего не найдено!", "Поиск",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {
		// Генерируем новый ID
		int newId = 1;
		TournamentNode* cur = tournList->head;
		while (cur != NULL) {
			if (cur->data.id >= newId) newId = cur->data.id + 1;
			cur = cur->next;
		}

		Tournament t = {};
		t.id = newId;
		t.organizerId = currentOrgId;
		t.prizePool = 0;
		t.maxPlayers = 10;
		t.currentPlayers = 0;
		strcpy_s(t.title, "Новый турнир");
		strcpy_s(t.discipline, "Dota 2");
		strcpy_s(t.format, "5v5");
		strcpy_s(t.date, "01.01.2026");
		strcpy_s(t.status, "Черновик");

		if (MessageBox::Show(
			"Создать новый турнир со статусом 'Черновик'?\n\nПосле создания отредактируйте его данные.",
			"Создание турнира", MessageBoxButtons::YesNo, MessageBoxIcon::Question)
			== System::Windows::Forms::DialogResult::Yes)
		{
			AddTournament(tournList, t);
			SaveAllTournaments(tournList);
			RefreshTournaments();
			MessageBox::Show("Турнир создан!", "Успех",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void OrganizerForm_Load(System::Object^ sender, System::EventArgs^ e) {
		currentAccountId = loggedAccountId;

		CreateDataFolder();

		// Сначала грузим аккаунты
		accList = new AccountList;
		InitAccountList(accList);
		LoadAllAccounts(accList);

		// Грузим организаторов
		orgList = new OrganizerList;
		InitOrganizerList(orgList);
		LoadAllOrganizers(orgList);

		// Ищем organizerId по accountId
		OrganizerNode* orgNode = FindOrganizerByAccountId(orgList, currentAccountId);
		if (orgNode != nullptr)
			currentOrgId = orgNode->data.id;  // <-- правильный orgId из файла
		else
			currentOrgId = 0;

		// Турниры
		tournList = new TournamentList;
		InitTournamentList(tournList);
		LoadAllTournaments(tournList);
		cmbFilter->SelectedIndex = 0;
		RefreshTournaments();

		LoadProfileTab();
	}

	private: System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvTournaments->SelectedRows->Count == 0) {
			MessageBox::Show("Выберите турнир для редактирования!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		String^ status = dgvTournaments->SelectedRows[0]->Cells[6]->Value->ToString();
		if (status != "Черновик") {
			MessageBox::Show("Редактировать можно только турнир со статусом 'Черновик'!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		MessageBox::Show("Форма редактирования — в разработке.",
			"Редактирование", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvTournaments->SelectedRows->Count == 0) {
			MessageBox::Show("Выберите турнир для удаления!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		String^ status = dgvTournaments->SelectedRows[0]->Cells[6]->Value->ToString();
		String^ title = dgvTournaments->SelectedRows[0]->Cells[1]->Value->ToString();
		if (status == "Активен") {
			MessageBox::Show("Нельзя удалить активный турнир!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		int selectedId = int::Parse(dgvTournaments->SelectedRows[0]->Cells[0]->Value->ToString());
		if (MessageBox::Show(
			"Удалить турнир '" + title + "'?",
			"Подтверждение", MessageBoxButtons::YesNo, MessageBoxIcon::Warning)
			== System::Windows::Forms::DialogResult::Yes)
		{
			RemoveTournament(tournList, selectedId);
			SaveAllTournaments(tournList);
			RefreshTournaments();
			MessageBox::Show("Турнир удалён!", "Успех",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}

	private: System::Void btnSendToReview_Click(System::Object^ sender, System::EventArgs^ e) {
		if (dgvTournaments->SelectedRows->Count == 0) {
			MessageBox::Show("Выберите турнир!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		String^ status = dgvTournaments->SelectedRows[0]->Cells[6]->Value->ToString();
		if (status != "Черновик") {
			MessageBox::Show("Отправить на проверку можно только турнир со статусом 'Черновик'!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		int selectedId = int::Parse(dgvTournaments->SelectedRows[0]->Cells[0]->Value->ToString());
		TournamentNode* cur = tournList->head;
		while (cur != NULL) {
			if (cur->data.id == selectedId) {
				strcpy_s(cur->data.status, "На проверке");
				break;
			}
			cur = cur->next;
		}
		SaveAllTournaments(tournList);
		RefreshTournaments();
		MessageBox::Show("Турнир отправлен на проверку!", "Успех",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
		OrganizerNode* orgNode = FindOrganizerByAccountId(orgList, currentAccountId);
		if (orgNode == nullptr) {
			MessageBox::Show("Организатор не найден!", "Ошибка",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		if (txtOrgName->Text->Trim()->Length == 0 ||
			txtContacts->Text->Trim()->Length == 0)
		{
			MessageBox::Show("Поля не могут быть пустыми!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		std::string orgName = msclr::interop::marshal_as<std::string>(txtOrgName->Text->Trim());
		std::string contacts = msclr::interop::marshal_as<std::string>(txtContacts->Text->Trim());

		strcpy_s(orgNode->data.orgName, orgName.c_str());
		strcpy_s(orgNode->data.contacts, contacts.c_str());

		SaveAllOrganizers(orgList);

		MessageBox::Show("Профиль сохранён!", "Успех",
			MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
