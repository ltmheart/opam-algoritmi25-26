#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;
    int arr[n];
    cout << "Введіть елементи масиву: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Виведення у зворотному порядку
    cout << "Масив у зворотному порядку: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Виведення елементів з парними індексами
    cout << "Елементи з парними індексами: ";
    for (int i = 0; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Виведення елементів з непарними індексами
    cout << "Елементи з непарними індексами: ";
    for (int i = 1; i < n; i += 2) {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Виведення парних чисел
    cout << "Парні числа: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    
    // Виведення непарних чисел
    cout << "Непарні числа: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    
    return 0;
}

