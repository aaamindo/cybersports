#pragma once
#include "msclr\marshal_cppstd.h"
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
	/// Сводка для MyForm
	/// </summary>
	public ref class PlayerForm : public System::Windows::Forms::Form
	{
	public: int loggedAccountId;

		  PlayerForm(int accountId)
		  {
			  loggedAccountId = accountId;
			  InitializeComponent();
		  }

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PlayerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::DataGridView^ dvgTournaments;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnView;

	private: System::Windows::Forms::Button^ btnApply;
	private: System::Windows::Forms::GroupBox^ Format;
	private: System::Windows::Forms::ComboBox^ cmbDiscipline;
	private: System::Windows::Forms::CheckBox^ chkFormat5v5;
	private: System::Windows::Forms::CheckBox^ chkFormat2v2;
	private: System::Windows::Forms::CheckBox^ chkFormat1v1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnSearch;
	private: System::Windows::Forms::TextBox^ txtSearch;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ cmbSort;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colid;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDiscipline;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colFormat;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colPrize;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colSlots;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAppId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAppTournament;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAppDate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAppStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colAppReason;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(PlayerForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cmbSort = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnSearch = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->cmbDiscipline = (gcnew System::Windows::Forms::ComboBox());
			this->Format = (gcnew System::Windows::Forms::GroupBox());
			this->chkFormat5v5 = (gcnew System::Windows::Forms::CheckBox());
			this->chkFormat2v2 = (gcnew System::Windows::Forms::CheckBox());
			this->chkFormat1v1 = (gcnew System::Windows::Forms::CheckBox());
			this->btnApply = (gcnew System::Windows::Forms::Button());
			this->btnView = (gcnew System::Windows::Forms::Button());
			this->dvgTournaments = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->colid = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDiscipline = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colFormat = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colPrize = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colSlots = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAppId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAppTournament = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAppDate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAppStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colAppReason = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->Format->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgTournaments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
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
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1309, 585);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->cmbSort);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->btnSearch);
			this->tabPage1->Controls->Add(this->txtSearch);
			this->tabPage1->Controls->Add(this->cmbDiscipline);
			this->tabPage1->Controls->Add(this->Format);
			this->tabPage1->Controls->Add(this->btnApply);
			this->tabPage1->Controls->Add(this->btnView);
			this->tabPage1->Controls->Add(this->dvgTournaments);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1301, 556);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Турниры";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(808, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(116, 25);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Сортировка";
			// 
			// cmbSort
			// 
			this->cmbSort->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->cmbSort->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->cmbSort->ForeColor = System::Drawing::Color::White;
			this->cmbSort->FormattingEnabled = true;
			this->cmbSort->Items->AddRange(gcnew cli::array< System::Object^  >(16) {
				L"По умолчанию", L"", L"По названию (А-Я)", L"",
					L"По названию (Я-А)", L"", L"По призовому фонду (возр.)", L"", L"По призовому фонду (убыв.)", L"", L"По дате (сначала новые)",
					L"", L"По дате (сначала старые)", L"", L"По свободным местам (возр.)", L"По свободным местам (убыв.)"
			});
			this->cmbSort->Location = System::Drawing::Point(813, 176);
			this->cmbSort->Name = L"cmbSort";
			this->cmbSort->Size = System::Drawing::Size(225, 33);
			this->cmbSort->TabIndex = 11;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(1044, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 25);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Название";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(808, 84);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(128, 25);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Дисциплины";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(921, 236);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 34);
			this->button1->TabIndex = 8;
			this->button1->Text = L"СБРОСИТЬ ФИЛЬТРЫ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &PlayerForm::button1_Click);
			// 
			// btnSearch
			// 
			this->btnSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnSearch->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnSearch->ForeColor = System::Drawing::Color::White;
			this->btnSearch->Location = System::Drawing::Point(1049, 176);
			this->btnSearch->Name = L"btnSearch";
			this->btnSearch->Size = System::Drawing::Size(232, 34);
			this->btnSearch->TabIndex = 7;
			this->btnSearch->Text = L"НАЙТИ";
			this->btnSearch->UseVisualStyleBackColor = false;
			this->btnSearch->Click += gcnew System::EventHandler(this, &PlayerForm::btnSearch_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->txtSearch->ForeColor = System::Drawing::Color::White;
			this->txtSearch->Location = System::Drawing::Point(1049, 112);
			this->txtSearch->Multiline = true;
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(232, 33);
			this->txtSearch->TabIndex = 6;
			// 
			// cmbDiscipline
			// 
			this->cmbDiscipline->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->cmbDiscipline->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->cmbDiscipline->ForeColor = System::Drawing::Color::White;
			this->cmbDiscipline->FormattingEnabled = true;
			this->cmbDiscipline->Location = System::Drawing::Point(813, 112);
			this->cmbDiscipline->Name = L"cmbDiscipline";
			this->cmbDiscipline->Size = System::Drawing::Size(225, 33);
			this->cmbDiscipline->TabIndex = 5;
			// 
			// Format
			// 
			this->Format->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->Format->Controls->Add(this->chkFormat5v5);
			this->Format->Controls->Add(this->chkFormat2v2);
			this->Format->Controls->Add(this->chkFormat1v1);
			this->Format->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Format->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->Format->ForeColor = System::Drawing::Color::White;
			this->Format->Location = System::Drawing::Point(797, 6);
			this->Format->Name = L"Format";
			this->Format->Size = System::Drawing::Size(498, 72);
			this->Format->TabIndex = 4;
			this->Format->TabStop = false;
			this->Format->Text = L"Формат турнира";
			// 
			// chkFormat5v5
			// 
			this->chkFormat5v5->AutoSize = true;
			this->chkFormat5v5->Location = System::Drawing::Point(398, 30);
			this->chkFormat5v5->Name = L"chkFormat5v5";
			this->chkFormat5v5->Size = System::Drawing::Size(72, 29);
			this->chkFormat5v5->TabIndex = 2;
			this->chkFormat5v5->Text = L"5vs5";
			this->chkFormat5v5->UseVisualStyleBackColor = true;
			// 
			// chkFormat2v2
			// 
			this->chkFormat2v2->AutoSize = true;
			this->chkFormat2v2->Location = System::Drawing::Point(219, 30);
			this->chkFormat2v2->Name = L"chkFormat2v2";
			this->chkFormat2v2->Size = System::Drawing::Size(72, 29);
			this->chkFormat2v2->TabIndex = 1;
			this->chkFormat2v2->Text = L"2vs2";
			this->chkFormat2v2->UseVisualStyleBackColor = true;
			// 
			// chkFormat1v1
			// 
			this->chkFormat1v1->AutoSize = true;
			this->chkFormat1v1->Location = System::Drawing::Point(32, 30);
			this->chkFormat1v1->Name = L"chkFormat1v1";
			this->chkFormat1v1->Size = System::Drawing::Size(72, 29);
			this->chkFormat1v1->TabIndex = 0;
			this->chkFormat1v1->Text = L"1vs1";
			this->chkFormat1v1->UseVisualStyleBackColor = true;
			// 
			// btnApply
			// 
			this->btnApply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnApply->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnApply->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnApply->ForeColor = System::Drawing::Color::White;
			this->btnApply->Location = System::Drawing::Point(1070, 490);
			this->btnApply->MaximumSize = System::Drawing::Size(206, 45);
			this->btnApply->Name = L"btnApply";
			this->btnApply->Size = System::Drawing::Size(206, 45);
			this->btnApply->TabIndex = 3;
			this->btnApply->Text = L"ПОДАТЬ ЗАЯВКУ";
			this->btnApply->UseVisualStyleBackColor = false;
			this->btnApply->Click += gcnew System::EventHandler(this, &PlayerForm::btnApply_Click);
			// 
			// btnView
			// 
			this->btnView->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->btnView->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnView->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Bold));
			this->btnView->ForeColor = System::Drawing::Color::White;
			this->btnView->Location = System::Drawing::Point(797, 490);
			this->btnView->MaximumSize = System::Drawing::Size(206, 45);
			this->btnView->Name = L"btnView";
			this->btnView->Size = System::Drawing::Size(206, 45);
			this->btnView->TabIndex = 2;
			this->btnView->Text = L"ПРОСМОТРЕТЬ";
			this->btnView->UseVisualStyleBackColor = false;
			this->btnView->Click += gcnew System::EventHandler(this, &PlayerForm::btnView_Click);
			// 
			// dvgTournaments
			// 
			this->dvgTournaments->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->dvgTournaments->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dvgTournaments->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->colid,
					this->colTitle, this->colDiscipline, this->colFormat, this->colPrize, this->colDate, this->colSlots
			});
			this->dvgTournaments->Location = System::Drawing::Point(8, 6);
			this->dvgTournaments->Name = L"dvgTournaments";
			this->dvgTournaments->RowHeadersWidth = 51;
			this->dvgTournaments->RowTemplate->Height = 24;
			this->dvgTournaments->Size = System::Drawing::Size(783, 540);
			this->dvgTournaments->TabIndex = 1;
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
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->pictureBox3);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1301, 556);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Мои заявки";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
				static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->colAppId,
					this->colAppTournament, this->colAppDate, this->colAppStatus, this->colAppReason
			});
			this->dataGridView1->Location = System::Drawing::Point(8, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(783, 540);
			this->dataGridView1->TabIndex = 1;
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
			this->tabPage3->Size = System::Drawing::Size(1301, 556);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Мой профиль";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(0, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(1301, 556);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// colid
			// 
			this->colid->HeaderText = L"ID";
			this->colid->MinimumWidth = 6;
			this->colid->Name = L"colid";
			this->colid->Width = 125;
			// 
			// colTitle
			// 
			this->colTitle->HeaderText = L"Название";
			this->colTitle->MinimumWidth = 6;
			this->colTitle->Name = L"colTitle";
			this->colTitle->Width = 125;
			// 
			// colDiscipline
			// 
			this->colDiscipline->HeaderText = L"Дисциплина";
			this->colDiscipline->MinimumWidth = 6;
			this->colDiscipline->Name = L"colDiscipline";
			this->colDiscipline->Width = 125;
			// 
			// colFormat
			// 
			this->colFormat->HeaderText = L"Формат";
			this->colFormat->MinimumWidth = 6;
			this->colFormat->Name = L"colFormat";
			this->colFormat->Width = 125;
			// 
			// colPrize
			// 
			this->colPrize->HeaderText = L"Призовой фонд";
			this->colPrize->MinimumWidth = 6;
			this->colPrize->Name = L"colPrize";
			this->colPrize->Width = 125;
			// 
			// colDate
			// 
			this->colDate->HeaderText = L"Дата";
			this->colDate->MinimumWidth = 6;
			this->colDate->Name = L"colDate";
			this->colDate->Width = 125;
			// 
			// colSlots
			// 
			this->colSlots->HeaderText = L"Свободно мест";
			this->colSlots->MinimumWidth = 6;
			this->colSlots->Name = L"colSlots";
			this->colSlots->Width = 125;
			// 
			// colAppId
			// 
			this->colAppId->HeaderText = L"ID";
			this->colAppId->MinimumWidth = 6;
			this->colAppId->Name = L"colAppId";
			this->colAppId->Width = 125;
			// 
			// colAppTournament
			// 
			this->colAppTournament->HeaderText = L"Турнир";
			this->colAppTournament->MinimumWidth = 6;
			this->colAppTournament->Name = L"colAppTournament";
			this->colAppTournament->Width = 125;
			// 
			// colAppDate
			// 
			this->colAppDate->HeaderText = L"Дата подачи";
			this->colAppDate->MinimumWidth = 6;
			this->colAppDate->Name = L"colAppDate";
			this->colAppDate->Width = 125;
			// 
			// colAppStatus
			// 
			this->colAppStatus->HeaderText = L"Статус";
			this->colAppStatus->MinimumWidth = 6;
			this->colAppStatus->Name = L"colAppStatus";
			this->colAppStatus->Width = 125;
			// 
			// colAppReason
			// 
			this->colAppReason->HeaderText = L"Причина отказа";
			this->colAppReason->MinimumWidth = 6;
			this->colAppReason->Name = L"colAppReason";
			this->colAppReason->Width = 125;
			// 
			// PlayerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1309, 585);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(900, 500);
			this->Name = L"PlayerForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Панель Игрока";
			this->Load += gcnew System::EventHandler(this, &PlayerForm::PlayerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->Format->ResumeLayout(false);
			this->Format->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dvgTournaments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		// =====================================================
// Данные
// =====================================================
	private:
		TournamentList* tournList;
		DisciplineList* discList;
		TourApplicationList* appList;
		PlayerList* playerList;
		int                 currentPlayerId; // Player.id (не accountId!)

		// =====================================================
		// Вспомогательные функции
		// =====================================================

		// Загружает дисциплины в cmbDiscipline
		void LoadDisciplines()
		{
			cmbDiscipline->Items->Clear();
			cmbDiscipline->Items->Add("Все");

			DisciplineNode* cur = discList->head;
			while (cur != nullptr) {
				String^ name = gcnew String(cur->data.name);
				cmbDiscipline->Items->Add(name);
				cur = cur->next;
			}
			cmbDiscipline->SelectedIndex = 0;
		}

		// Загружает и применяет фильтры/сортировку к dvgTournaments
		void RefreshTournaments()
		{
			dvgTournaments->Rows->Clear();

			// Читаем фильтры
			String^ searchText = txtSearch->Text->Trim()->ToLower();
			String^ selDiscipline = cmbDiscipline->SelectedItem != nullptr
				? cmbDiscipline->SelectedItem->ToString() : "Все";
			bool f1v1 = false;
			bool f2v2 = false;
			bool f5v5 = false;

			for (int i = 0; i < Format->Controls->Count; i++)
			{
				CheckBox^ chk = dynamic_cast<CheckBox^>(Format->Controls[i]);
				if (chk == nullptr) continue;
				if (chk->Text == "1vs1") f1v1 = chk->Checked;
				if (chk->Text == "2vs2") f2v2 = chk->Checked;
				if (chk->Text == "5vs5") f5v5 = chk->Checked;
			}


			bool anyFormat = (!f1v1 && !f2v2 && !f5v5);

			// Собираем подходящие турниры во временный массив
			// (максимум 1000 турниров — для сортировки)
			const int MAX = 1000;
			Tournament arr[MAX];
			int count = 0;

			TournamentNode* cur = tournList->head;
			while (cur != nullptr && count < MAX)
			{
				Tournament t = cur->data;


				// Только активные
				if (strcmp(t.status, "Активен") != 0) {
					cur = cur->next;
					continue;
				}

				// Фильтр по дисциплине
				if (selDiscipline != "Все") {
					String^ disc = gcnew String(t.discipline);
					if (disc->ToLower() != selDiscipline->ToLower()) {
						cur = cur->next;
						continue;
					}
				}

				// Фильтр по формату
				if (!anyFormat) {
					String^ fmt = gcnew String(t.format);
					bool match = (f1v1 && fmt == "1v1") ||
						(f2v2 && fmt == "2v2") ||
						(f5v5 && fmt == "5v5");
					if (!match) {
						cur = cur->next;
						continue;
					}
				}

				// Фильтр по названию
				if (searchText->Length > 0) {
					String^ title = gcnew String(t.title);
					if (!title->ToLower()->Contains(searchText)) {
						cur = cur->next;
						continue;
					}
				}

				arr[count++] = t;
				cur = cur->next;

			}

			// Сортировка
			int sortIndex = cmbSort->SelectedIndex;
			for (int i = 0; i < count - 1; i++) {
				for (int j = 0; j < count - i - 1; j++) {
					bool swap = false;
					String^ a = gcnew String(arr[j].title);
					String^ b = gcnew String(arr[j + 1].title);
					String^ da = gcnew String(arr[j].date);
					String^ db = gcnew String(arr[j + 1].date);
					int freeA = arr[j].maxPlayers - arr[j].currentPlayers;
					int freeB = arr[j + 1].maxPlayers - arr[j + 1].currentPlayers;

					switch (sortIndex) {
					case 2: swap = (String::Compare(a, b) > 0); break; // А-Я
					case 4: swap = (String::Compare(a, b) < 0); break; // Я-А
					case 6: swap = (arr[j].prizePool > arr[j + 1].prizePool); break; // возр.
					case 8: swap = (arr[j].prizePool < arr[j + 1].prizePool); break; // убыв.
					case 10: swap = (String::Compare(da, db) < 0); break; // новые
					case 12: swap = (String::Compare(da, db) > 0); break; // старые
					case 14: swap = (freeA > freeB); break; // мест возр.
					case 15: swap = (freeA < freeB); break; // мест убыв.
					}

					if (swap) {
						Tournament tmp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = tmp;
					}
				}
			}

			// Заполняем таблицу
			for (int i = 0; i < count; i++) {
				Tournament t = arr[i];
				int free = t.maxPlayers - t.currentPlayers;

				dvgTournaments->Rows->Add(
					t.id,
					gcnew String(t.title),
					gcnew String(t.discipline),
					gcnew String(t.format),
					t.prizePool.ToString("F0") + " руб.",
					gcnew String(t.date),
					free.ToString() + " / " + t.maxPlayers.ToString()
				);
			}
		}

		// Загружает заявки игрока в dataGridView1
		void RefreshMyApplications()
		{
			dataGridView1->Rows->Clear();

			TourApplicationNode* cur = appList->head;
			while (cur != nullptr)
			{
				if (cur->data.playerId == currentPlayerId)
				{
					TourApplication a = cur->data;

					// Ищем название турнира
					String^ tournTitle = "Неизвестно";
					TournamentNode* t = tournList->head;
					while (t != nullptr) {
						if (t->data.id == a.tournamentId) {
							tournTitle = gcnew String(t->data.title);
							break;
						}
						t = t->next;
					}

					String^ reason = gcnew String(a.rejectReason);
					if (reason->Length == 0) reason = "-";

					dataGridView1->Rows->Add(
						a.id,
						tournTitle,
						gcnew String(a.submitDate),
						gcnew String(a.status),
						reason
					);
				}
				cur = cur->next;
			}
		}

		// Находит Player по accountId
		PlayerNode* FindPlayerByAccountId(PlayerList* list, int accountId)
		{
			PlayerNode* cur = list->head;
			while (cur != nullptr) {
				if (cur->data.accountId == accountId)
					return cur;
				cur = cur->next;
			}
			return nullptr;
		}

		// =====================================================
		// События формы
		// =====================================================

	private: System::Void PlayerForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		CreateDataFolder();

		// Загружаем данные
		tournList = new TournamentList;
		discList = new DisciplineList;
		appList = new TourApplicationList;
		playerList = new PlayerList;

		InitTournamentList(tournList);
		InitDisciplineList(discList);
		InitApplicationList(appList);
		InitPlayerList(playerList);

		LoadAllTournaments(tournList);
		LoadAllDisciplines(discList);
		LoadAllApplications(appList);
		LoadAllPlayers(playerList);

		CreateDefaultDisciplines(discList);

		// Находим текущего игрока
		PlayerNode* pNode = FindPlayerByAccountId(playerList, loggedAccountId);
		if (pNode != nullptr)
			currentPlayerId = pNode->data.id;
		else
			currentPlayerId = -1;

		// Инициализируем cmbSort
		cmbSort->SelectedIndex = 0;

		// Загружаем дисциплины в ComboBox
		LoadDisciplines();

		// Заполняем таблицы
		RefreshTournaments();
		RefreshMyApplications();
	}

	private: System::Void btnSearch_Click(System::Object^ sender, System::EventArgs^ e)
	{
		RefreshTournaments();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		// Сбросить фильтры
		txtSearch->Clear();
		cmbDiscipline->SelectedIndex = 0;
		cmbSort->SelectedIndex = 0;
		chkFormat1v1->Checked = false;
		chkFormat2v2->Checked = false;
		chkFormat5v5->Checked = false;
		RefreshTournaments();
	}

	private: System::Void btnApply_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (dvgTournaments->SelectedRows->Count == 0) {
			MessageBox::Show("Выберите турнир для подачи заявки!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		if (currentPlayerId == -1) {
			MessageBox::Show("Ваш профиль игрока не найден!\nОбратитесь к администратору.",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int tournId = int::Parse(
			dvgTournaments->SelectedRows[0]->Cells[0]->Value->ToString());

		// Проверяем — уже подавал заявку?
		TourApplicationNode* existing =
			FindApplicationByPlayerAndTournament(appList, currentPlayerId, tournId);
		if (existing != nullptr) {
			MessageBox::Show("Вы уже подали заявку на этот турнир!\nСтатус: " +
				gcnew String(existing->data.status),
				"Заявка уже существует",
				MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Проверяем свободные места
		TournamentNode* tNode = FindTournamentById(tournList, tournId);
		if (tNode != nullptr &&
			tNode->data.currentPlayers >= tNode->data.maxPlayers) {
			MessageBox::Show("В этом турнире нет свободных мест!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// Создаём заявку
		int newId = 1;
		TourApplicationNode* cur = appList->head;
		while (cur != nullptr) {
			if (cur->data.id >= newId) newId = cur->data.id + 1;
			cur = cur->next;
		}

		TourApplication app = {};
		app.id = newId;
		app.playerId = currentPlayerId;
		app.tournamentId = tournId;
		strcpy_s(app.submitDate, "01.01.2026");
		strcpy_s(app.status, "Ожидает");
		strcpy_s(app.rejectReason, "");

		AddApplication(appList, app);
		SaveAllApplications(appList);
		RefreshMyApplications();

		MessageBox::Show("Заявка успешно подана!\nОжидайте подтверждения организатора.",
			"Успех", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void btnView_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (dvgTournaments->SelectedRows->Count == 0) {
			MessageBox::Show("Выберите турнир для просмотра!",
				"Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		int tournId = int::Parse(
			dvgTournaments->SelectedRows[0]->Cells[0]->Value->ToString());

		MessageBox::Show("TournamentViewForm будет реализована на следующем шаге.",
			"В разработке", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	};
}
