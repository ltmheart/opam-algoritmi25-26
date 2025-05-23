#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "vvedyt znachenya n: ";
    cin >> n;
    
    double pr = 1.0;

    
    for (int i = 1; i <= n; i++) {
        double term = pow(1.0/2, 2* i, 2 * i);
		pr *= (1 + term);
    }


    cout << "result: " << product << endl;

    return 0;
}

