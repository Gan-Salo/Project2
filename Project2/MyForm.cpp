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


