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
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
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
	private: System::Windows::Forms::Label^ perstrnum;

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
	private: System::Windows::Forms::Label^ cabstrnum;

	private: System::Windows::Forms::DataGridView^ dataGridView3;






	private: System::Windows::Forms::Panel^ panel11;

	private: System::Windows::Forms::Button^ cabpodbut;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel14;
	private: System::Windows::Forms::Button^ cabcancbut;

	private: System::Windows::Forms::Panel^ panel16;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ cabtextBox2;

	private: System::Windows::Forms::Panel^ panel17;

	private: System::Windows::Forms::Label^ label11;



	private: System::Windows::Forms::DataGridView^ dataGridView2;




	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ zapstrnum;

	private: System::Windows::Forms::Panel^ panel3;

private: System::Windows::Forms::Button^ zappodbut1;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel12;
private: System::Windows::Forms::Button^ zapcancbut1;

	private: System::Windows::Forms::Panel^ panel13;
	private: System::Windows::Forms::Panel^ panel15;


	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ zaptextbox1;

	private: System::Windows::Forms::Panel^ panel19;
private: System::Windows::Forms::ComboBox^ zapcomboBox1;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel20;
private: System::Windows::Forms::ComboBox^ zapcomboBox2;

	private: System::Windows::Forms::Label^ label14;




	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::Label^ uslstrnum;

	private: System::Windows::Forms::DataGridView^ dataGridView4;





	private: System::Windows::Forms::Panel^ panel22;

private: System::Windows::Forms::Button^ uslpodtbut;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel23;
private: System::Windows::Forms::Button^ uslcancbut;

	private: System::Windows::Forms::Panel^ panel24;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel25;
	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::TextBox^ usltextbox1;








private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ dlstrnum;

private: System::Windows::Forms::DataGridView^ dataGridView5;


private: System::Windows::Forms::Panel^ panel27;

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
private: System::Windows::Forms::TextBox^ cabtextBox1;
private: System::Windows::Forms::TextBox^ zaptextbox2;





















private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
private: System::Windows::Forms::Button^ zapbut1;
private: System::Windows::Forms::Button^ zapbut3;


private: System::Windows::Forms::Button^ zapbut2;

private: System::Windows::Forms::Button^ cabbut1;
private: System::Windows::Forms::Button^ cabbut3;
private: System::Windows::Forms::Button^ cabbut2;
private: System::Windows::Forms::Button^ uslbut1;
private: System::Windows::Forms::Button^ uslbut3;


private: System::Windows::Forms::Button^ uslbut2;

private: System::Windows::Forms::Button^ dlbut1;
private: System::Windows::Forms::Button^ dlbut3;


private: System::Windows::Forms::Button^ dlbut2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::TextBox^ zaptextbox3;



private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::Label^ label28;
private: System::Windows::Forms::Label^ label29;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::Label^ label31;






private: System::Windows::Forms::TextBox^ usltextbox2;










	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::Void constr();
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TabControl = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->persbutton1 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->perstrnum = (gcnew System::Windows::Forms::Label());
			this->persbutton3 = (gcnew System::Windows::Forms::Button());
			this->persbutton2 = (gcnew System::Windows::Forms::Button());
			this->Datapanel = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
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
			this->zapbut1 = (gcnew System::Windows::Forms::Button());
			this->zapbut3 = (gcnew System::Windows::Forms::Button());
			this->zapbut2 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zapstrnum = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->zappodbut1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->zapcancbut1 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->zaptextbox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->zapcomboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->zaptextbox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->zapcomboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->zaptextbox3 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->cabbut1 = (gcnew System::Windows::Forms::Button());
			this->cabbut3 = (gcnew System::Windows::Forms::Button());
			this->cabbut2 = (gcnew System::Windows::Forms::Button());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->cabstrnum = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->cabpodbut = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->cabcancbut = (gcnew System::Windows::Forms::Button());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->cabtextBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->cabtextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->uslbut1 = (gcnew System::Windows::Forms::Button());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->uslstrnum = (gcnew System::Windows::Forms::Label());
			this->uslbut3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->uslbut2 = (gcnew System::Windows::Forms::Button());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->uslpodtbut = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->uslcancbut = (gcnew System::Windows::Forms::Button());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->usltextbox2 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->usltextbox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->dlbut1 = (gcnew System::Windows::Forms::Button());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->dlstrnum = (gcnew System::Windows::Forms::Label());
			this->dlbut3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dlbut2 = (gcnew System::Windows::Forms::Button());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->label31 = (gcnew System::Windows::Forms::Label());
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
			this->panel13->SuspendLayout();
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
			this->tabPage1->Text = L"��������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// persbutton1
			// 
			this->persbutton1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->persbutton1->Location = System::Drawing::Point(7, 451);
			this->persbutton1->Name = L"persbutton1";
			this->persbutton1->Size = System::Drawing::Size(160, 47);
			this->persbutton1->TabIndex = 25;
			this->persbutton1->Text = L"����������";
			this->persbutton1->UseVisualStyleBackColor = false;
			this->persbutton1->Click += gcnew System::EventHandler(this, &MyForm::persbutton1_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->label2);
			this->panel9->Controls->Add(this->perstrnum);
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
			this->label2->Text = L"����� ��������� ������:";
			// 
			// perstrnum
			// 
			this->perstrnum->AutoSize = true;
			this->perstrnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->perstrnum->Location = System::Drawing::Point(182, 12);
			this->perstrnum->Name = L"perstrnum";
			this->perstrnum->Size = System::Drawing::Size(18, 20);
			this->perstrnum->TabIndex = 20;
			this->perstrnum->Text = L"1";
			// 
			// persbutton3
			// 
			this->persbutton3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->persbutton3->Location = System::Drawing::Point(333, 451);
			this->persbutton3->Name = L"persbutton3";
			this->persbutton3->Size = System::Drawing::Size(146, 47);
			this->persbutton3->TabIndex = 4;
			this->persbutton3->Text = L"��������";
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
			this->persbutton2->Text = L"���������";
			this->persbutton2->UseVisualStyleBackColor = false;
			this->persbutton2->Click += gcnew System::EventHandler(this, &MyForm::persbutton2_Click);
			// 
			// Datapanel
			// 
			this->Datapanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Datapanel->Controls->Add(this->label27);
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
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(30, 27);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(196, 25);
			this->label27->TabIndex = 34;
			this->label27->Text = L"����� �� �������";
			// 
			// perspodbut
			// 
			this->perspodbut->BackColor = System::Drawing::SystemColors::Control;
			this->perspodbut->Location = System::Drawing::Point(12, 434);
			this->perspodbut->Name = L"perspodbut";
			this->perspodbut->Size = System::Drawing::Size(119, 42);
			this->perspodbut->TabIndex = 23;
			this->perspodbut->Text = L"�����������";
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
			this->perscancbut->Text = L"�������� ����";
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
			this->Tabchlabel->Text = L"������� ���������";
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
			this->Typelabel->Text = L"���������";
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
			this->Numlabel->Text = L"������� ���������";
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
			this->Korplabel->Text = L"��� ���������";
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
			this->Arealabel->Text = L"������� ���������";
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
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->column0,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 6);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->Size = System::Drawing::Size(699, 437);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellClick);
			// 
			// column0
			// 
			this->column0->HeaderText = L"���";
			this->column0->Name = L"column0";
			this->column0->Width = 245;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"�������";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"�������";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"���������";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"�������";
			this->Column4->Name = L"Column4";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->zapbut1);
			this->tabPage3->Controls->Add(this->zapbut3);
			this->tabPage3->Controls->Add(this->zapbut2);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->panel2);
			this->tabPage3->Controls->Add(this->panel3);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(989, 509);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"������";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// zapbut1
			// 
			this->zapbut1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->zapbut1->Location = System::Drawing::Point(6, 451);
			this->zapbut1->Name = L"zapbut1";
			this->zapbut1->Size = System::Drawing::Size(160, 47);
			this->zapbut1->TabIndex = 37;
			this->zapbut1->Text = L"����������";
			this->zapbut1->UseVisualStyleBackColor = false;
			this->zapbut1->Click += gcnew System::EventHandler(this, &MyForm::zapbut1_Click);
			// 
			// zapbut3
			// 
			this->zapbut3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->zapbut3->Location = System::Drawing::Point(332, 451);
			this->zapbut3->Name = L"zapbut3";
			this->zapbut3->Size = System::Drawing::Size(146, 47);
			this->zapbut3->TabIndex = 36;
			this->zapbut3->Text = L"��������";
			this->zapbut3->UseVisualStyleBackColor = false;
			this->zapbut3->Click += gcnew System::EventHandler(this, &MyForm::zapbut3_Click);
			// 
			// zapbut2
			// 
			this->zapbut2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->zapbut2->Location = System::Drawing::Point(172, 451);
			this->zapbut2->Name = L"zapbut2";
			this->zapbut2->Size = System::Drawing::Size(154, 47);
			this->zapbut2->TabIndex = 35;
			this->zapbut2->Text = L"���������";
			this->zapbut2->UseVisualStyleBackColor = false;
			this->zapbut2->Click += gcnew System::EventHandler(this, &MyForm::zapbut2_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->Column6, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn5, this->Column5
			});
			this->dataGridView2->Location = System::Drawing::Point(6, 6);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->Size = System::Drawing::Size(700, 437);
			this->dataGridView2->TabIndex = 26;
			this->dataGridView2->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView2_CellClick);
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"�������� ������";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 130;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"��� ��������";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 140;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"������� ��������";
			this->Column6->Name = L"Column6";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"��� �����";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 130;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"������� ������";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"��������� ������";
			this->Column5->Name = L"Column5";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->zapstrnum);
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
			this->label1->Text = L"����� ��������� ������:";
			// 
			// zapstrnum
			// 
			this->zapstrnum->AutoSize = true;
			this->zapstrnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zapstrnum->Location = System::Drawing::Point(182, 12);
			this->zapstrnum->Name = L"zapstrnum";
			this->zapstrnum->Size = System::Drawing::Size(18, 20);
			this->zapstrnum->TabIndex = 20;
			this->zapstrnum->Text = L"1";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->zappodbut1);
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
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label28->Location = System::Drawing::Point(39, 21);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(196, 25);
			this->label28->TabIndex = 35;
			this->label28->Text = L"����� �� �������";
			// 
			// zappodbut1
			// 
			this->zappodbut1->BackColor = System::Drawing::SystemColors::Control;
			this->zappodbut1->Location = System::Drawing::Point(12, 434);
			this->zappodbut1->Name = L"zappodbut1";
			this->zappodbut1->Size = System::Drawing::Size(119, 42);
			this->zappodbut1->TabIndex = 23;
			this->zappodbut1->Text = L"�����������";
			this->zappodbut1->UseVisualStyleBackColor = false;
			this->zappodbut1->Click += gcnew System::EventHandler(this, &MyForm::zappodbut1_Click);
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
			this->panel12->Controls->Add(this->zapcancbut1);
			this->panel12->Location = System::Drawing::Point(0, 421);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(271, 71);
			this->panel12->TabIndex = 32;
			// 
			// zapcancbut1
			// 
			this->zapcancbut1->BackColor = System::Drawing::SystemColors::Control;
			this->zapcancbut1->Location = System::Drawing::Point(138, 12);
			this->zapcancbut1->Name = L"zapcancbut1";
			this->zapcancbut1->Size = System::Drawing::Size(120, 42);
			this->zapcancbut1->TabIndex = 24;
			this->zapcancbut1->Text = L"�������� ����";
			this->zapcancbut1->UseVisualStyleBackColor = false;
			this->zapcancbut1->Click += gcnew System::EventHandler(this, &MyForm::zapcancbut1_Click);
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::SystemColors::Control;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->label9);
			this->panel13->Controls->Add(this->zaptextbox2);
			this->panel13->Location = System::Drawing::Point(0, 359);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(271, 63);
			this->panel13->TabIndex = 31;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"����� �������� �����";
			// 
			// zaptextbox2
			// 
			this->zaptextbox2->Location = System::Drawing::Point(12, 35);
			this->zaptextbox2->Name = L"zaptextbox2";
			this->zaptextbox2->ReadOnly = true;
			this->zaptextbox2->Size = System::Drawing::Size(248, 20);
			this->zaptextbox2->TabIndex = 18;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::Control;
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->zapcomboBox2);
			this->panel15->Controls->Add(this->label14);
			this->panel15->Location = System::Drawing::Point(0, 289);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(271, 71);
			this->panel15->TabIndex = 30;
			// 
			// zapcomboBox2
			// 
			this->zapcomboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->zapcomboBox2->FormattingEnabled = true;
			this->zapcomboBox2->Location = System::Drawing::Point(12, 38);
			this->zapcomboBox2->Name = L"zapcomboBox2";
			this->zapcomboBox2->Size = System::Drawing::Size(247, 21);
			this->zapcomboBox2->TabIndex = 22;
			this->zapcomboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::zapcomboBox2_SelectedIndexChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(10, 17);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"��� �����";
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::SystemColors::Control;
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->label12);
			this->panel18->Controls->Add(this->zaptextbox1);
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
			this->label12->Text = L"��� ��������";
			// 
			// zaptextbox1
			// 
			this->zaptextbox1->Location = System::Drawing::Point(11, 37);
			this->zaptextbox1->Name = L"zaptextbox1";
			this->zaptextbox1->Size = System::Drawing::Size(248, 20);
			this->zaptextbox1->TabIndex = 12;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::SystemColors::Control;
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->label26);
			this->panel19->Controls->Add(this->label25);
			this->panel19->Controls->Add(this->zapcomboBox1);
			this->panel19->Controls->Add(this->label13);
			this->panel19->Location = System::Drawing::Point(0, 65);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(271, 85);
			this->panel19->TabIndex = 28;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(12, 57);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(101, 13);
			this->label26->TabIndex = 35;
			this->label26->Text = L"��������� ������:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(115, 58);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(0, 13);
			this->label25->TabIndex = 34;
			// 
			// zapcomboBox1
			// 
			this->zapcomboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->zapcomboBox1->FormattingEnabled = true;
			this->zapcomboBox1->Location = System::Drawing::Point(11, 29);
			this->zapcomboBox1->Name = L"zapcomboBox1";
			this->zapcomboBox1->Size = System::Drawing::Size(247, 21);
			this->zapcomboBox1->TabIndex = 21;
			this->zapcomboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::zapcomboBox1_SelectedIndexChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 9);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"�������� ������";
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::Control;
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->zaptextbox3);
			this->panel20->Controls->Add(this->label24);
			this->panel20->Location = System::Drawing::Point(0, 227);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(271, 65);
			this->panel20->TabIndex = 23;
			// 
			// zaptextbox3
			// 
			this->zaptextbox3->Location = System::Drawing::Point(11, 35);
			this->zaptextbox3->Name = L"zaptextbox3";
			this->zaptextbox3->Size = System::Drawing::Size(248, 20);
			this->zaptextbox3->TabIndex = 13;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(8, 13);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(99, 13);
			this->label24->TabIndex = 15;
			this->label24->Text = L"������� ��������";
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
			this->tabPage4->Text = L"��������";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// cabbut1
			// 
			this->cabbut1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cabbut1->Location = System::Drawing::Point(3, 456);
			this->cabbut1->Name = L"cabbut1";
			this->cabbut1->Size = System::Drawing::Size(160, 47);
			this->cabbut1->TabIndex = 34;
			this->cabbut1->Text = L"����������";
			this->cabbut1->UseVisualStyleBackColor = false;
			this->cabbut1->Click += gcnew System::EventHandler(this, &MyForm::cabbut1_Click);
			// 
			// cabbut3
			// 
			this->cabbut3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cabbut3->Location = System::Drawing::Point(329, 456);
			this->cabbut3->Name = L"cabbut3";
			this->cabbut3->Size = System::Drawing::Size(146, 47);
			this->cabbut3->TabIndex = 33;
			this->cabbut3->Text = L"��������";
			this->cabbut3->UseVisualStyleBackColor = false;
			this->cabbut3->Click += gcnew System::EventHandler(this, &MyForm::cabbut3_Click);
			// 
			// cabbut2
			// 
			this->cabbut2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->cabbut2->Location = System::Drawing::Point(169, 456);
			this->cabbut2->Name = L"cabbut2";
			this->cabbut2->Size = System::Drawing::Size(154, 47);
			this->cabbut2->TabIndex = 32;
			this->cabbut2->Text = L"���������";
			this->cabbut2->UseVisualStyleBackColor = false;
			this->cabbut2->Click += gcnew System::EventHandler(this, &MyForm::cabbut2_Click);
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->label3);
			this->panel10->Controls->Add(this->cabstrnum);
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
			this->label3->Text = L"����� ��������� ������:";
			// 
			// cabstrnum
			// 
			this->cabstrnum->AutoSize = true;
			this->cabstrnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cabstrnum->Location = System::Drawing::Point(182, 12);
			this->cabstrnum->Name = L"cabstrnum";
			this->cabstrnum->Size = System::Drawing::Size(18, 20);
			this->cabstrnum->TabIndex = 20;
			this->cabstrnum->Text = L"1";
			// 
			// dataGridView3
			// 
			this->dataGridView3->AllowUserToAddRows = false;
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
			this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView3_CellClick);
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"����� ��������";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 350;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"������� ��������";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 345;
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel11->Controls->Add(this->label29);
			this->panel11->Controls->Add(this->cabpodbut);
			this->panel11->Controls->Add(this->label5);
			this->panel11->Controls->Add(this->panel14);
			this->panel11->Controls->Add(this->panel16);
			this->panel11->Controls->Add(this->panel17);
			this->panel11->Location = System::Drawing::Point(712, 6);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(271, 497);
			this->panel11->TabIndex = 29;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label29->Location = System::Drawing::Point(30, 28);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(196, 25);
			this->label29->TabIndex = 35;
			this->label29->Text = L"����� �� �������";
			// 
			// cabpodbut
			// 
			this->cabpodbut->BackColor = System::Drawing::SystemColors::Control;
			this->cabpodbut->Location = System::Drawing::Point(12, 434);
			this->cabpodbut->Name = L"cabpodbut";
			this->cabpodbut->Size = System::Drawing::Size(119, 42);
			this->cabpodbut->TabIndex = 23;
			this->cabpodbut->Text = L"�����������";
			this->cabpodbut->UseVisualStyleBackColor = false;
			this->cabpodbut->Click += gcnew System::EventHandler(this, &MyForm::cabpodbut_Click);
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
			this->panel14->Controls->Add(this->cabcancbut);
			this->panel14->Location = System::Drawing::Point(0, 421);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(271, 76);
			this->panel14->TabIndex = 32;
			// 
			// cabcancbut
			// 
			this->cabcancbut->BackColor = System::Drawing::SystemColors::Control;
			this->cabcancbut->Location = System::Drawing::Point(138, 12);
			this->cabcancbut->Name = L"cabcancbut";
			this->cabcancbut->Size = System::Drawing::Size(120, 42);
			this->cabcancbut->TabIndex = 24;
			this->cabcancbut->Text = L"�������� ����";
			this->cabcancbut->UseVisualStyleBackColor = false;
			this->cabcancbut->Click += gcnew System::EventHandler(this, &MyForm::cabcancbut_Click);
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::SystemColors::Control;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->label10);
			this->panel16->Controls->Add(this->cabtextBox2);
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
			this->label10->Text = L"������� ��������";
			// 
			// cabtextBox2
			// 
			this->cabtextBox2->Location = System::Drawing::Point(11, 37);
			this->cabtextBox2->Name = L"cabtextBox2";
			this->cabtextBox2->Size = System::Drawing::Size(247, 20);
			this->cabtextBox2->TabIndex = 12;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::SystemColors::Control;
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->cabtextBox1);
			this->panel17->Controls->Add(this->label11);
			this->panel17->Location = System::Drawing::Point(0, 80);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(271, 70);
			this->panel17->TabIndex = 28;
			// 
			// cabtextBox1
			// 
			this->cabtextBox1->Location = System::Drawing::Point(11, 27);
			this->cabtextBox1->Name = L"cabtextBox1";
			this->cabtextBox1->Size = System::Drawing::Size(247, 20);
			this->cabtextBox1->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 7;
			this->label11->Text = L"����� ��������";
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->uslbut1);
			this->tabPage5->Controls->Add(this->panel21);
			this->tabPage5->Controls->Add(this->uslbut3);
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Controls->Add(this->uslbut2);
			this->tabPage5->Controls->Add(this->panel22);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(989, 509);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"������";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// uslbut1
			// 
			this->uslbut1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->uslbut1->Location = System::Drawing::Point(4, 456);
			this->uslbut1->Name = L"uslbut1";
			this->uslbut1->Size = System::Drawing::Size(160, 47);
			this->uslbut1->TabIndex = 37;
			this->uslbut1->Text = L"����������";
			this->uslbut1->UseVisualStyleBackColor = false;
			this->uslbut1->Click += gcnew System::EventHandler(this, &MyForm::uslbut1_Click);
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Controls->Add(this->label8);
			this->panel21->Controls->Add(this->uslstrnum);
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
			this->label8->Text = L"����� ��������� ������:";
			// 
			// uslstrnum
			// 
			this->uslstrnum->AutoSize = true;
			this->uslstrnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->uslstrnum->Location = System::Drawing::Point(182, 12);
			this->uslstrnum->Name = L"uslstrnum";
			this->uslstrnum->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->uslstrnum->Size = System::Drawing::Size(18, 20);
			this->uslstrnum->TabIndex = 20;
			this->uslstrnum->Text = L"1";
			// 
			// uslbut3
			// 
			this->uslbut3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->uslbut3->Location = System::Drawing::Point(330, 456);
			this->uslbut3->Name = L"uslbut3";
			this->uslbut3->Size = System::Drawing::Size(146, 47);
			this->uslbut3->TabIndex = 36;
			this->uslbut3->Text = L"��������";
			this->uslbut3->UseVisualStyleBackColor = false;
			this->uslbut3->Click += gcnew System::EventHandler(this, &MyForm::uslbut3_Click);
			// 
			// dataGridView4
			// 
			this->dataGridView4->AllowUserToAddRows = false;
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
			this->dataGridView4->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView4_CellClick);
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"�������� ������";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 490;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"��������� ������";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 205;
			// 
			// uslbut2
			// 
			this->uslbut2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->uslbut2->Location = System::Drawing::Point(170, 456);
			this->uslbut2->Name = L"uslbut2";
			this->uslbut2->Size = System::Drawing::Size(154, 47);
			this->uslbut2->TabIndex = 35;
			this->uslbut2->Text = L"���������";
			this->uslbut2->UseVisualStyleBackColor = false;
			this->uslbut2->Click += gcnew System::EventHandler(this, &MyForm::uslbut2_Click);
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel22->Controls->Add(this->label30);
			this->panel22->Controls->Add(this->uslpodtbut);
			this->panel22->Controls->Add(this->label16);
			this->panel22->Controls->Add(this->panel23);
			this->panel22->Controls->Add(this->panel24);
			this->panel22->Controls->Add(this->panel25);
			this->panel22->Location = System::Drawing::Point(712, 6);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(271, 497);
			this->panel22->TabIndex = 35;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label30->Location = System::Drawing::Point(30, 30);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(196, 25);
			this->label30->TabIndex = 35;
			this->label30->Text = L"����� �� �������";
			// 
			// uslpodtbut
			// 
			this->uslpodtbut->BackColor = System::Drawing::SystemColors::Control;
			this->uslpodtbut->Location = System::Drawing::Point(12, 434);
			this->uslpodtbut->Name = L"uslpodtbut";
			this->uslpodtbut->Size = System::Drawing::Size(119, 42);
			this->uslpodtbut->TabIndex = 23;
			this->uslpodtbut->Text = L"�����������";
			this->uslpodtbut->UseVisualStyleBackColor = false;
			this->uslpodtbut->Click += gcnew System::EventHandler(this, &MyForm::uslpodtbut_Click);
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
			this->panel23->Controls->Add(this->uslcancbut);
			this->panel23->Location = System::Drawing::Point(0, 421);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(271, 76);
			this->panel23->TabIndex = 32;
			// 
			// uslcancbut
			// 
			this->uslcancbut->BackColor = System::Drawing::SystemColors::Control;
			this->uslcancbut->Location = System::Drawing::Point(138, 12);
			this->uslcancbut->Name = L"uslcancbut";
			this->uslcancbut->Size = System::Drawing::Size(120, 42);
			this->uslcancbut->TabIndex = 24;
			this->uslcancbut->Text = L"�������� ����";
			this->uslcancbut->UseVisualStyleBackColor = false;
			this->uslcancbut->Click += gcnew System::EventHandler(this, &MyForm::uslcancbut_Click);
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::SystemColors::Control;
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel24->Controls->Add(this->usltextbox2);
			this->panel24->Controls->Add(this->label17);
			this->panel24->Location = System::Drawing::Point(0, 148);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(271, 80);
			this->panel24->TabIndex = 29;
			// 
			// usltextbox2
			// 
			this->usltextbox2->Location = System::Drawing::Point(11, 34);
			this->usltextbox2->Name = L"usltextbox2";
			this->usltextbox2->Size = System::Drawing::Size(247, 20);
			this->usltextbox2->TabIndex = 16;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(98, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"��������� ������";
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::SystemColors::Control;
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Controls->Add(this->label18);
			this->panel25->Controls->Add(this->usltextbox1);
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
			this->label18->Text = L"�������� ������";
			// 
			// usltextbox1
			// 
			this->usltextbox1->Location = System::Drawing::Point(10, 29);
			this->usltextbox1->Name = L"usltextbox1";
			this->usltextbox1->Size = System::Drawing::Size(247, 20);
			this->usltextbox1->TabIndex = 12;
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
			this->tabPage6->Text = L"���������";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// dlbut1
			// 
			this->dlbut1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->dlbut1->Location = System::Drawing::Point(6, 456);
			this->dlbut1->Name = L"dlbut1";
			this->dlbut1->Size = System::Drawing::Size(160, 47);
			this->dlbut1->TabIndex = 37;
			this->dlbut1->Text = L"����������";
			this->dlbut1->UseVisualStyleBackColor = false;
			this->dlbut1->Click += gcnew System::EventHandler(this, &MyForm::dlbut1_Click);
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Controls->Add(this->label19);
			this->panel26->Controls->Add(this->dlstrnum);
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
			this->label19->Text = L"����� ��������� ������:";
			// 
			// dlstrnum
			// 
			this->dlstrnum->AutoSize = true;
			this->dlstrnum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dlstrnum->Location = System::Drawing::Point(182, 12);
			this->dlstrnum->Name = L"dlstrnum";
			this->dlstrnum->Size = System::Drawing::Size(18, 20);
			this->dlstrnum->TabIndex = 20;
			this->dlstrnum->Text = L"1";
			// 
			// dlbut3
			// 
			this->dlbut3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->dlbut3->Location = System::Drawing::Point(332, 456);
			this->dlbut3->Name = L"dlbut3";
			this->dlbut3->Size = System::Drawing::Size(146, 47);
			this->dlbut3->TabIndex = 36;
			this->dlbut3->Text = L"��������";
			this->dlbut3->UseVisualStyleBackColor = false;
			this->dlbut3->Click += gcnew System::EventHandler(this, &MyForm::dlbut3_Click);
			// 
			// dataGridView5
			// 
			this->dataGridView5->AllowUserToAddRows = false;
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
			this->dataGridView5->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView5_CellClick);
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"�������� ���������";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 395;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"�������������";
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
			this->dlbut2->Text = L"���������";
			this->dlbut2->UseVisualStyleBackColor = false;
			this->dlbut2->Click += gcnew System::EventHandler(this, &MyForm::dlbut2_Click);
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel27->Controls->Add(this->label31);
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
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->Location = System::Drawing::Point(30, 30);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(196, 25);
			this->label31->TabIndex = 35;
			this->label31->Text = L"����� �� �������";
			// 
			// dlpodtbut
			// 
			this->dlpodtbut->BackColor = System::Drawing::SystemColors::Control;
			this->dlpodtbut->Location = System::Drawing::Point(12, 434);
			this->dlpodtbut->Name = L"dlpodtbut";
			this->dlpodtbut->Size = System::Drawing::Size(119, 42);
			this->dlpodtbut->TabIndex = 23;
			this->dlpodtbut->Text = L"�����������";
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
			this->dlcancbut->Text = L"�������� ����";
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
			this->dlcomboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"���. ��������", L"�����������", L"������ ���������" });
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
			this->label22->Text = L"�������������";
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
			this->label23->Text = L"�������� ���������";
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
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
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

private: System::Void uslbut1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void uslbut2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void uslbut3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void uslpodtbut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void uslcancbut_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void cabbut1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cabbut2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cabbut3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cabpodbut_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cabcancbut_Click(System::Object^ sender, System::EventArgs^ e); 

private: System::Void zapbut1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void zapbut2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void zapbut3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void zapcancbut1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void zappodbut1_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void zapcomboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dataGridView4_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
private: System::Void dataGridView5_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);

};
}
