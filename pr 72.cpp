#include <iostream>
#include <cmath>
#include <windows.h> 
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP (1251);
    double n;
    cout << "Введіть значення n: ";
    cin >> n;

   float result = 2;
    double i = 1;
     while ( i <= n) {
        double power = 2 * i;
        double term = pow(1 / 2., power) ;
		result *= (1 + term); 
		i++;         
    }

    cout << "Результат: " << result << endl;

    return 0;
}
