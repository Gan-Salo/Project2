#include "MyForm.h"

#include <Windows.h>
#include <fstream>
#include <string>

using namespace Project2; // Название проекта

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

        wcscpy(zap[0].d_fio, L"А.А.Васильев");
        wcscpy(zap[0].p_fio, L"C.А.Леонов");
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

}
//System::Void Project2::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e) {
//    ;
//
//}