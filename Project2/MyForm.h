#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ TabControl;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Panel^ Datapanel;
	private: System::Windows::Forms::Button^ voprbutton;
	private: System::Windows::Forms::Button^ Podtverdbutton;
	private: System::Windows::Forms::Label^ namelabel;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ Cancelbutton;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::ComboBox^ TabchcomboBox;
	private: System::Windows::Forms::Label^ Tabchlabel;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::ComboBox^ TypecomboBox;
	private: System::Windows::Forms::Label^ Typelabel;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ Numlabel;
	private: System::Windows::Forms::TextBox^ NumTextBox;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ Korplabel;
	private: System::Windows::Forms::TextBox^ KorpTextBox;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Arealabel;
	private: System::Windows::Forms::TextBox^ AreatextBox;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ strnum;
	private: System::Windows::Forms::Button^ DelButton;
	private: System::Windows::Forms::Button^ ChangeButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Panel^ panel11;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel17;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Datapanel = (gcnew System::Windows::Forms::Panel());
			this->voprbutton = (gcnew System::Windows::Forms::Button());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->Cancelbutton = (gcnew System::Windows::Forms::Button());
			this->Podtverdbutton = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->TabchcomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Tabchlabel = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->TypecomboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Typelabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Numlabel = (gcnew System::Windows::Forms::Label());
			this->NumTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Korplabel = (gcnew System::Windows::Forms::Label());
			this->KorpTextBox = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Arealabel = (gcnew System::Windows::Forms::Label());
			this->AreatextBox = (gcnew System::Windows::Forms::TextBox());
			this->ChangeButton = (gcnew System::Windows::Forms::Button());
			this->DelButton = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->strnum = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Datapanel->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel10->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->tabPage1);
			this->TabControl->Controls->Add(this->tabPage2);
			this->TabControl->Controls->Add(this->tabPage3);
			this->TabControl->Controls->Add(this->tabPage4);
			this->TabControl->Controls->Add(this->tabPage5);
			this->TabControl->Controls->Add(this->tabPage6);
			this->TabControl->Location = System::Drawing::Point(13, 5);
			this->TabControl->Name = L"TabControl";
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(997, 535);
			this->TabControl->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->panel9);
			this->tabPage1->Controls->Add(this->DelButton);
			this->tabPage1->Controls->Add(this->ChangeButton);
			this->tabPage1->Controls->Add(this->Datapanel);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(989, 509);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Персонал";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(989, 509);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Пациент";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(989, 509);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Записи";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->panel10);
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->button8);
			this->tabPage4->Controls->Add(this->panel11);
			this->tabPage4->Controls->Add(this->button9);
			this->tabPage4->Controls->Add(this->button10);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(989, 509);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Кабинеты";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(814, 607);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Услуги";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(814, 607);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Должности";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->column0,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(699, 437);
			this->dataGridView1->TabIndex = 0;
			// 
			// Datapanel
			// 
			this->Datapanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Datapanel->Controls->Add(this->voprbutton);
			this->Datapanel->Controls->Add(this->Podtverdbutton);
			this->Datapanel->Controls->Add(this->namelabel);
			this->Datapanel->Controls->Add(this->panel8);
			this->Datapanel->Controls->Add(this->panel7);
			this->Datapanel->Controls->Add(this->panel6);
			this->Datapanel->Controls->Add(this->panel5);
			this->Datapanel->Controls->Add(this->panel4);
			this->Datapanel->Controls->Add(this->panel1);
			this->Datapanel->Location = System::Drawing::Point(712, 6);
			this->Datapanel->Name = L"Datapanel";
			this->Datapanel->Size = System::Drawing::Size(271, 492);
			this->Datapanel->TabIndex = 2;
			this->Datapanel->Visible = false;
			// 
			// voprbutton
			// 
			this->voprbutton->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->voprbutton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->voprbutton->Location = System::Drawing::Point(201, 11);
			this->voprbutton->Name = L"voprbutton";
			this->voprbutton->Size = System::Drawing::Size(58, 57);
			this->voprbutton->TabIndex = 10;
			this->voprbutton->Text = L"\?";
			this->voprbutton->UseVisualStyleBackColor = false;
			// 
			// namelabel
			// 
			this->namelabel->AutoSize = true;
			this->namelabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->namelabel->Location = System::Drawing::Point(24, 18);
			this->namelabel->Name = L"namelabel";
			this->namelabel->Size = System::Drawing::Size(0, 24);
			this->namelabel->TabIndex = 33;
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->Cancelbutton);
			this->panel8->Location = System::Drawing::Point(0, 421);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(271, 71);
			this->panel8->TabIndex = 32;
			// 
			// Cancelbutton
			// 
			this->Cancelbutton->BackColor = System::Drawing::SystemColors::Control;
			this->Cancelbutton->Location = System::Drawing::Point(138, 12);
			this->Cancelbutton->Name = L"Cancelbutton";
			this->Cancelbutton->Size = System::Drawing::Size(120, 42);
			this->Cancelbutton->TabIndex = 24;
			this->Cancelbutton->Text = L"Очистить поля";
			this->Cancelbutton->UseVisualStyleBackColor = false;
			// 
			// Podtverdbutton
			// 
			this->Podtverdbutton->BackColor = System::Drawing::SystemColors::Control;
			this->Podtverdbutton->Location = System::Drawing::Point(12, 434);
			this->Podtverdbutton->Name = L"Podtverdbutton";
			this->Podtverdbutton->Size = System::Drawing::Size(119, 42);
			this->Podtverdbutton->TabIndex = 23;
			this->Podtverdbutton->Text = L"Подтвердить";
			this->Podtverdbutton->UseVisualStyleBackColor = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Control;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->TabchcomboBox);
			this->panel7->Controls->Add(this->Tabchlabel);
			this->panel7->Location = System::Drawing::Point(0, 359);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(271, 63);
			this->panel7->TabIndex = 31;
			// 
			// TabchcomboBox
			// 
			this->TabchcomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TabchcomboBox->FormattingEnabled = true;
			this->TabchcomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Меловая", L"Маркерная" });
			this->TabchcomboBox->Location = System::Drawing::Point(11, 28);
			this->TabchcomboBox->Name = L"TabchcomboBox";
			this->TabchcomboBox->Size = System::Drawing::Size(247, 21);
			this->TabchcomboBox->TabIndex = 21;
			// 
			// Tabchlabel
			// 
			this->Tabchlabel->AutoSize = true;
			this->Tabchlabel->Location = System::Drawing::Point(8, 6);
			this->Tabchlabel->Name = L"Tabchlabel";
			this->Tabchlabel->Size = System::Drawing::Size(91, 13);
			this->Tabchlabel->TabIndex = 18;
			this->Tabchlabel->Text = L"Номер кабинета";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->TypecomboBox);
			this->panel6->Controls->Add(this->Typelabel);
			this->panel6->Location = System::Drawing::Point(0, 291);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(271, 69);
			this->panel6->TabIndex = 30;
			// 
			// TypecomboBox
			// 
			this->TypecomboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->TypecomboBox->FormattingEnabled = true;
			this->TypecomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Мультимедийная", L"Не-Мультимедийная" });
			this->TypecomboBox->Location = System::Drawing::Point(11, 32);
			this->TypecomboBox->Name = L"TypecomboBox";
			this->TypecomboBox->Size = System::Drawing::Size(247, 21);
			this->TypecomboBox->TabIndex = 20;
			// 
			// Typelabel
			// 
			this->Typelabel->AutoSize = true;
			this->Typelabel->Location = System::Drawing::Point(8, 10);
			this->Typelabel->Name = L"Typelabel";
			this->Typelabel->Size = System::Drawing::Size(65, 13);
			this->Typelabel->TabIndex = 17;
			this->Typelabel->Text = L"Должность";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::Control;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->Numlabel);
			this->panel5->Controls->Add(this->NumTextBox);
			this->panel5->Location = System::Drawing::Point(0, 148);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(271, 80);
			this->panel5->TabIndex = 29;
			// 
			// Numlabel
			// 
			this->Numlabel->AutoSize = true;
			this->Numlabel->Location = System::Drawing::Point(8, 10);
			this->Numlabel->Name = L"Numlabel";
			this->Numlabel->Size = System::Drawing::Size(105, 13);
			this->Numlabel->TabIndex = 14;
			this->Numlabel->Text = L"Возраст работника";
			// 
			// NumTextBox
			// 
			this->NumTextBox->Location = System::Drawing::Point(11, 37);
			this->NumTextBox->Name = L"NumTextBox";
			this->NumTextBox->Size = System::Drawing::Size(247, 20);
			this->NumTextBox->TabIndex = 12;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->Korplabel);
			this->panel4->Controls->Add(this->KorpTextBox);
			this->panel4->Location = System::Drawing::Point(0, 80);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(271, 70);
			this->panel4->TabIndex = 28;
			// 
			// Korplabel
			// 
			this->Korplabel->AutoSize = true;
			this->Korplabel->Location = System::Drawing::Point(9, 8);
			this->Korplabel->Name = L"Korplabel";
			this->Korplabel->Size = System::Drawing::Size(90, 13);
			this->Korplabel->TabIndex = 7;
			this->Korplabel->Text = L"ФИО работника";
			// 
			// KorpTextBox
			// 
			this->KorpTextBox->Location = System::Drawing::Point(12, 33);
			this->KorpTextBox->Name = L"KorpTextBox";
			this->KorpTextBox->Size = System::Drawing::Size(246, 20);
			this->KorpTextBox->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->Arealabel);
			this->panel1->Controls->Add(this->AreatextBox);
			this->panel1->Location = System::Drawing::Point(0, 227);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(271, 65);
			this->panel1->TabIndex = 23;
			// 
			// Arealabel
			// 
			this->Arealabel->AutoSize = true;
			this->Arealabel->Location = System::Drawing::Point(9, 7);
			this->Arealabel->Name = L"Arealabel";
			this->Arealabel->Size = System::Drawing::Size(108, 13);
			this->Arealabel->TabIndex = 15;
			this->Arealabel->Text = L"Телефон работника";
			// 
			// AreatextBox
			// 
			this->AreatextBox->Location = System::Drawing::Point(12, 27);
			this->AreatextBox->Name = L"AreatextBox";
			this->AreatextBox->Size = System::Drawing::Size(246, 20);
			this->AreatextBox->TabIndex = 13;
			// 
			// ChangeButton
			// 
			this->ChangeButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ChangeButton->Enabled = false;
			this->ChangeButton->Location = System::Drawing::Point(173, 451);
			this->ChangeButton->Name = L"ChangeButton";
			this->ChangeButton->Size = System::Drawing::Size(154, 47);
			this->ChangeButton->TabIndex = 3;
			this->ChangeButton->Text = L"Изменение";
			this->ChangeButton->UseVisualStyleBackColor = false;
			// 
			// DelButton
			// 
			this->DelButton->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->DelButton->Enabled = false;
			this->DelButton->Location = System::Drawing::Point(333, 451);
			this->DelButton->Name = L"DelButton";
			this->DelButton->Size = System::Drawing::Size(146, 47);
			this->DelButton->TabIndex = 4;
			this->DelButton->Text = L"Удаление";
			this->DelButton->UseVisualStyleBackColor = false;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label2);
			this->panel9->Controls->Add(this->strnum);
			this->panel9->Location = System::Drawing::Point(485, 451);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(221, 47);
			this->panel9->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(8, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 16);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Номер выбранной строки:";
			// 
			// strnum
			// 
			this->strnum->AutoSize = true;
			this->strnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->strnum->Location = System::Drawing::Point(182, 12);
			this->strnum->Name = L"strnum";
			this->strnum->Size = System::Drawing::Size(18, 20);
			this->strnum->TabIndex = 20;
			this->strnum->Text = L"1";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(7, 451);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 47);
			this->button1->TabIndex = 25;
			this->button1->Text = L"Добавление";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// column0
			// 
			this->column0->HeaderText = L"ФИО";
			this->column0->Name = L"column0";
			this->column0->Width = 245;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Возраст";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Телефон";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Должность";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Кабинет";
			this->Column4->Name = L"Column4";
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label3);
			this->panel10->Controls->Add(this->label4);
			this->panel10->Location = System::Drawing::Point(481, 456);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(224, 47);
			this->panel10->TabIndex = 31;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(8, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(178, 16);
			this->label3->TabIndex = 21;
			this->label3->Text = L"Номер выбранной строки:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(182, 12);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(18, 20);
			this->label4->TabIndex = 20;
			this->label4->Text = L"1";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Enabled = false;
			this->button8->Location = System::Drawing::Point(329, 456);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(146, 47);
			this->button8->TabIndex = 33;
			this->button8->Text = L"Удаление";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Enabled = false;
			this->button9->Location = System::Drawing::Point(169, 456);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(154, 47);
			this->button9->TabIndex = 30;
			this->button9->Text = L"Изменение";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Enabled = false;
			this->button10->Location = System::Drawing::Point(3, 456);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(160, 47);
			this->button10->TabIndex = 32;
			this->button10->Text = L"Добавление";
			this->button10->UseVisualStyleBackColor = false;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel11->Controls->Add(this->button11);
			this->panel11->Controls->Add(this->button12);
			this->panel11->Controls->Add(this->label5);
			this->panel11->Controls->Add(this->panel14);
			this->panel11->Controls->Add(this->panel16);
			this->panel11->Controls->Add(this->panel17);
			this->panel11->Location = System::Drawing::Point(712, 6);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(271, 497);
			this->panel11->TabIndex = 29;
			this->panel11->Visible = false;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(201, 11);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(58, 57);
			this->button11->TabIndex = 10;
			this->button11->Text = L"\?";
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Control;
			this->button12->Location = System::Drawing::Point(12, 434);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(119, 42);
			this->button12->TabIndex = 23;
			this->button12->Text = L"Подтвердить";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(24, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(0, 24);
			this->label5->TabIndex = 33;
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->button13);
			this->panel14->Location = System::Drawing::Point(0, 421);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(271, 76);
			this->panel14->TabIndex = 32;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::Control;
			this->button13->Location = System::Drawing::Point(138, 12);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(120, 42);
			this->button13->TabIndex = 24;
			this->button13->Text = L"Очистить поля";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::Control;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->label10);
			this->panel16->Controls->Add(this->textBox2);
			this->panel16->Location = System::Drawing::Point(0, 148);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(271, 80);
			this->panel16->TabIndex = 29;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(9, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(91, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Номер кабинета";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(11, 37);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(247, 20);
			this->textBox2->TabIndex = 12;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::SystemColors::Control;
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->comboBox1);
			this->panel17->Controls->Add(this->label11);
			this->panel17->Location = System::Drawing::Point(0, 80);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(271, 70);
			this->panel17->TabIndex = 28;
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"Мультимедийная", L"Не-Мультимедийная" });
			this->comboBox1->Location = System::Drawing::Point(10, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(247, 21);
			this->comboBox1->TabIndex = 20;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(219, 13);
			this->label11->TabIndex = 7;
			this->label11->Text = L"ФИО закреплённого за кабинетом врача";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn6,
					this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10
			});
			this->dataGridView3->Location = System::Drawing::Point(6, 6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(699, 444);
			this->dataGridView3->TabIndex = 28;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"ФИО";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 245;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Возраст";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Телефон";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 125;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Должность";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 125;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Кабинет";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 551);
			this->Controls->Add(this->TabControl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->Datapanel->ResumeLayout(false);
			this->Datapanel->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
