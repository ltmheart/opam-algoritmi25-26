#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    
    int N;
    cout << "Введіть число: " << endl;
    cin >> N;
    const int k_p = 6, k_cd = 5;
    int rt[k_p][k_cd];
    
    // заповнення масиву rt
    srand(time(0));
    for (int k = 0; k < k_p; k++) {
        for (int n = 0; n < k_cd; n++) {
            rt[k][n] = rand() % (10 * 1 + 50);
        }
    }
    
    // вивід таблиці рейтингу
    cout << "       Таблиця голосів\n";
    cout << "-------------------------------\n";
    cout << "|        № кандидатів         |\n";
    cout << "-------------------------------\n";
    cout << "|№п | 1  | 2  | 3  | 4  | 5  |\n";
    cout << "-------------------------------\n";
    for (int k = 0; k < k_p; k++) {
        cout << "| " << k + 1 << "  |";
        for (int n = 0; n < k_cd; n++) {
            cout << setw(4) << rt[k][n] << "|";
        }
        cout << endl;
    }
    cout << "-------------------------------\n";
    
    // підсумкові результати по кожному кандидату
    int REZ[k_cd];
    for (int n = 0; n < k_cd; n++) { // цикл по стовпцях
        int s = 0;
        for (int k = 0; k < k_p; k++) {
            s += rt[k][n];
        }
        REZ[n] = s;
    }

    // виведення підсумкових результатів
    cout << "| " << setw(3) << "S  |";
    for (int n = 0; n < k_cd; n++) {
        cout << setw(4) << REZ[n] << "|";
    }
    cout << endl;
    
    // пошук кандидатів із результатом більшим за N(поставити break - буде тікі перший знай.)
    bool found = false;
    for (int n = 0; n < k_cd; n++) {
        if (REZ[n] > N) {
            cout << "\nКандидат " << n + 1 << " має результат більший за " << N << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "\nНемає кандидатів із рейтингом більшим за " << N << endl;
    }

    return 0;
}

