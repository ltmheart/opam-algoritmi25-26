// вивід символів кирилиці(і, ї, є)
#include <iostream>
#include <locale.h>
#include <windows.h>
using namespace std;
int main(){
	cout << "My z Ukrainy! \n";
	cout << "Ми з України! Привіт, світ! Я є тут! \n";
	setlocale(LC_CTYPE, "ukr");
	cout << "Ми з України! Привіт, світ! Я є тут! \n";
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	cout << "Ми з України! Привіт, світ! Я є тут! \n";
	return 0;
	
}
