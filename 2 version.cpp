#include <iostream>
#include <iomanip>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int ryad, stovp;
    cin >> ryad >> stovp;
    int **a = new int*[ryad];
    for (int i = 0; i < ryad; i++) {
        a[i] = new int[stovp];
    }
    for (int i = 0; i < ryad; i++) {
        for (int j = 0; j < stovp; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < ryad; i++) {
        for (int j = 0; j < stovp; j++) {
            cout << setw(4) << a[i][j] << " ";
        }
        cout << endl;
    }
    int n = -1;
    for (int j = 0; j < stovp; j++) {
        bool allNegative = true;
        for (int i = 0; i < ryad; i++) {
            if (a[i][j] >= 0) {
                allNegative = false;
                break;
            }
        }
        if (allNegative) {
            n = j;
            break;
        }
    }
    if (n == -1) {
        cout << "Нема стовпця" << endl;
    } else {
        cout << "n: " << n << endl;
    }
    for (int i = 0; i < ryad; i++) {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}

