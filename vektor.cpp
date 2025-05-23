#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // vvedennya koordynat vectoriv
    double x1, y1, x2, y2;
    cout << "vvedit koordynaty vectora a (x1, y1): ";
    cin >> x1 >> y1;
    cout << "vvedit koordynaty vectora b (x2, y2): ";
    cin >> x2 >> y2;

    // obchyslennya skalar dobytky
    double skalar= (x1 * x2) + (y1 * y2);

    // obchyslennya modyliv vectoriv
    double modyla = sqrt(pow(x1 , 2 ) + pow(y1 , 2) );
    double modylb = sqrt(pow(x2 , 2) + pow(y2 , 2) );

    // vsvedennya rezyltativ
    cout << "scalarnij dobytok vektoriv a ta b: " << skalar << endl;
    cout << "modyl vektora a: " << modyla << endl;
    cout << "modyl vektora b: " << modylb << endl;

    return 0;
}


