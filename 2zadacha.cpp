#include <iostream>
#include <cmath>
#include <windows.h> 
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    const int n = 7;
    double chysla[n];
    bool ValidElements = false; // перевірка чисел що задовільняють умову
    // обчислення масиву chysla
    for (int k = 1; k <= n; k++) {
        chysla[k - 1] = 13.4 * cos(abs(k)) * sin(k * k - 2.25) * k;
        // перевіряємо чи є хоча б один елемент
        if (!isnan(chysla[k - 1])) {
            ValidElements = true;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << "chysla[" << i + 1 << "] = " << chysla[i] << endl;
    }
    // додаткова умова
    double element = 1;
    bool validelement = false;
    if (chysla[1] > 3 && chysla[3] > 3) {
        element = chysla[1] * chysla[3];
        validelement = true;
    }
    if (validelement) {
        cout << "Добуток другого та четвертого елементів > 3: " << element << endl;
    } else {
        cout << "Немає потрібних елементів для обчислення добутку.\n";
    }
    return 0;
}

