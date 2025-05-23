#include <iostream>
#include <iomanip>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 4;
    double a[size][size];
    const int i = 19; // варіант 19

    // Обчислення елементів масиву по формулі
    for (int k = 0; k < size; ++k) {
        for (int n = 0; n < size; ++n) {
            double term1 = (k + 1) * 1.0 / (i + 11) * (n + 1);  
            double term2 = sin(k + 1) * (n + 1) * 1.0 / (i + 12); 
            a[k][n] = term1 + term2; // Загальне значення a[k][n]
        }
    }

    // Виведення матриці
    cout << fixed << setprecision(4);
    cout << "\nМатриця a[k][n]:\n";
    for (int k = 0; k < size; ++k) {
        for (int n = 0; n < size; ++n) {
            cout << setw(10) << a[k][n] << " ";
        }
        cout << endl;
    }

    // Обчислення добутку елементів за умовою
    double dobutock = 1;
    bool found = false;

    for (int k = 0; k < size; ++k) {
        for (int n = 0; n < size; ++n) {
            if (a[k][n] < -5 || a[k][n] > 3) {
                dobutock *= a[k][n];
                found = true;
            }
        }
    }
    if (found) {
        cout << "\nДобуток елементів, що задовільняють умову (a[k][n] < -5 або a[k][n] > 3): " << product << endl;
    } else {
        cout << "\nНемає елементів, які задовільняють умову." << endl;
    }

    // Пошук мінімального елемента та його індексів
    double minElement = a[0][0];
    int minK = 0, minN = 0;

    for (int k = 0; k < size; ++k) {
        for (int n = 0; n < size; ++n) {
            if (a[k][n] < minElement) {
                minElement = a[k][n];
                minK = k;
                minN = n;
            }
        }
    }
 // вивід мін. ел. і індексів
    cout << "Мінімальний елемент: " << minElement << " має індекси [" << minK << "][" << minN << "]\n";

    return 0;
}

