#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    float xa = 1, ya = 1, xb = 2, yb = 2, xc = -1, yc = 2;
    float mb, da, db, dc, s, R, r, Wa;
    float xm, ym, p;
    float *px = &xa, *py = &ya, *pmb = &mb, *pda = &da, *pdb = &db, *pdc = &dc;
    float *ps = &s, *pR = &R, *pr = &r, *pWa = &Wa;
    xm = (xa + xc) / 2;// середина Ac
    ym = (ya + yc) / 2;
    *pmb = sqrt(pow(xm - xb, 2) + pow(ym - yb, 2));
    //довжини сторін
    *pda = sqrt(pow(xb - xc, 2) + pow(yb - yc, 2));
    *pdb = sqrt(pow(xa - xc, 2) + pow(ya - yc, 2));
    *pdc = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
     p = (*pda + *pdb + *pdc) / 2;
    *ps = sqrt(p * (p - *pda) * (p - *pdb) * (p - *pdc));
    *pR = (*pda * *pdb * *pdc) / (4 * *ps);
    *pr = *ps / p;    
    *pWa = (2 * *pdb * *pdc * sqrt((p - *pda) * p)) / (*pdb + *pdc);//бісектриса
    cout << "Медіана mb = " << *pmb << endl
         << "Довжини сторін: da = " << *pda << ", db = " << *pdb << ", dc = " << *pdc << endl
         << "Площа трикутника S = " << *ps << endl
         << "Радіус опис. кола R = " << *pR << endl
         << "Бісектриса Wa = " << *pWa << endl
         << "Радіус вписаного кола9 r = " << *pr << endl;

    return 0;
}
