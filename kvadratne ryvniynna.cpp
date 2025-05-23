#include <iostream>
#include <cmath>


int main() {
    using namespace std;
    double a;
    double b;
    double c;
    cout << "Vvedit koef. a: ";
    cin >> a;
    cout << "Vvedit koef. b: ";
    cin >> b;
    cout << "Vvedit koef. c: ";
    cin >> c;

    if (a == 0) {
        cout << "ne kvadrat rivnanya." << endl;
    }
    else {

        double D = b * b - 4 * a * c;

        if (D > 0) {

            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);
            cout << "Dva koreni: x1 = " << x1 << "  x2 = " << x2 << endl;
        }
        else if (D == 0) {

            double x = -b / (2 * a);
            cout << "Odun koren: x = " << x << endl;
        }
        else {

            cout << "nema koreniv." << endl;
        }
    }

    return 0;
}0
