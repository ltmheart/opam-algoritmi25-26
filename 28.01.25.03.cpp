#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP (1251);
	
    double *d = new double; // виділ. пам'ять
    cout << "Введіть діагональ d";
    cin >> *d; // знач.

    double *a = new double(*d / sqrt(2)); // сторона
    double *S = new double((*d) * (*d) / 2); // площа квдр.

    cout << "Сторона квадрата: " << *a << endl;
    cout << "Площа квадрата: " << *S << endl;

    // очист.
    delete d;
    delete a;
    delete S;

    return 0;
}

