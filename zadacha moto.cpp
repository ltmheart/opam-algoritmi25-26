#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int avto[5]= {5555, 6200, 6500, 6300, 5050};
	int moto[3]= {4200, 2400, 3500};
	int suma_avto=0, suma_moto=0;
	for(int i=0; i<5; i++){
		suma_avto+= avto[i];
	}
	for(int i=0; i<3; i++){
		suma_moto+= moto[i];
	}
	if(suma_avto/5 -3*suma_moto/3 > 0){
		cout << "середня варт. автомобіля перевищ. мото у 3 рази" << endl;
	}
	else {
		cout << "середня варт. автомобіля не перевищ. мото у 3 рази" << endl;
	}
return 0;
	}

