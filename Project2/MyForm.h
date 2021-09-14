#pragma once

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

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button2;
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
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Panel^ panel18;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel19;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel20;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Panel^ panel21;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ dataGridView4;


	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button18;
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
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::Panel^ panel26;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::DataGridView^ dataGridView5;


private: System::Windows::Forms::Panel^ panel27;
private: System::Windows::Forms::Button^ button23;
private: System::Windows::Forms::Button^ button24;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Panel^ panel28;
private: System::Windows::Forms::Button^ button25;
private: System::Windows::Forms::Panel^ panel29;
private: System::Windows::Forms::ComboBox^ comboBox6;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Panel^ panel30;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Button^ button20;
private: System::Windows::Forms::Button^ button22;
private: System::Windows::Forms::Button^ button21;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
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
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->dataGridView5 = (gcnew System::Windows::Forms::DataGridView());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage4->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->tabPage6->SuspendLayout();
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
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel18->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->panel22->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel25->SuspendLayout();
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
			this->tabPage1->Text = L"��������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->button2);
			this->tabPage3->Controls->Add(this->dataGridView2);
			this->tabPage3->Controls->Add(this->panel2);
			this->tabPage3->Controls->Add(this->panel3);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->button4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(989, 509);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"������";
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
			this->tabPage4->Text = L"��������";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->panel21);
			this->tabPage5->Controls->Add(this->dataGridView4);
			this->tabPage5->Controls->Add(this->button19);
			this->tabPage5->Controls->Add(this->button14);
			this->tabPage5->Controls->Add(this->button18);
			this->tabPage5->Controls->Add(this->panel22);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(989, 509);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"������";
			this->tabPage5->UseVisualStyleBackColor = true;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->panel26);
			this->tabPage6->Controls->Add(this->dataGridView5);
			this->tabPage6->Controls->Add(this->panel27);
			this->tabPage6->Controls->Add(this->button20);
			this->tabPage6->Controls->Add(this->button22);
			this->tabPage6->Controls->Add(this->button21);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Padding = System::Windows::Forms::Padding(3);
			this->tabPage6->Size = System::Drawing::Size(989, 509);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"���������";
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
			this->Cancelbutton->Text = L"�������� ����";
			this->Cancelbutton->UseVisualStyleBackColor = false;
			// 
			// Podtverdbutton
			// 
			this->Podtverdbutton->BackColor = System::Drawing::SystemColors::Control;
			this->Podtverdbutton->Location = System::Drawing::Point(12, 434);
			this->Podtverdbutton->Name = L"Podtverdbutton";
			this->Podtverdbutton->Size = System::Drawing::Size(119, 42);
			this->Podtverdbutton->TabIndex = 23;
			this->Podtverdbutton->Text = L"�����������";
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
			this->TabchcomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"�������", L"���������" });
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
			this->Tabchlabel->Size = System::Drawing::Size(105, 13);
			this->Tabchlabel->TabIndex = 18;
			this->Tabchlabel->Text = L"������� ���������";
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
			this->TypecomboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"��������������", L"��-��������������" });
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
			this->Typelabel->Text = L"���������";
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
			this->Numlabel->Text = L"������� ���������";
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
			this->Korplabel->Text = L"��� ���������";
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
			this->Arealabel->Text = L"������� ���������";
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
			this->ChangeButton->Text = L"���������";
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
			this->DelButton->Text = L"��������";
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
			this->label2->Text = L"����� ��������� ������:";
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
			this->button1->Text = L"����������";
			this->button1->UseVisualStyleBackColor = false;
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
			this->label3->Text = L"����� ��������� ������:";
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
			this->button8->Text = L"��������";
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
			this->button9->Text = L"���������";
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
			this->button10->Text = L"����������";
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
			this->button12->Text = L"�����������";
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
			this->button13->Text = L"�������� ����";
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
			this->label10->Text = L"������� ��������";
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
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(9, 8);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(91, 13);
			this->label11->TabIndex = 7;
			this->label11->Text = L"����� ��������";
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
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(7, 451);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 47);
			this->button2->TabIndex = 31;
			this->button2->Text = L"����������";
			this->button2->UseVisualStyleBackColor = false;
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
			this->label1->Text = L"����� ��������� ������:";
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
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(333, 451);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 47);
			this->button3->TabIndex = 29;
			this->button3->Text = L"��������";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(173, 451);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(154, 47);
			this->button4->TabIndex = 28;
			this->button4->Text = L"���������";
			this->button4->UseVisualStyleBackColor = false;
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
			this->panel3->Visible = false;
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
			this->button6->Text = L"�����������";
			this->button6->UseVisualStyleBackColor = false;
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
			this->button7->Text = L"�������� ����";
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
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"�������", L"���������" });
			this->comboBox2->Location = System::Drawing::Point(12, 31);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(247, 21);
			this->comboBox2->TabIndex = 21;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::SystemColors::Control;
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->comboBox3);
			this->panel15->Controls->Add(this->label9);
			this->panel15->Location = System::Drawing::Point(0, 291);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(271, 69);
			this->panel15->TabIndex = 30;
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"��������������", L"��-��������������" });
			this->comboBox3->Location = System::Drawing::Point(11, 32);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(247, 21);
			this->comboBox3->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(8, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"����� �������� �����";
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
			this->label12->Text = L"��� ��������";
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
			this->panel19->Controls->Add(this->comboBox2);
			this->panel19->Controls->Add(this->label13);
			this->panel19->Location = System::Drawing::Point(0, 80);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(271, 70);
			this->panel19->TabIndex = 28;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(9, 8);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 13);
			this->label13->TabIndex = 7;
			this->label13->Text = L"�������� ������";
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::SystemColors::Control;
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->comboBox4);
			this->panel20->Controls->Add(this->label14);
			this->panel20->Location = System::Drawing::Point(0, 227);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(271, 65);
			this->panel20->TabIndex = 23;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(9, 7);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(66, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"��� �����";
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
			// comboBox4
			// 
			this->comboBox4->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"", L"�������", L"���������" });
			this->comboBox4->Location = System::Drawing::Point(11, 28);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(247, 21);
			this->comboBox4->TabIndex = 22;
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
			this->label8->Text = L"����� ��������� ������:";
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
			// button14
			// 
			this->button14->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Enabled = false;
			this->button14->Location = System::Drawing::Point(329, 456);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(146, 47);
			this->button14->TabIndex = 39;
			this->button14->Text = L"��������";
			this->button14->UseVisualStyleBackColor = false;
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
			this->panel22->Visible = false;
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
			this->button16->Text = L"�����������";
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
			this->button17->Text = L"�������� ����";
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
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(9, 13);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(98, 13);
			this->label17->TabIndex = 15;
			this->label17->Text = L"��������� ������";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(10, 29);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(247, 20);
			this->textBox3->TabIndex = 12;
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
			this->label18->Text = L"�������� ������";
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button18->Enabled = false;
			this->button18->Location = System::Drawing::Point(169, 456);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(154, 47);
			this->button18->TabIndex = 36;
			this->button18->Text = L"���������";
			this->button18->UseVisualStyleBackColor = false;
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button19->Enabled = false;
			this->button19->Location = System::Drawing::Point(3, 456);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(160, 47);
			this->button19->TabIndex = 38;
			this->button19->Text = L"����������";
			this->button19->UseVisualStyleBackColor = false;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"�������� ������";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 500;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"��������� ������";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 200;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"�������� ������";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->Width = 170;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"��� ��������";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->Width = 170;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"��� �����";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->Width = 160;
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
			this->label19->Text = L"����� ��������� ������:";
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
			// button20
			// 
			this->button20->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button20->Enabled = false;
			this->button20->Location = System::Drawing::Point(3, 456);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(160, 47);
			this->button20->TabIndex = 44;
			this->button20->Text = L"����������";
			this->button20->UseVisualStyleBackColor = false;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button21->Enabled = false;
			this->button21->Location = System::Drawing::Point(329, 456);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(146, 47);
			this->button21->TabIndex = 45;
			this->button21->Text = L"��������";
			this->button21->UseVisualStyleBackColor = false;
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button22->Enabled = false;
			this->button22->Location = System::Drawing::Point(169, 456);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(154, 47);
			this->button22->TabIndex = 42;
			this->button22->Text = L"���������";
			this->button22->UseVisualStyleBackColor = false;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel27->Controls->Add(this->button23);
			this->panel27->Controls->Add(this->button24);
			this->panel27->Controls->Add(this->label21);
			this->panel27->Controls->Add(this->panel28);
			this->panel27->Controls->Add(this->panel29);
			this->panel27->Controls->Add(this->panel30);
			this->panel27->Location = System::Drawing::Point(712, 6);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(271, 497);
			this->panel27->TabIndex = 41;
			this->panel27->Visible = false;
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
			// button24
			// 
			this->button24->BackColor = System::Drawing::SystemColors::Control;
			this->button24->Location = System::Drawing::Point(12, 434);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(119, 42);
			this->button24->TabIndex = 23;
			this->button24->Text = L"�����������";
			this->button24->UseVisualStyleBackColor = false;
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
			this->panel28->Controls->Add(this->button25);
			this->panel28->Location = System::Drawing::Point(0, 421);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(271, 76);
			this->panel28->TabIndex = 32;
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::SystemColors::Control;
			this->button25->Location = System::Drawing::Point(138, 12);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(120, 42);
			this->button25->TabIndex = 24;
			this->button25->Text = L"�������� ����";
			this->button25->UseVisualStyleBackColor = false;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::SystemColors::Control;
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Controls->Add(this->comboBox6);
			this->panel29->Controls->Add(this->label22);
			this->panel29->Location = System::Drawing::Point(0, 148);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(271, 80);
			this->panel29->TabIndex = 29;
			// 
			// comboBox6
			// 
			this->comboBox6->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"���. ��������", L"�����������", L"������ ���������" });
			this->comboBox6->Location = System::Drawing::Point(11, 38);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(247, 21);
			this->comboBox6->TabIndex = 20;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(9, 13);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(84, 13);
			this->label22->TabIndex = 15;
			this->label22->Text = L"��� ���������";
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::SystemColors::Control;
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel30->Controls->Add(this->label23);
			this->panel30->Controls->Add(this->textBox4);
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(10, 29);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(247, 20);
			this->textBox4->TabIndex = 12;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(11, 27);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(247, 20);
			this->textBox5->TabIndex = 13;
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
			this->dataGridViewTextBoxColumn6->Width = 350;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(11, 34);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(247, 20);
			this->textBox6->TabIndex = 16;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"�������� ���������";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 400;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"��� ���������";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 300;
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
			this->tabPage3->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			this->tabPage5->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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
	};
}
