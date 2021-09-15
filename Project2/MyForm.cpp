#include "MyForm.h"

#include <Windows.h>
#include <fstream>
#include <string>

using namespace Project2; // Название проекта

int rez = 0, n = 1, n_d = 1, n_u = 1, n_c = 1, n_z = 1;

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
    wchar_t u_title[40];
    int cost;
} zap[100];

struct Uslyg {

	wchar_t u_title[50];
	int cost;

} usl[100];

struct Dolzn {

	wchar_t dl_title[50];
	wchar_t dl_type[50];

} dl[100];

System::Void Project2::MyForm::constr() {
       
        wcscpy(pers[0].d_fio, L"А.А.Васильев");
        pers[0].d_age = 25;
        wcscpy(pers[0].d_tel, L"+79836043212");
        wcscpy(pers[0].d_dolzn, L"Стоматолог-Хирург");
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

        wcscpy(zap[0].u_title, L"Чистка зубов");
        wcscpy(zap[0].d_fio, L"А.А.Васильев");
        wcscpy(zap[0].p_fio, L"C.А.Леонов");
        zap[0].p_age = 21;
        zap[0].cabnum = 232;
        zap[0].cost = 700;

        dataGridView2->Rows->Add();
        for (int i = 0; i < wcslen(zap[0].u_title); i++)
        {
            dataGridView2[0, 0]->Value += Convert::ToString(zap[0].u_title[i]);
        }        
        for (int i = 0; i < wcslen(zap[0].p_fio); i++)
        {
            dataGridView2[1, 0]->Value += Convert::ToString(zap[0].p_fio[i]);
        }
        dataGridView2[2, 0]->Value = Convert::ToString(zap[0].p_age);       
        for (int i = 0; i < wcslen(zap[0].d_fio); i++)
        {
            dataGridView2[3, 0]->Value += Convert::ToString(zap[0].d_fio[i]);
        } 
        dataGridView2[4, 0]->Value = Convert::ToString(zap[0].cabnum);
        dataGridView2[5, 0]->Value = Convert::ToString(zap[0].cost);

        wcscpy(usl[0].u_title, L"Чистка зубов");
        usl[0].cost = 700;
        dataGridView4->Rows->Add();
        for (int i = 0; i < wcslen(usl[0].u_title); i++)
        {          
            dataGridView4[0, 0]->Value += Convert::ToString(usl[0].u_title[i]);
        }       
        dataGridView4[1, 0]->Value = Convert::ToString(usl[0].cost);

        wcscpy(dl[0].dl_title, L"Стоматолог-хирург");
        wcscpy(dl[0].dl_type, L"Мед. персонал");
        
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

System::Void Project2::MyForm::dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    int cur = dataGridView1->CurrentRow->Index;
    perstrnum->Text = Convert::ToString(cur + 1);
}
System::Void Project2::MyForm::dataGridView2_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    int cur = dataGridView2->CurrentRow->Index;
    zapstrnum->Text = Convert::ToString(cur + 1);
}
System::Void Project2::MyForm::dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    int cur = dataGridView3->CurrentRow->Index;
    cabstrnum->Text = Convert::ToString(cur + 1);
}
System::Void Project2::MyForm::dataGridView4_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    int cur = dataGridView4->CurrentRow->Index;
    uslstrnum->Text = Convert::ToString(cur + 1);
}
System::Void Project2::MyForm::dataGridView5_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    int cur = dataGridView5->CurrentRow->Index;
    dlstrnum->Text = Convert::ToString(cur + 1);
}

System::Void Project2::MyForm::TabControl_Selecting(System::Object^ sender, System::Windows::Forms::TabControlCancelEventArgs^ e) {
    
    rez = 0;
    
    label27->Text = "Режим не активен";
    label28->Text = "Режим не активен";
    label29->Text = "Режим не активен";
    label30->Text = "Режим не активен";
    label31->Text = "Режим не активен";

    zaptextbox2->Text = "";
    label25->Text = "";
}
System::Void Project2::MyForm::zapcomboBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{   
    int s;
    zaptextbox2->Text = "";
    s = zapcomboBox2->SelectedIndex;
    zaptextbox2->Text += pers[s].cabnum;

}
System::Void Project2::MyForm::zapcomboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
{
    int g;    
    label25->Text = "";
    g = zapcomboBox1->SelectedIndex;
    label25->Text += usl[g].cost;
}

System::Void Project2::MyForm::perspodbut_Click(System::Object^ sender, System::EventArgs^ e) {

    if (rez == 1)
    {

        int numd_fio = 0, numd_tel = 0, numd_dolzn = 0;
        if (PersTextBox1->Text == "" || PersTextBox2->Text == "" || PersTextBox3->Text == "" || pers1comboBox->Text == "" || pers2comboBox->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
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
                MessageBox::Show("Ошибка! В поле 'Возраст' должны быть введены только числовые значения.");
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

            //Запись в таблицу
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
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
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
                pers[cur].d_fio[i] = this->PersTextBox1->Text[i];
                numd_fio++;
            }

            try
            {
                pers[cur].d_age = Convert::ToInt32(this->PersTextBox2->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Возраст' должны быть введены только числовые значения.");
                return;
            }

            for (int i = 0; i < this->PersTextBox3->Text->Length; i++)
            {
                pers[cur].d_tel[i] = this->PersTextBox3->Text[i];
                numd_tel++;
            }

            for (int i = 0; i < this->pers1comboBox->Text->Length; i++)
            {
                pers[cur].d_dolzn[i] = this->pers1comboBox->Text[i];
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
    label27->Text = "Режим добавления";
    rez = 1;
}
System::Void Project2::MyForm::persbutton2_Click(System::Object^ sender, System::EventArgs^ e) {
    label27->Text = "Режим изменения"; 
    rez = 2;
}
System::Void Project2::MyForm::persbutton3_Click(System::Object^ sender, System::EventArgs^ e) {
       
    int delposition = -1;
    int count = dataGridView1->RowCount;

    if (count != 0) 
    {
        int cur = dataGridView1->CurrentRow->Index;
        perstrnum->Text = Convert::ToString(count + 1);

        delposition = cur;

        dataGridView1->Rows->RemoveAt(cur);
        dataGridView1->Refresh();

        if (cur + 1 == count)
        {
            count--;
        }
        else
        {
            for (int i = cur; i < count - 1; i++)
            {
                pers[i] = pers[i + 1];
            }
            count--;
            n--;
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

        perstrnum->Text = Convert::ToString(count);
    }
    else
    {
        MessageBox::Show("Ошибка! В таблице нет записей!");
        return;
    }
}

System::Void Project2::MyForm::dlbut1_Click(System::Object^ sender, System::EventArgs^ e) { label31->Text = "Режим добавления"; rez = 1; };
System::Void Project2::MyForm::dlbut2_Click(System::Object^ sender, System::EventArgs^ e) { label31->Text = "Режим изменения"; rez = 2; };
System::Void Project2::MyForm::dlbut3_Click(System::Object^ sender, System::EventArgs^ e) {
    
    int delposition = -1;
    int count = dataGridView5->RowCount;
    if (count != 0)
    {

        int cur = dataGridView5->CurrentRow->Index;
        dlstrnum->Text = Convert::ToString(count + 1);

        delposition = cur;

        dataGridView5->Rows->RemoveAt(cur);
        dataGridView5->Refresh();

        if (cur + 1 == count)
        {
            count--;
        }
        else
        {
            for (int i = cur; i < count - 1; i++)
            {
                dl[i] = dl[i + 1];
            }
            count--;
            n_d--;
        }

        pers1comboBox->Items->Clear();
        for (int i = 0; i < n_d; i++)
        {
            String^ temp;
            for (int j = 0; j < wcslen(dl[i].dl_title); j++)
            {
                temp += dl[i].dl_title[j];
            }
            pers1comboBox->Items->Add(temp);

        }
        dlstrnum->Text = Convert::ToString(count);
    }
    else
    {
        MessageBox::Show("Ошибка! В таблице нет записей!");
        return;
    }
    
};
System::Void Project2::MyForm::dlpodtbut_Click(System::Object^ sender, System::EventArgs^ e) {
    if (rez == 1)
    {

        int numdolzn = 0, numtype = 0;
        if (dltextbox1->Text == "" || dlcomboBox1->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {
          
            for (int i = 0; i < this->dltextbox1->Text->Length; i++)
            {
                dl[n_d].dl_title[i] = this->dltextbox1->Text[i];
                numdolzn++;
            }

            for (int i = 0; i < this->dlcomboBox1->Text->Length; i++)
            {
                dl[n_d].dl_type[i] = this->dlcomboBox1->Text[i];
                numtype++;
            }
           
            //Запись в таблицу
            dataGridView5->Rows->Add();

            for (int m = 0; m < numdolzn; m++)
            {
                dataGridView5[0, n_d]->Value += Convert::ToString(dl[n_d].dl_title[m]);
                
            }
           
            for (int m = 0; m < numtype; m++)
            {
                dataGridView5[1, n_d]->Value += Convert::ToString(dl[n_d].dl_type[m]);
                
            }

            n_d++;

            pers1comboBox->Items->Clear();
            for (int i = 0; i < n_d; i++)
            {
                String^ temp;
                for (int j = 0; j < wcslen(dl[i].dl_title); j++)
                {
                    temp += dl[i].dl_title[j];
                }
                pers1comboBox->Items->Add(temp);
            }
        }
    }
    else if (rez == 2)
    {
        int cur = dataGridView5->CurrentRow->Index;

        int numdolzn = 0, numtype = 0;

        if (dltextbox1->Text == "" || dlcomboBox1->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {

            dataGridView5[0, cur]->Value = Convert::ToString(dltextbox1->Text);
            dataGridView5[1, cur]->Value = Convert::ToString(dlcomboBox1->Text);            

            memset(&dl[cur], 0, sizeof(dl[cur]));           

            for (int i = 0; i < this->dltextbox1->Text->Length; i++)
            {
                dl[cur].dl_title[i] = this->dltextbox1->Text[i];
                numdolzn++;
            }

            for (int i = 0; i < this->dlcomboBox1->Text->Length; i++)
            {
                dl[cur].dl_type[i] = this->dlcomboBox1->Text[i];
                numtype++;
            }

            pers1comboBox->Items->Clear();
            for (int i = 0; i < n_d; i++)
            {
                String^ temp;
                for (int j = 0; j < wcslen(dl[i].dl_title); j++)
                {
                    temp += dl[i].dl_title[j];
                }
                pers1comboBox->Items->Add(temp);

            }
        }
    }
};
System::Void Project2::MyForm::dlcancbut_Click(System::Object^ sender, System::EventArgs^ e) {};

System::Void Project2::MyForm::uslbut1_Click(System::Object^ sender, System::EventArgs^ e) { label30->Text = "Режим добавления"; rez = 1; };
System::Void Project2::MyForm::uslbut2_Click(System::Object^ sender, System::EventArgs^ e) { label30->Text = "Режим изменения"; rez = 2; };
System::Void Project2::MyForm::uslbut3_Click(System::Object^ sender, System::EventArgs^ e) {
    
    int delposition = -1;
    int count = dataGridView4->RowCount;
    if (count != 0)
    {
        int cur = dataGridView4->CurrentRow->Index;
        uslstrnum->Text = Convert::ToString(count + 1);

        delposition = cur;

        dataGridView4->Rows->RemoveAt(cur);
        dataGridView4->Refresh();

        if (cur + 1 == count)
        {
            count--;
        }
        else
        {
            for (int i = cur; i < count - 1; i++)
            {
                usl[i] = usl[i + 1];
            }
            count--;
            n_u--;
        }

        zapcomboBox1->Items->Clear();
        for (int i = 0; i < n_u; i++)
        {
            String^ temp;
            for (int j = 0; j < wcslen(usl[i].u_title); j++)
            {
                temp += usl[i].u_title[j];
            }
            zapcomboBox1->Items->Add(temp);

        }

        uslstrnum->Text = Convert::ToString(count);
    }
    else
    {
        MessageBox::Show("Ошибка! В таблице нет записей!");
        return;
    }
};
System::Void Project2::MyForm::uslpodtbut_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (rez == 1)
    {

        int numusl = 0;
        if (usltextbox1->Text == "" || usltextbox2->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {

            for (int i = 0; i < this->usltextbox1->Text->Length; i++)
            {
                usl[n_u].u_title[i] = this->usltextbox1->Text[i];
                numusl++;
            }

            try
            {
                usl[n_u].cost = Convert::ToInt32(this->usltextbox2->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Стоимость услуги' должны быть введены только числовые значения.");
                return;
            }

            //Запись в таблицу
            dataGridView4->Rows->Add();

            for (int m = 0; m < numusl; m++)
            {
                dataGridView4[0, n_u]->Value += Convert::ToString(usl[n_u].u_title[m]);

            }

            dataGridView4[1, n_u]->Value = Convert::ToString(usl[n_u].cost);

            n_u++;

            zapcomboBox1->Items->Clear();
            for (int i = 0; i < n_u; i++)
            {
                String^ temp;
                for (int j = 0; j < wcslen(usl[i].u_title); j++)
                {
                    temp += usl[i].u_title[j];
                }
                zapcomboBox1->Items->Add(temp);
            }
        }
    }
    else if (rez == 2)
    {
        int cur = dataGridView4->CurrentRow->Index;

        int numusl = 0;

        if (usltextbox1->Text == "" || usltextbox2->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {

            dataGridView4[0, cur]->Value = Convert::ToString(usltextbox1->Text);
            dataGridView4[1, cur]->Value = Convert::ToString(usltextbox2->Text);

            memset(&usl[cur], 0, sizeof(usl[cur]));

            for (int i = 0; i < this->usltextbox1->Text->Length; i++)
            {
                usl[cur].u_title[i] = this->usltextbox1->Text[i];
                numusl++;
            }

            try
            {
                usl[cur].cost = Convert::ToInt32(this->usltextbox2->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Стоимость услуги' должны быть введены только числовые значения.");
                return;
            }
           
            zapcomboBox1->Items->Clear();
            for (int i = 0; i < n_u; i++)
            {
                String^ temp;
                for (int j = 0; j < wcslen(usl[i].u_title); j++)
                {
                    temp += usl[i].u_title[j];
                }
                zapcomboBox1->Items->Add(temp);
            }
        }
    }
};
System::Void Project2::MyForm::uslcancbut_Click(System::Object^ sender, System::EventArgs^ e) {};

System::Void Project2::MyForm::cabbut1_Click(System::Object^ sender, System::EventArgs^ e) { label29->Text = "Режим добавления"; rez = 1; };
System::Void Project2::MyForm::cabbut2_Click(System::Object^ sender, System::EventArgs^ e) { label29->Text = "Режим изменения"; rez = 2; };
System::Void Project2::MyForm::cabbut3_Click(System::Object^ sender, System::EventArgs^ e) {
    
    int delposition = -1;
    int count = dataGridView3->RowCount;
    if (count != 0)
    {

        int cur = dataGridView3->CurrentRow->Index;
        cabstrnum->Text = Convert::ToString(count + 1);

        delposition = cur;

        dataGridView3->Rows->RemoveAt(cur);
        dataGridView3->Refresh();

        if (cur + 1 == count)
        {
            count--;
        }
        else
        {
            for (int i = cur; i < count - 1; i++)
            {
                cab[i] = cab[i + 1];
            }
            count--;
            n_c--;
        }

        pers2comboBox->Items->Clear();
        for (int i = 0; i < n_c; i++)
        {
            String^ temp;
            for (int j = 0; j < cab[i].cabnum; j++)
            {
                temp = Convert::ToString(cab[i].cabnum);
            }
            pers2comboBox->Items->Add(temp);
        }

        cabstrnum->Text = Convert::ToString(count);
    }
    else
    {
        MessageBox::Show("Ошибка! В таблице нет записей!");
        return;
    }
};
System::Void Project2::MyForm::cabpodbut_Click(System::Object^ sender, System::EventArgs^ e) {
    
    if (rez == 1)
    {

       
        if (cabtextBox1->Text == "" || cabtextBox2->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {

            try
            {
                cab[n_c].cabnum = Convert::ToInt32(this->cabtextBox1->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Номер кабинета' должны быть введены только числовые значения.");
                return;
            }

            try
            {
                cab[n_c].cabarea = Convert::ToInt32(this->cabtextBox2->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Площадь кабинета' должны быть введены только числовые значения.");
                return;
            }

            //Запись в таблицу
            dataGridView3->Rows->Add();
          
            dataGridView3[0, n_c]->Value = Convert::ToString(cab[n_c].cabnum);
            dataGridView3[1, n_c]->Value = Convert::ToString(cab[n_c].cabarea);

            n_c++;

            pers2comboBox->Items->Clear();
            for (int i = 0; i < n_c; i++)
            {
                String^ temp;
                for (int j = 0; j < cab[i].cabnum; j++)
                {
                    temp = Convert::ToString(cab[i].cabnum);
                }
                pers2comboBox->Items->Add(temp);
            }
        }
    }
    else if (rez == 2)
    {
        int cur = dataGridView3->CurrentRow->Index;

        if (cabtextBox1->Text == "" || cabtextBox2->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {

            dataGridView3[0, cur]->Value = Convert::ToString(cabtextBox1->Text);
            dataGridView3[1, cur]->Value = Convert::ToString(cabtextBox2->Text);

            memset(&cab[cur], 0, sizeof(cab[cur]));         

            try
            {
                cab[cur].cabnum = Convert::ToInt32(this->cabtextBox1->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Номер кабинета' должны быть введены только числовые значения.");
                return;
            }

            try
            {
                cab[cur].cabarea = Convert::ToInt32(this->cabtextBox2->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Площадь кабинета' должны быть введены только числовые значения.");
                return;
            }

            pers2comboBox->Items->Clear();
            for (int i = 0; i < n_c; i++)
            {
                String^ temp;
                for (int j = 0; j < cab[i].cabnum; j++)
                {
                    temp = Convert::ToString(cab[i].cabnum);
                }
                pers2comboBox->Items->Add(temp);
            }
        }
    }
};
System::Void Project2::MyForm::cabcancbut_Click(System::Object^ sender, System::EventArgs^ e) {};

System::Void Project2::MyForm::zapbut1_Click(System::Object^ sender, System::EventArgs^ e) { label28->Text = "Режим добавления"; rez = 1; };
System::Void Project2::MyForm::zapbut2_Click(System::Object^ sender, System::EventArgs^ e) { label28->Text = "Режим изменения"; rez = 2; };
System::Void Project2::MyForm::zapbut3_Click(System::Object^ sender, System::EventArgs^ e) {
    
    int delposition = -1;
    int count = dataGridView3->RowCount;
    if (count != 0)
    {
        int cur = dataGridView3->CurrentRow->Index;
        zapstrnum->Text = Convert::ToString(count + 1);

        delposition = cur;

        dataGridView2->Rows->RemoveAt(cur);
        dataGridView2->Refresh();

        if (cur + 1 == count)
        {
            count--;
        }
        else
        {
            for (int i = cur; i < count - 1; i++)
            {
                cab[i] = cab[i + 1];
            }
            count--;
            n_z--;
        }

        zapstrnum->Text = Convert::ToString(count);
    }
    else
    {
        MessageBox::Show("Ошибка! В таблице нет записей!");
        return;
    }
};
System::Void Project2::MyForm::zapcancbut1_Click(System::Object^ sender, System::EventArgs^ e) {};
System::Void Project2::MyForm::zappodbut1_Click(System::Object^ sender, System::EventArgs^ e) {
    if (rez == 1)
    {

        int numd_fio = 0, nump_fio = 0, numu_title = 0;
        if (zapcomboBox1->Text == "" || zapcomboBox2->Text == "" || zaptextbox1->Text == "" || zaptextbox2->Text == "" || zaptextbox3->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {

            for (int i = 0; i < this->zapcomboBox1->Text->Length; i++)
            {
                zap[n_z].u_title[i] = this->zapcomboBox1->Text[i];
                numu_title++;
            }

            for (int i = 0; i < this->zaptextbox1->Text->Length; i++)
            {
                zap[n_z].p_fio[i] = this->zaptextbox1->Text[i];
                nump_fio++;
            }

            try
            {
                zap[n_z].p_age = Convert::ToInt32(this->zaptextbox3->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Возраст пациента' должны быть введены только числовые значения.");
                return;
            }

            for (int i = 0; i < this->zapcomboBox2->Text->Length; i++)
            {
                zap[n_z].d_fio[i] = this->zapcomboBox2->Text[i];
                numd_fio++;
            }

            zap[n_z].cabnum = Convert::ToInt32(this->zaptextbox2->Text);
            zap[n_z].cost = Convert::ToInt32(this->label25->Text);

            //Запись в таблицу
            dataGridView2->Rows->Add();

            for (int m = 0; m < numu_title; m++)
            {
                dataGridView2[0, n_z]->Value += Convert::ToString(zap[n_z].u_title[m]);
            }

            for (int m = 0; m < nump_fio; m++)
            {
                dataGridView2[1, n_z]->Value += Convert::ToString(zap[n_z].p_fio[m]);
            }

            dataGridView2[2, n_z]->Value = Convert::ToString(zap[n_z].p_age);

            for (int m = 0; m < numd_fio; m++)
            {
                dataGridView2[3, n_z]->Value += Convert::ToString(zap[n_z].d_fio[m]);
            }

            dataGridView2[4, n_z]->Value = Convert::ToString(zap[n_z].cabnum);
            dataGridView2[5, n_z]->Value = Convert::ToString(zap[n_z].cost);

            n_z++;

        }
    }
    else if (rez == 2)
    {
        int cur = dataGridView2->CurrentRow->Index;

        int numd_fio = 0, nump_fio = 0, numu_title = 0;

        if (zapcomboBox1->Text == "" || zapcomboBox2->Text == "" || zaptextbox1->Text == "" || zaptextbox2->Text == "" || zaptextbox3->Text == "")
        {
            MessageBox::Show("Ошибка! Все поля должны быть заполнены!");
        }
        else
        {

            dataGridView2[0, cur]->Value = Convert::ToString(zapcomboBox1->Text);
            dataGridView2[1, cur]->Value = Convert::ToString(zaptextbox1->Text);
            dataGridView2[2, cur]->Value = Convert::ToString(zaptextbox3->Text);
            dataGridView2[3, cur]->Value = Convert::ToString(zapcomboBox1->Text);
            dataGridView2[4, cur]->Value = Convert::ToString(zaptextbox2->Text);
            dataGridView2[5, cur]->Value = Convert::ToString(label25->Text);

            memset(&zap[cur], 0, sizeof(zap[cur]));

            for (int i = 0; i < this->zapcomboBox1->Text->Length; i++)
            {
                zap[cur].u_title[i] = this->zapcomboBox1->Text[i];
                numu_title++;
            }

            for (int i = 0; i < this->zaptextbox1->Text->Length; i++)
            {
                zap[cur].p_fio[i] = this->zaptextbox1->Text[i];
                nump_fio++;
            }

            try
            {
                zap[cur].p_age = Convert::ToInt32(this->zaptextbox3->Text);
            }
            catch (...)
            {
                MessageBox::Show("Ошибка! В поле 'Возраст пациента' должны быть введены только числовые значения.");
                return;
            }

            for (int i = 0; i < this->zapcomboBox2->Text->Length; i++)
            {
                zap[cur].d_fio[i] = this->zapcomboBox2->Text[i];
                numd_fio++;
            }

            zap[cur].cabnum = Convert::ToInt32(this->zaptextbox2->Text);
            zap[cur].cost = Convert::ToInt32(this->label25->Text);
         
        }
    }
};

