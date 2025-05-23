#include <iostream>
#include <cmath>
#include <windows.h> 
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP (1251);
    double n;
    cout << "¬вед≥ть значенн€ n: ";
    cin >> n;
    int x;
    cout << "¬вед≥ть значенн€ х";
    cin >> x;
  
   float result = 2;

     for (double i = 1; i <= n; i++) {
        double power = 2 * i;
        double term = pow(x, power) ;
		result *= (1 + term);          
    }

    cout << "–езультат: " << result << endl;

    return 0;
}
