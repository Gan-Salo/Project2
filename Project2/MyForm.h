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
	private: System::Windows::Forms::Label^ label1;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TabControl->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->Datapanel->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel1->SuspendLayout();
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
			this->TabControl->Size = System::Drawing::Size(882, 535);
			this->TabControl->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->Datapanel);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(874, 509);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Персонал";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(874, 509);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Пациент";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(814, 644);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Записи";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(814, 607);
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
			this->dataGridView1->Location = System::Drawing::Point(7, 8);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(584, 489);
			this->dataGridView1->TabIndex = 0;
			// 
			// Datapanel
			// 
			this->Datapanel->BackColor = System::Drawing::SystemColors::ControlLight;
			this->Datapanel->Controls->Add(this->label1);
			this->Datapanel->Controls->Add(this->voprbutton);
			this->Datapanel->Controls->Add(this->Podtverdbutton);
			this->Datapanel->Controls->Add(this->namelabel);
			this->Datapanel->Controls->Add(this->panel8);
			this->Datapanel->Controls->Add(this->panel7);
			this->Datapanel->Controls->Add(this->panel6);
			this->Datapanel->Controls->Add(this->panel5);
			this->Datapanel->Controls->Add(this->panel4);
			this->Datapanel->Controls->Add(this->panel1);
			this->Datapanel->Location = System::Drawing::Point(597, 8);
			this->Datapanel->Name = L"Datapanel";
			this->Datapanel->Size = System::Drawing::Size(271, 489);
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
			this->panel8->Size = System::Drawing::Size(271, 68);
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
			this->Korplabel->Location = System::Drawing::Point(9, 6);
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
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 13);
			this->label1->TabIndex = 34;
			this->label1->Text = L"Добавление сотрудника";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(907, 551);
			this->Controls->Add(this->TabControl);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->TabControl->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
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
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
