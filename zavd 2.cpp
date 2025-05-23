#include <iostream>
#include <cstdlib>
#include <ctime>  
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int r = 8;
    const int c = 15;
    int arr[r][c];
    int countFive = 0;
    srand(time(0)); //генератор випадкових чисел
    // заповнюємо масив і рахуємо к-сть. 5
    cout << "Масив:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = rand() % 10; //Випадкове число від 0 до 9
            cout << arr[i][j] << " ";
            if (arr[i][j] == 5) {
                countFive++;
            }
        }
        cout << endl;
    }
    cout << "\n кількість цифр 5: " << countFive << endl;
    return 0;
}
