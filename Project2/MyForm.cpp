#include "MyForm.h"

#include <Windows.h>
#include <fstream>
#include <string>

using namespace Project2; // �������� �������

int f_p = 0, f_z = 0, f_c = 0, f_u = 0, f_d = 0;
int rez = 0, n = 1;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}

struct Personal {

	wchar_t d_fio[40];
	int d_age;
	wchar_t d_tel[20];
	wchar_t d_dolzn[30];
	int cabnum;
} pers[100];

struct Cabin {
	int cabnum;
	int cabarea;
} cab[40];

struct Zapis {

	wchar_t d_fio[40];
	wchar_t p_fio[40];
	int p_age;
	int cabnum;
} zap[100];

struct Patient {

	wchar_t p_fio[40];
	int p_age;
	wchar_t p_tel[20];
} pt[100];

struct Uslyg {

	wchar_t u_title[50];
	int cost;

} usl[100];

struct Dolzn {

	wchar_t dl_title[50];
	wchar_t dl_type[50];

} dl[100];

System::Void Project2::MyForm::constr() {
       
        wcscpy(pers[0].d_fio, L"�.�.��������");
        pers[0].d_age = 25;
        wcscpy(pers[0].d_tel, L"+79836043212");
        wcscpy(pers[0].d_dolzn, L"����������-������");
        pers[0].cabnum = 232;

        dataGridView1->Rows->Add();
        for (int i = 0; i < wcslen(pers[0].d_fio); i++)
        {
            dataGridView1[0, 0]->Value += Convert::ToString(pers[0].d_fio[i]);
        }             
        dataGridView1[1, 0]->Value = Convert::ToString(pers[0].d_age);       
        for (int i = 0; i < wcslen(pers[0].d_tel); i++)
        {
            dataGridView1[2, 0]->Value += Convert::ToString(pers[0].d_tel[i]);
        }
        for (int i = 0; i < wcslen(pers[0].d_dolzn); i++)
        {
            dataGridView1[3, 0]->Value += Convert::ToString(pers[0].d_dolzn[i]);
        }
        dataGridView1[4, 0]->Value = Convert::ToString(pers[0].cabnum);
     
        cab[0].cabnum = 232;
        cab[0].cabarea = 50;
        
        dataGridView3->Rows->Add();       
        dataGridView3[0, 0]->Value = Convert::ToString(cab[0].cabnum);
        dataGridView3[1, 0]->Value = Convert::ToString(cab[0].cabarea);

        wcscpy(zap[0].d_fio, L"�.�.��������");
        wcscpy(zap[0].p_fio, L"C.�.������");
        zap[0].p_age = 21;
        zap[0].cabnum = 232;
        dataGridView2->Rows->Add();
        for (int i = 0; i < wcslen(zap[0].d_fio); i++)
        {
            dataGridView2[0, 0]->Value += Convert::ToString(zap[0].d_fio[i]);
        }   
        for (int i = 0; i < wcslen(zap[0].p_fio); i++)
        {
            dataGridView2[1, 0]->Value += Convert::ToString(zap[0].p_fio[i]);
        }
        dataGridView2[2, 0]->Value = Convert::ToString(zap[0].p_age);
        dataGridView2[3, 0]->Value = Convert::ToString(zap[0].cabnum);

        wcscpy(usl[0].u_title, L"������ �����");
        usl[0].cost = 700;
        dataGridView4->Rows->Add();
        for (int i = 0; i < wcslen(usl[0].u_title); i++)
        {          
            dataGridView4[0, 0]->Value += Convert::ToString(usl[0].u_title[i]);
        }       
        dataGridView4[1, 0]->Value = Convert::ToString(usl[0].cost);

        wcscpy(dl[0].dl_title, L"����������-������");
        wcscpy(dl[0].dl_type, L"���. ��������");
        
        dataGridView5->Rows->Add();
        for (int i = 0; i < wcslen(dl[0].dl_title); i++)
        {
            dataGridView5[0, 0]->Value += Convert::ToString(dl[0].dl_title[i]);
        }
        for (int i = 0; i < wcslen(dl[0].dl_type); i++)
        {
            dataGridView5[1, 0]->Value += Convert::ToString(dl[0].dl_type[i]);
        }
        
};

System::Void Project2::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    constr();

    for (int i = 0; i < 1; i++)
    {
        String^ temp;
        for (int j = 0; j < wcslen(dl[0].dl_title); j++)
        {
            temp += dl[0].dl_title[j];
        }
        pers1comboBox->Items->Add(temp);
      
    }

    for (int i = 0; i < 1; i++)
    {        
        pers2comboBox->Items->Add(cab[0].cabnum);
    }

    for (int i = 0; i < 1; i++)
    {
        String^ temp;
        for (int j = 0; j < wcslen(usl[0].u_title); j++)
        {
            temp += usl[0].u_title[j];
        }
        zapcomboBox1->Items->Add(temp);

    }

    for (int i = 0; i < 1; i++)
    {
        String^ temp;
        for (int j = 0; j < wcslen(pers[0].d_fio); j++)
        {
            temp += pers[0].d_fio[j];
        }
        zapcomboBox2->Items->Add(temp);
        
    }
    
    for (int i = 0; i < 1; i++)
    {
        String^ temp;
        for (int j = 0; j < wcslen(pers[0].d_fio); j++)
        {
            temp += pers[0].d_fio[j];
        }        

    }
   
}

System::Void Project2::MyForm::TabControl_Selecting(System::Object^ sender, System::Windows::Forms::TabControlCancelEventArgs^ e) {
    
  
}
System::Void Project2::MyForm::zapcomboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{   
    int s;
    textBox7->Text += "";
    s = zapcomboBox2->SelectedIndex;
    textBox7->Text += pers[s].cabnum;
}

System::Void Project2::MyForm::perspodbut_Click(System::Object^ sender, System::EventArgs^ e) {

    if (rez == 1)
    {

        int numd_fio = 0, numd_tel = 0, numd_dolzn = 0;
        if (PersTextBox1->Text == "" || PersTextBox2->Text == "" || PersTextBox3->Text == "" || pers1comboBox->Text == "" || pers2comboBox->Text == "")
        {
            MessageBox::Show("������! ��� ���� ������ ���� ���������!");
        }
        else
        {

            for (int i = 0; i < this->PersTextBox1->Text->Length; i++)
            {
                pers[n].d_fio[i] = this->PersTextBox1->Text[i];
                numd_fio++;
            }

            try
            {
                pers[n].d_age = Convert::ToInt32(this->PersTextBox2->Text);
            }
            catch (...)
            {
                MessageBox::Show("������! � ���� '�������' ������ ���� ������� ������ �������� ��������.");
                return;
            }
            
            for (int i = 0; i < this->PersTextBox3->Text->Length; i++)
            {
                pers[n].d_tel[i] = this->PersTextBox3->Text[i];
                numd_tel++;
            }
                                 
            for (int i = 0; i < this->pers1comboBox->Text->Length; i++)
            {
                pers[n].d_dolzn[i] = this->pers1comboBox->Text[i];
                numd_dolzn++;
            }

            pers[n].cabnum = Convert::ToInt32(this->pers2comboBox->Text);

            //������ � �������
            dataGridView1->Rows->Add();

            for (int m = 0; m < numd_fio; m++)
            {
                dataGridView1[0, n]->Value += Convert::ToString(pers[n].d_fio[m]);
            }

            dataGridView1[1, n]->Value = Convert::ToString(pers[n].d_age);
                     
            for (int m = 0; m < numd_tel; m++)
            {
                dataGridView1[2, n]->Value += Convert::ToString(pers[n].d_tel[m]);
            }

            for (int m = 0; m < numd_dolzn; m++)
            {
                dataGridView1[3, n]->Value += Convert::ToString(pers[n].d_dolzn[m]);
            }
            
            dataGridView1[4, n]->Value = Convert::ToString(pers[n].cabnum);  

            n++;

            zapcomboBox2->Items->Clear();
            for (int i = 0; i < n; i++)
            {
                String^ temp;
                for (int j = 0; j < wcslen(pers[i].d_fio); j++)
                {
                    temp += pers[i].d_fio[j];
                }
                zapcomboBox2->Items->Add(temp);

            }
        }
    }
    else if (rez == 2)
    {       
        int cur = dataGridView1->CurrentRow->Index;

        int numd_fio = 0, numd_tel = 0, numd_dolzn = 0;

        if (PersTextBox1->Text == "" || PersTextBox2->Text == "" || PersTextBox3->Text == "" || pers1comboBox->Text == "" || pers2comboBox->Text == "")
        {
            MessageBox::Show("������! ��� ���� ������ ���� ���������!");
        }
        else
        {

            dataGridView1[0, cur]->Value = Convert::ToString(PersTextBox1->Text);
            dataGridView1[1, cur]->Value = Convert::ToString(PersTextBox2->Text);
            dataGridView1[2, cur]->Value = Convert::ToString(PersTextBox3->Text);
            dataGridView1[3, cur]->Value = Convert::ToString(pers1comboBox->Text);
            dataGridView1[4, cur]->Value = Convert::ToString(pers2comboBox->Text);
            
            memset(&pers[cur], 0, sizeof(pers[cur]));

            for (int i = 0; i < this->PersTextBox1->Text->Length; i++)
            {
                pers[n].d_fio[i] = this->PersTextBox1->Text[i];
                numd_fio++;
            }

            try
            {
                pers[n].d_age = Convert::ToInt32(this->PersTextBox2->Text);
            }
            catch (...)
            {
                MessageBox::Show("������! � ���� '�������' ������ ���� ������� ������ �������� ��������.");
                return;
            }

            for (int i = 0; i < this->PersTextBox3->Text->Length; i++)
            {
                pers[n].d_tel[i] = this->PersTextBox3->Text[i];
                numd_tel++;
            }

            for (int i = 0; i < this->pers1comboBox->Text->Length; i++)
            {
                pers[n].d_dolzn[i] = this->pers1comboBox->Text[i];
                numd_dolzn++;
            }

            zapcomboBox2->Items->Clear();
            for (int i = 0; i < n; i++)
            {
                String^ temp;
                for (int j = 0; j < wcslen(pers[i].d_fio); j++)
                {
                    temp += pers[i].d_fio[j];
                }
                zapcomboBox2->Items->Add(temp);

            }
        }
    }
}


System::Void Project2::MyForm::persbutton1_Click(System::Object^ sender, System::EventArgs^ e) {
    rez = 1;
}

System::Void Project2::MyForm::persbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
    rez = 2;
}