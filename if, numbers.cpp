#include <iostream>
#include <windows.h>
using namespace std;
int main (){
		SetConsoleCP(1251);
		SetConsoleOutputCP (1251);
	 int numb;
    cout << "Введіть число в діапазоні від 0 до 5";
    cin >> numb;
    if(numb == 0){
    	cout << "нуль\n" << "zero\n" << endl;
	}
	 if(numb == 1){
    	cout << "один\n" << "one\n" << endl;
	}
	 if(numb == 2){
    	cout << "два\n" << "two\n" << endl;
	}
	 if(numb == 3){
    	cout << "три\n" << "three\n" << endl;
	}
	 if(numb == 4){
    	cout << "чотири\n" << "four\n" << endl;
	}
	 if(numb == 5){
    	cout << "п'ять\n" << "five\n" << endl;
	}
	else{
		cout << "Невірний формат числа. Введіть число від 0 до 5" << endl;
	}
	return 0;
}
