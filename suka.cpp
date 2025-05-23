#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
// Функція для обчислення відстані між двома точками
inline double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP (1251);
    // Динамічне виділення пам'яті для координат вершин трикутника
    double *Ax = new double(0), *Ay = new double(0);
    double *Bx = new double(23), *By = new double(22);
    double *Cx = new double(-23), *Cy = new double(24);
    // Розрахунок довжин сторін
    double *a = new double(distance(*Bx, *By, *Cx, *Cy));
    double *b = new double(distance(*Ax, *Ay, *Cx, *Cy));
    double *c = new double(distance(*Ax, *Ay, *Bx, *By));
    // Напівпериметр
    double *s = new double((*a + *b + *c) / 2);
    // Площа трикутника
    double *area = new double(sqrt(*s * (*s - *a) * (*s - *b) * (*s - *c)));
    // Висота на сторону a
    double *h_a = new double((2 * *area) / *a);
    // Радіус описаного кола
    double *R = new double((*a * *b * *c) / (4 * *area));
    // Виведення результатів
    cout << "Довжина сторони a: " << *a << endl;
    cout << "Площа трикутника: " << *area << endl;
    cout << "Висота на сторону a: " << *h_a << endl;
    cout << "Радіус описаного кола: " << *R << endl;
    // Звільнення пам'яті
    delete Ax; delete Ay;
    delete Bx; delete By;
    delete Cx; delete Cy;
    delete a; delete b; delete c;
    delete s; delete area; delete h_a; delete R;

    return 0;
}

