// practical
#include <iostream>
#include <windows.h>
using namespace std;
int main (){
		SetConsoleCP(1251);
		SetConsoleOutputCP (1251);
	 int numb;
    cout << "Введіть число в діапазоні від 0 до 5";
    cin >> numb;

    switch (numb) {
    	 case 0:
            cout << "нуль\n" << "zero\n" << endl;
            break;
        case 1:
            cout << "один\n" << "one\n" << endl;
            break;
        case 2: 
            cout << "два\n" << "two\n" << endl;
            break;
        case 3:
            cout << "три\n" << "three\n" << endl;
            break;
        case 4:
            cout << "чотири\n" << "four\n" << endl;
            break;
            case 5:
            cout << "п'ять'\n" << "five\n" << endl;
            break;
        default:
            cout << "Невірний формат числа. Введіть число від 0 до 5" << endl;
	break;
}
	return 0;
}
