#pragma once

#include <string>

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

	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::TabPage^ tabPage6;
	private: System::Windows::Forms::Panel^ Datapanel;
	private: System::Windows::Forms::Button^ voprbutton;
	private: System::Windows::Forms::Button^ perspodbut;

	private: System::Windows::Forms::Label^ namelabel;
	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ perscancbut;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::ComboBox^ pers2comboBox;

	private: System::Windows::Forms::Label^ Tabchlabel;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::ComboBox^ pers1comboBox;

	private: System::Windows::Forms::Label^ Typelabel;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ Numlabel;
	private: System::Windows::Forms::TextBox^ PersTextBox2;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ Korplabel;
	private: System::Windows::Forms::TextBox^ PersTextBox1;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ Arealabel;
	private: System::Windows::Forms::TextBox^ PersTextBox3;

	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ strnum;
	private: System::Windows::Forms::Button^ persbutton3;

	private: System::Windows::Forms::Button^ persbutton2;

	private: System::Windows::Forms::Button^ persbutton1;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column0;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::Panel^ panel10;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::DataGridView^ dataGridView3;






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

	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::DataGridView^ dataGridView2;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel15;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::ComboBox^ zapcomboBox1;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::ComboBox^ zapcomboBox2;

	private: System::Windows::Forms::Label^ label14;




	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dataGridView4;





	private: System::Windows::Forms::Panel^ panel22;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel23;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Panel^ panel24;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox3;







private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::DataGridView^ dataGridView5;


private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ dlpodtbut;

private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Button^ dlcancbut;

private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::ComboBox^ dlcomboBox1;

private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ dltextbox1;




private: System::Windows::Forms::TextBox^ textBox5;




private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::Button^ cabbut1;
private: System::Windows::Forms::Button^ cabbut3;
private: System::Windows::Forms::Button^ cabbut2;
private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::Button^ dlbut1;
private: System::Windows::Forms::Button^ dlbut3;


private: System::Windows::Forms::Button^ dlbut2;

private: System::Windows::Forms::TextBox^ textBox6;








	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::Void constr();
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
			this->persbutton1 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->strnum = (gcnew System::Windows::Forms::Label());
			this->persbutton3 = (gcnew System::Windows::Forms::Button());
			this->persbutton2 = (gcnew System::Windows::Forms::Button());
			this->Datapanel = (gcnew System::Windows::Forms::Panel());
			this->voprbutton = (gcnew System::Windows::Forms::Button());
			this->perspodbut = (gcnew System::Windows::Forms::Button());
			this->namelabel = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->perscancbut = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->pers2comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Tabchlabel = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->pers1comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Typelabel = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->Numlabel = (gcnew System::Windows::Forms::Label());
			this->PersTextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Korplabel = (gcnew System::Windows::Forms::Label());
			this->PersTextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Arealabel = (gcnew System::Windows::Forms::Label());
			this->PersTextBox3 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->column0 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->zapcomboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->zapcomboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->cabbut1 = (gcnew System::Windows::Forms::Button());
			this->cabbut3 = (gcnew System::Windows::Forms::Button());
			this->cabbut2 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dlbut1 = (gcnew System::Windows::Forms::Button());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dlbut3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dlbut2 = (gcnew System::Windows::Forms::Button());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->dlpodtbut = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->dlcancbut = (gcnew System::Windows::Forms::Button());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->dlcomboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->dltextbox1 = (gcnew System::Windows::Forms::TextBox());
			this->TabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->Datapanel->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->panel10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->panel11->SuspendLayout();
			this->panel14->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel17->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel25->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->panel26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->BeginInit();
			this->panel27->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel30->SuspendLayout();
			this->SuspendLayout();
			// 
			// TabControl
			// 
			this->TabControl->Controls->Add(this->tabPage1);
			this->TabControl->Controls->Add(this->tabPage3);
			this->TabControl->Controls->Add(this->tabPage4);
			this->TabControl->Controls->Add(this->tabPage5);
			this->TabControl->Controls->Add(this->tabPage6);
			this->TabControl->Location = System::Drawing::Point(13, 5);
			this->TabControl->Name = L"TabControl";
			this->TabControl->SelectedIndex = 0;
			this->TabControl->Size = System::Drawing::Size(997, 535);
			this->TabControl->TabIndex = 0;
			this->TabControl->Selecting += gcnew System::Windows::Forms::TabControlCancelEventHandler(this, &MyForm::TabControl_Selecting);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->persbutton1);
			this->tabPage1->Controls->Add(this->panel9);
			this->tabPage1->Controls->Add(this->persbutton3);
			this->tabPage1->Controls->Add(this->persbutton2);
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
			// persbutton1
			// 
			this->persbutton1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->persbutton1->Location = System::Drawing::Point(7, 451);
			this->persbutton1->Name = L"persbutton1";
			this->persbutton1->Size = System::Drawing::Size(160, 47);
			this->persbutton1->TabIndex = 25;
			this->persbutton1->Text = L"Добавление";
			this->persbutton1->UseVisualStyleBackColor = false;
			this->persbutton1->Click += gcnew System::EventHandler(this, &MyForm::persbutton1_Click);
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
			// persbutton3
			// 
			this->persbutton3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->persbutton3->Location = System::Drawing::Point(333, 451);
			this->persbutton3->Name = L"persbutton3";
			this->persbutton3->Size = System::Drawing::Size(146, 47);
			this->persbutton3->TabIndex = 4;
			this->persbutton3->Text = L"Удаление";
			this->persbutton3->UseVisualStyleBackColor = false;
			this->persbutton3->Click += gcnew System::EventHandler(this, &MyForm::persbutton3_Click);
			// 
			// persbutton2
			// 
			this->persbutton2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->persbutton2->Location = System::Drawing::Point(173, 451);
			this->persbutton2->Name = L"persbutton2";
			this->persbutton2->Size = System::Drawing::Size(154, 47);
			this->persbutton2->TabIndex = 3;
			this->persbutton2->Text = L"Изменение";
			this->persbutton2->UseVisualStyleBackColor = false;
			this->persbutton2->Click += gcnew System::EventHandler(this, &MyForm::persbutton2_Click);
			// 
			// Datapanel
			// 
			this->Datapanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Datapanel->Controls->Add(this->voprbutton);
			this->Datapanel->Controls->Add(this->perspodbut);
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
			// perspodbut
			// 
			this->perspodbut->BackColor = System::Drawing::SystemColors::Control;
			this->perspodbut->Location = System::Drawing::Point(12, 434);
			this->perspodbut->Name = L"perspodbut";
			this->perspodbut->Size = System::Drawing::Size(119, 42);
			this->perspodbut->TabIndex = 23;
			this->perspodbut->Text = L"Подтвердить";
			this->perspodbut->UseVisualStyleBackColor = false;
			this->perspodbut->Click += gcnew System::EventHandler(this, &MyForm::perspodbut_Click);
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
			this->panel8->Controls->Add(this->perscancbut);
			this->panel8->Location = System::Drawing::Point(0, 421);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(271, 71);
			this->panel8->TabIndex = 32;
			// 
			// perscancbut
			// 
			this->perscancbut->BackColor = System::Drawing::SystemColors::Control;
			this->perscancbut->Location = System::Drawing::Point(138, 12);
			this->perscancbut->Name = L"perscancbut";
			this->perscancbut->Size = System::Drawing::Size(120, 42);
			this->perscancbut->TabIndex = 24;
			this->perscancbut->Text = L"Очистить поля";
			this->perscancbut->UseVisualStyleBackColor = false;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::SystemColors::Control;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->pers2comboBox);
			this->panel7->Controls->Add(this->Tabchlabel);
			this->panel7->Location = System::Drawing::Point(0, 359);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(271, 63);
			this->panel7->TabIndex = 31;
			// 
			// pers2comboBox
			// 
			this->pers2comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->pers2comboBox->FormattingEnabled = true;
			this->pers2comboBox->Location = System::Drawing::Point(11, 28);
			this->pers2comboBox->Name = L"pers2comboBox";
			this->pers2comboBox->Size = System::Drawing::Size(247, 21);
			this->pers2comboBox->TabIndex = 21;
			// 
			// Tabchlabel
			// 
			this->Tabchlabel->AutoSize = true;
			this->Tabchlabel->Location = System::Drawing::Point(8, 6);
			this->Tabchlabel->Name = L"Tabchlabel";
			this->Tabchlabel->Size = System::Drawing::Size(105, 13);
			this->Tabchlabel->TabIndex = 18;
			this->Tabchlabel->Text = L"Кабинет работника";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::Control;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->pers1comboBox);
			this->panel6->Controls->Add(this->Typelabel);
			this->panel6->Location = System::Drawing::Point(0, 291);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(271, 69);
			this->panel6->TabIndex = 30;
			// 
			// pers1comboBox
			// 
			this->pers1comboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->pers1comboBox->FormattingEnabled = true;
			this->pers1comboBox->Location = System::Drawing::Point(11, 32);
			this->pers1comboBox->Name = L"pers1comboBox";
			this->pers1comboBox->Size = System::Drawing::Size(247, 21);
			this->pers1comboBox->TabIndex = 20;
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
			this->panel5->Controls->Add(this->PersTextBox2);
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
			// PersTextBox2
			// 
			this->PersTextBox2->Location = System::Drawing::Point(11, 37);
			this->PersTextBox2->Name = L"PersTextBox2";
			this->PersTextBox2->Size = System::Drawing::Size(247, 20);
			this->PersTextBox2->TabIndex = 12;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::Control;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->Korplabel);
			this->panel4->Controls->Add(this->PersTextBox1);
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
			// PersTextBox1
			// 
			this->PersTextBox1->Location = System::Drawing::Point(12, 33);
			this->PersTextBox1->Name = L"PersTextBox1";
			this->PersTextBox1->Size = System::Drawing::Size(246, 20);
			this->PersTextBox1->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::Control;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->Arealabel);
			this->panel1->Controls->Add(this->PersTextBox3);
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
			// PersTextBox3
			// 
			this->PersTextBox3->Location = System::Drawing::Point(12, 27);
			this->PersTextBox3->Name = L"PersTextBox3";
			this->PersTextBox3->Size = System::Drawing::Size(246, 20);
			this->PersTextBox3->TabIndex = 13;
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
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->panel2);
			this->tabPage3->Controls->Add(this->panel3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(989, 509);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Записи";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Location = System::Drawing::Point(6, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 47);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Добавление";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(332, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 47);
			this->button3->TabIndex = 36;
			this->button3->Text = L"Удаление";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Location = System::Drawing::Point(172, 451);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 47);
			this->button4->TabIndex = 35;
			this->button4->Text = L"Изменение";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn5, this->Column5
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(700, 437);
			this->dataGridView2->TabIndex = 26;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Название услуги";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 170;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"ФИО пациента";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 165;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"ФИО врача";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 160;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Кабинет приема";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Стоимость услуги";
			this->Column5->Name = L"Column5";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Location = System::Drawing::Point(485, 451);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(221, 47);
			this->panel2->TabIndex = 30;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(8, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(178, 16);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Номер выбранной строки:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(182, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 20);
			this->label6->TabIndex = 20;
			this->label6->Text = L"1";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->button5);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Controls->Add(this->label7);
			this->panel3->Controls->Add(this->panel12);
			this->panel3->Controls->Add(this->panel13);
			this->panel3->Controls->Add(this->panel15);
			this->panel3->Controls->Add(this->panel18);
			this->panel3->Controls->Add(this->panel19);
			this->panel3->Controls->Add(this->panel20);
			this->panel3->Location = System::Drawing::Point(712, 6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(271, 492);
			this->panel3->TabIndex = 27;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(201, 11);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(58, 57);
			this->button5->TabIndex = 10;
			this->button5->Text = L"\?";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(12, 434);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(119, 42);
			this->button6->TabIndex = 23;
			this->button6->Text = L"Подтвердить";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(24, 18);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 24);
			this->label7->TabIndex = 33;
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->button7);
			this->panel12->Location = System::Drawing::Point(0, 421);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(271, 71);
			this->panel12->TabIndex = 32;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(138, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(120, 42);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Очистить поля";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::Control;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Location = System::Drawing::Point(0, 359);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(271, 63);
			this->panel13->TabIndex = 31;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::Control;
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->textBox7);
			this->panel15->Controls->Add(this->label9);
			this->panel15->Location = System::Drawing::Point(0, 291);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(271, 69);
			this->panel15->TabIndex = 30;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 31);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(248, 20);
			this->textBox7->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Номер кабинета приёма";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::Control;
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->label12);
			this->panel18->Controls->Add(this->textBox1);
			this->panel18->Location = System::Drawing::Point(0, 148);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(271, 80);
			this->panel18->TabIndex = 29;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(8, 10);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"ФИО пациента";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(11, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(248, 20);
			this->textBox1->TabIndex = 12;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::SystemColors::Control;
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->zapcomboBox1);
			this->panel19->Controls->Add(this->label13);
			this->panel19->Location = System::Drawing::Point(0, 80);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(271, 70);
			this->panel19->TabIndex = 28;
			// 
			// zapcomboBox1
			// 
			this->zapcomboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->zapcomboBox1->FormattingEnabled = true;
			this->zapcomboBox1->Location = System::Drawing::Point(12, 31);
			this->zapcomboBox1->Name = L"zapcomboBox1";
			this->zapcomboBox1->Size = System::Drawing::Size(247, 21);
			this->zapcomboBox1->TabIndex = 21;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"Название услуги";
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::Control;
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->zapcomboBox2);
			this->panel20->Controls->Add(this->label14);
			this->panel20->Location = System::Drawing::Point(0, 227);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(271, 65);
			this->panel20->TabIndex = 23;
			// 
			// zapcomboBox2
			// 
			this->zapcomboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->zapcomboBox2->FormattingEnabled = true;
			this->zapcomboBox2->Location = System::Drawing::Point(11, 28);
			this->zapcomboBox2->Name = L"zapcomboBox2";
			this->zapcomboBox2->Size = System::Drawing::Size(247, 21);
			this->zapcomboBox2->TabIndex = 22;
			this->zapcomboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::zapcomboBox2_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 7);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"ФИО врача";
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->cabbut1);
			this->tabPage4->Controls->Add(this->cabbut3);
			this->tabPage4->Controls->Add(this->cabbut2);
			this->tabPage4->Controls->Add(this->panel10);
			this->tabPage4->Controls->Add(this->dataGridView3);
			this->tabPage4->Controls->Add(this->panel11);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(989, 509);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Кабинеты";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// cabbut1
			// 
			this->cabbut1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cabbut1->Location = System::Drawing::Point(3, 456);
			this->cabbut1->Name = L"cabbut1";
			this->cabbut1->Size = System::Drawing::Size(160, 47);
			this->cabbut1->TabIndex = 34;
			this->cabbut1->Text = L"Добавление";
			this->cabbut1->UseVisualStyleBackColor = false;
			// 
			// cabbut3
			// 
			this->cabbut3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cabbut3->Location = System::Drawing::Point(329, 456);
			this->cabbut3->Name = L"cabbut3";
			this->cabbut3->Size = System::Drawing::Size(146, 47);
			this->cabbut3->TabIndex = 33;
			this->cabbut3->Text = L"Удаление";
			this->cabbut3->UseVisualStyleBackColor = false;
			// 
			// cabbut2
			// 
			this->cabbut2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cabbut2->Location = System::Drawing::Point(169, 456);
			this->cabbut2->Name = L"cabbut2";
			this->cabbut2->Size = System::Drawing::Size(154, 47);
			this->cabbut2->TabIndex = 32;
			this->cabbut2->Text = L"Изменение";
			this->cabbut2->UseVisualStyleBackColor = false;
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
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn6
			});
			this->dataGridView3->Location = System::Drawing::Point(6, 6);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->Size = System::Drawing::Size(699, 444);
			this->dataGridView3->TabIndex = 28;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"Номер кабинета";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 350;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Площадь кабинета";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 340;
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
			this->label10->Size = System::Drawing::Size(104, 13);
			this->label10->TabIndex = 15;
			this->label10->Text = L"Площадь кабинета";
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
			this->panel17->Controls->Add(this->textBox5);
			this->panel17->Controls->Add(this->label11);
			this->panel17->Location = System::Drawing::Point(0, 80);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(271, 70);
			this->panel17->TabIndex = 28;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(11, 27);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(247, 20);
			this->textBox5->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Номер кабинета";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->button1);
			this->tabPage5->Controls->Add(this->panel21);
			this->tabPage5->Controls->Add(this->button8);
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Controls->Add(this->button9);
			this->tabPage5->Controls->Add(this->panel22);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(989, 509);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Услуги";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(4, 456);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(160, 47);
			this->button1->TabIndex = 37;
			this->button1->Text = L"Добавление";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Controls->Add(this->label8);
			this->panel21->Controls->Add(this->label15);
			this->panel21->Location = System::Drawing::Point(481, 456);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(224, 47);
			this->panel21->TabIndex = 37;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(8, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(178, 16);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Номер выбранной строки:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(182, 12);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(18, 20);
			this->label15->TabIndex = 20;
			this->label15->Text = L"1";
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Location = System::Drawing::Point(330, 456);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(146, 47);
			this->button8->TabIndex = 36;
			this->button8->Text = L"Удаление";
			this->button8->UseVisualStyleBackColor = false;
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn7
			});
			this->dataGridView4->Location = System::Drawing::Point(6, 6);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->RowHeadersVisible = false;
			this->dataGridView4->Size = System::Drawing::Size(699, 444);
			this->dataGridView4->TabIndex = 34;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Название услуги";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 490;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Стоимость услуги";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 200;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Location = System::Drawing::Point(170, 456);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(154, 47);
			this->button9->TabIndex = 35;
			this->button9->Text = L"Изменение";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel22->Controls->Add(this->button15);
			this->panel22->Controls->Add(this->button16);
			this->panel22->Controls->Add(this->label16);
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Controls->Add(this->panel24);
			this->panel22->Controls->Add(this->panel25);
			this->panel22->Location = System::Drawing::Point(712, 6);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(271, 497);
			this->panel22->TabIndex = 35;
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(201, 11);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(58, 57);
			this->button15->TabIndex = 10;
			this->button15->Text = L"\?";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::SystemColors::Control;
			this->button16->Location = System::Drawing::Point(12, 434);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(119, 42);
			this->button16->TabIndex = 23;
			this->button16->Text = L"Подтвердить";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(24, 18);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 24);
			this->label16->TabIndex = 33;
			// 
			// panel23
			// 
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel23->Controls->Add(this->button17);
			this->panel23->Location = System::Drawing::Point(0, 421);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(271, 76);
			this->panel23->TabIndex = 32;
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::SystemColors::Control;
			this->button17->Location = System::Drawing::Point(138, 12);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(120, 42);
			this->button17->TabIndex = 24;
			this->button17->Text = L"Очистить поля";
			this->button17->UseVisualStyleBackColor = false;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::SystemColors::Control;
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel24->Controls->Add(this->textBox6);
			this->panel24->Controls->Add(this->label17);
			this->panel24->Location = System::Drawing::Point(0, 148);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(271, 80);
			this->panel24->TabIndex = 29;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(11, 34);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(247, 20);
			this->textBox6->TabIndex = 16;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(98, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"Стоимость услуги";
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::SystemColors::Control;
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Controls->Add(this->label18);
			this->panel25->Controls->Add(this->textBox3);
			this->panel25->Location = System::Drawing::Point(0, 80);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(271, 70);
			this->panel25->TabIndex = 28;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 8);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(93, 13);
			this->label18->TabIndex = 7;
			this->label18->Text = L"Название услуги";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(10, 29);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(247, 20);
			this->textBox3->TabIndex = 12;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->dlbut1);
			this->tabPage6->Controls->Add(this->panel26);
			this->tabPage6->Controls->Add(this->dlbut3);
			this->tabPage6->Controls->Add(this->dataGridView5);
			this->tabPage6->Controls->Add(this->dlbut2);
			this->tabPage6->Controls->Add(this->panel27);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(989, 509);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Должности";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dlbut1
			// 
			this->dlbut1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->dlbut1->Location = System::Drawing::Point(6, 456);
			this->dlbut1->Name = L"dlbut1";
			this->dlbut1->Size = System::Drawing::Size(160, 47);
			this->dlbut1->TabIndex = 37;
			this->dlbut1->Text = L"Добавление";
			this->dlbut1->UseVisualStyleBackColor = false;
			this->dlbut1->Click += gcnew System::EventHandler(this, &MyForm::dlbut1_Click);
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Controls->Add(this->label19);
			this->panel26->Controls->Add(this->label20);
			this->panel26->Location = System::Drawing::Point(481, 456);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(224, 47);
			this->panel26->TabIndex = 43;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->Location = System::Drawing::Point(8, 13);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(178, 16);
			this->label19->TabIndex = 21;
			this->label19->Text = L"Номер выбранной строки:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->Location = System::Drawing::Point(182, 12);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(18, 20);
			this->label20->TabIndex = 20;
			this->label20->Text = L"1";
			// 
			// dlbut3
			// 
			this->dlbut3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->dlbut3->Location = System::Drawing::Point(332, 456);
			this->dlbut3->Name = L"dlbut3";
			this->dlbut3->Size = System::Drawing::Size(146, 47);
			this->dlbut3->TabIndex = 36;
			this->dlbut3->Text = L"Удаление";
			this->dlbut3->UseVisualStyleBackColor = false;
			this->dlbut3->Click += gcnew System::EventHandler(this, &MyForm::dlbut3_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView5->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9
			});
			this->dataGridView5->Location = System::Drawing::Point(6, 6);
			this->dataGridView5->Name = L"dataGridView5";
			this->dataGridView5->RowHeadersVisible = false;
			this->dataGridView5->Size = System::Drawing::Size(699, 444);
			this->dataGridView5->TabIndex = 40;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"Название должности";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 395;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"Подразделение";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 300;
			// 
			// dlbut2
			// 
			this->dlbut2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->dlbut2->Location = System::Drawing::Point(172, 456);
			this->dlbut2->Name = L"dlbut2";
			this->dlbut2->Size = System::Drawing::Size(154, 47);
			this->dlbut2->TabIndex = 35;
			this->dlbut2->Text = L"Изменение";
			this->dlbut2->UseVisualStyleBackColor = false;
			this->dlbut2->Click += gcnew System::EventHandler(this, &MyForm::dlbut2_Click);
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel27->Controls->Add(this->button23);
			this->panel27->Controls->Add(this->dlpodtbut);
			this->panel27->Controls->Add(this->label21);
			this->panel27->Controls->Add(this->panel28);
			this->panel27->Controls->Add(this->panel29);
			this->panel27->Controls->Add(this->panel30);
			this->panel27->Location = System::Drawing::Point(712, 6);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(271, 497);
			this->panel27->TabIndex = 41;
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->button23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button23->Location = System::Drawing::Point(201, 11);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(58, 57);
			this->button23->TabIndex = 10;
			this->button23->Text = L"\?";
			this->button23->UseVisualStyleBackColor = false;
			// 
			// dlpodtbut
			// 
			this->dlpodtbut->BackColor = System::Drawing::SystemColors::Control;
			this->dlpodtbut->Location = System::Drawing::Point(12, 434);
			this->dlpodtbut->Name = L"dlpodtbut";
			this->dlpodtbut->Size = System::Drawing::Size(119, 42);
			this->dlpodtbut->TabIndex = 23;
			this->dlpodtbut->Text = L"Подтвердить";
			this->dlpodtbut->UseVisualStyleBackColor = false;
			this->dlpodtbut->Click += gcnew System::EventHandler(this, &MyForm::dlpodtbut_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->Location = System::Drawing::Point(24, 18);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(0, 24);
			this->label21->TabIndex = 33;
			// 
			// panel28
			// 
			this->panel28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel28->Controls->Add(this->dlcancbut);
			this->panel28->Location = System::Drawing::Point(0, 421);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(271, 76);
			this->panel28->TabIndex = 32;
			// 
			// dlcancbut
			// 
			this->dlcancbut->BackColor = System::Drawing::SystemColors::Control;
			this->dlcancbut->Location = System::Drawing::Point(138, 12);
			this->dlcancbut->Name = L"dlcancbut";
			this->dlcancbut->Size = System::Drawing::Size(120, 42);
			this->dlcancbut->TabIndex = 24;
			this->dlcancbut->Text = L"Очистить поля";
			this->dlcancbut->UseVisualStyleBackColor = false;
			this->dlcancbut->Click += gcnew System::EventHandler(this, &MyForm::dlcancbut_Click);
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::SystemColors::Control;
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Controls->Add(this->dlcomboBox1);
			this->panel29->Controls->Add(this->label22);
			this->panel29->Location = System::Drawing::Point(0, 148);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(271, 80);
			this->panel29->TabIndex = 29;
			// 
			// dlcomboBox1
			// 
			this->dlcomboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->dlcomboBox1->FormattingEnabled = true;
			this->dlcomboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Мед. персонал", L"Бухгалтерия", L"Уборка помещений" });
			this->dlcomboBox1->Location = System::Drawing::Point(11, 38);
			this->dlcomboBox1->Name = L"dlcomboBox1";
			this->dlcomboBox1->Size = System::Drawing::Size(247, 21);
			this->dlcomboBox1->TabIndex = 20;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 13);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(87, 13);
			this->label22->TabIndex = 15;
			this->label22->Text = L"Подразделение";
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::SystemColors::Control;
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel30->Controls->Add(this->label23);
			this->panel30->Controls->Add(this->dltextbox1);
			this->panel30->Location = System::Drawing::Point(0, 80);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(271, 70);
			this->panel30->TabIndex = 28;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(9, 8);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(115, 13);
			this->label23->TabIndex = 7;
			this->label23->Text = L"Название должности";
			// 
			// dltextbox1
			// 
			this->dltextbox1->Location = System::Drawing::Point(10, 29);
			this->dltextbox1->Name = L"dltextbox1";
			this->dltextbox1->Size = System::Drawing::Size(247, 20);
			this->dltextbox1->TabIndex = 12;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1012, 551);
			this->Controls->Add(this->TabControl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->TabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel12->ResumeLayout(false);
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView5))->EndInit();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel28->ResumeLayout(false);
			this->panel29->ResumeLayout(false);
			this->panel29->PerformLayout();
			this->panel30->ResumeLayout(false);
			this->panel30->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void zapcomboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void perspodbut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void persbutton1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void TabControl_Selecting(System::Object^ sender, System::Windows::Forms::TabControlCancelEventArgs^ e);
private: System::Void persbutton2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void persbutton3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dlbut1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dlbut2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dlbut3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dlpodtbut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dlcancbut_Click(System::Object^ sender, System::EventArgs^ e);

};
}
