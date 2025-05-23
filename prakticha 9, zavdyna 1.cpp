#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int rik = 11;
    int profitLost[rik];
    int pochatrik = 1993;
    // Обчислення прибутку/збитку за формулою
    for (int k = 0; k < rik; ++k) {
        int rik = pochatrik + k;
        profitLost[k] = 100 * fabs(cos(k) / 2.7) + 9.1 * sin(1.2 * k + 1);
    }
    // Вивід таблиці
    cout << "Рік  | Прибуток" << endl;
    cout << "----------------" << endl;
    for (int k = 0; k < rik; ++k) {
        if (profitLost[k] > 0) {
            cout << (pochatrik + k) << " | " << profitLost[k] << endl;
        }
    }
    cout << "\nРік  | Збитки" << endl;
    cout << "----------------" << endl;
    for (int k = 0; k < rik; ++k) {
        if (profitLost[k] < 0) {
            cout << (pochatrik + k) << " | " << profitLost[k] << endl;
        }
    }
    // Обчислення сум прибутків і збитків
    int sumProfits = 0, sumLosses = 0, maxLoss = 0;
    for (int k = 0; k < rik; ++k) {
        if (profitLost[k] > 0) {
            sumProfits += profitLost[k];
        } else {
            sumLosses += profitLost[k];
            if (profitLost[k] < maxLoss) {
                maxLoss = profitLost[k];
            }
        }
    }
    // Обчислення різниці між прибутками та збитками
    int profitriz = sumProfits - sumLosses; // оскільки збитки від'ємні
    // Вивід додаткової інформації
    cout << "\nСума прибутків: " << sumProfits << endl;
    cout << "Сума збитків: " << sumLosses << endl;
    cout << "Різниця між прибутками і збитками: " << profitriz << endl;
    cout << "Максимальний збиток: " << maxLoss << endl;
    return 0;
}
