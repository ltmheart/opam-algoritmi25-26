#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;
int main (){
		SetConsoleCP(1251);
		SetConsoleOutputCP (1251);
	int row;
	double step, firstvalue; // крок & початкове знач.
	cout << "Введіть початкове значення(нейли)" << endl; // ввід початк.
	cin >> firstvalue;
	
	cout << "Введіть крок зміни значення" << endl; 
	cin >> step;
	
	cout << "Введіть клкст. рядків таблиці" << endl;
	cin >> row;
	
	if(row < 10 || row > 15) { // краш
		cout << "Клкст. рядків не є коректною, оскільких має бути в межах від 10 до 15" << endl; 
		return 0;
	}
    cout << setw(10) << "Нейли" << setw(15) << "Сантиметри" << setw(15) << "Дюйми" << endl;// вивід заголовків значень
	
	for(int n = 0; n < row; n++){
		double nail = firstvalue + n*step; // перше знач. + номер рядка на крок
		double cm = nail * 5.7;
		double duimi = nail * 2.25;
		
		cout << setw(10) << nail << setw(15) << cm << setw(15) << duimi << endl; // вивід 
	}
	return 0;
	}
