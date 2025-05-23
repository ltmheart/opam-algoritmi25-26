#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

const int Y_EMPLOYEES = 15; // працівники ю підрозділу
const int G_EMPLOYEES = 20; // працівники джі підрозділу
const int MAX_DAYS = 31; // максимальна клкст. відпрацьованих днів 
const double TAX_RATE = 0.2; // податок 20%

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0)); //генератор випадкових чисел

    double dailyPay;
    cout << "Введіть денну оплату праці: ";
    cin >> dailyPay;

    int y[Y_EMPLOYEES];
    int g[G_EMPLOYEES];
    
    // Заповнення масивів випадковою кількістю відпрацьованих днів
    for (int i = 0; i < Y_EMPLOYEES; i++) {
        y[i] = rand() % (MAX_DAYS + 1);
    }
    for (int i = 0; i < G_EMPLOYEES; i++) {
        g[i] = rand() % (MAX_DAYS + 1);
    }
    
    // Вивід масиву Y
    cout << "Відпрацьовані дні підрозділу Y:" << endl;
    for (int i = 0; i < Y_EMPLOYEES; i++) {
        cout << "Y[" << i + 1 << "] = " << y[i] << " днів" << endl;
    }
    
    // Вивід масиву G
    cout << "\nВідпрацьовані дні підрозділу G:" << endl;
    for (int i = 0; i < G_EMPLOYEES; i++) {
        cout << "G[" << i + 1 << "] = " << g[i] << " днів" << endl;
    }
    
    // Обчислення загальної зарплати з урахуванням податків
    double totalSalaryY = 0;
    double totalSalaryG = 0;
    for (int i = 0; i < Y_EMPLOYEES; i++) {
        totalSalaryY += y[i] * dailyPay * (1 - TAX_RATE);
    }
    for (int i = 0; i < G_EMPLOYEES; i++) {
        totalSalaryG += g[i] * dailyPay * (1 - TAX_RATE);
    }
    
    // Вивід загальної зарплати
    cout << "\nЗагальна виплата після податків для Y: " << totalSalaryY << " у.о." << endl;
    cout << "Загальна виплата після податків для G: " << totalSalaryG << " у.о." << endl;
    
    // Перевірка, чи є відпрацьовані дні
    if (totalSalaryY == 0 && totalSalaryG == 0) {
        cout << "\nНемає відпрацьованих днів серед співробітників." << endl;
    }
    
   // Підрахунок кількості співробітників, які відпрацювали більше 5 і менше 12 днів
    int countY = 0, countG = 0;
    for (int i = 0; i < Y_EMPLOYEES; i++) {
        if (y[i] > 5 && y[i] < 12) {
            countY++;
        }
    }
    for (int i = 0; i < G_EMPLOYEES; i++) {
        if (g[i] > 5 && g[i] < 12) {
            countG++;
        }
    }
    
    cout << "\nКількість співробітників підрозділу Y, які відпрацювали більше 5 і менше 12 днів: " << countY << endl;
    cout << "Кількість співробітників підрозділу G, які відпрацювали більше 5 і менше 12 днів: " << countG << endl;
    
    return 0;
}

