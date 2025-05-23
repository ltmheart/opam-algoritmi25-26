#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 7;
    double y[n];

    // заповн мфсіву
    for (int k = 0; k < n; k++) {
        double x = k + 1; // для уникн. ділення на 0
        y[k] = fabs(sin(x) / 3.12 + cos(x * x)) - 8.3 * sin(3 * x);
    }

    // вивід мфсіву
    cout << "Масив y:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "y[" << i + 1 << "] = " << y[i] << endl;
    }

  // пошук перших 3 додат.
    double dobytok = 1;
    int count = 0;
    int elementy[3];

    for (int i = 0; i < n && count < 3; i++) {
        if (y[i] > 0) {
            dobytok *= y[i];
            elementy[count] = i + 1; //збереж. номера елементу
            count++;
        }
    }

    //результат
    if (count == 3) {
        cout << "Добуток перших трьох додатних елементів: " << dobytok << endl;
        cout << "Номери цих елементів: " << elementy[0] << ", " << elementy[1] << ", " << elementy[2] << endl;
    } else {
        cout << "Менше трьох додаьніх елементів у масиві" << endl;
    }

    return 0;
}

