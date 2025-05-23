#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

double f24(int x) { return fabs((cos(x) / 2.7)) + (9.1 * sin(1.2 * x + 1));
} 
double f25(int x) { return fabs((sin(x) / 3.12) + pow(cos(x), 2)) - (8.3 * sin(3 * x));
} 

double recursiveA(int current, int end) {
    return (current > end) ? 0:f24(current)+recursiveA(current+1, end);
}
double recursiveB(int current, int end) { 
    return (current > end) ? 1:f25(current)*recursiveB(current+1, end); 
} 
void printResults(int i, double a, double b) { 
    ofstream fout("result_recursive.txt");
    cout << "i = " << i << "\na = " << a << "\nb = " << b 
    << "\nz = " << (3*a*b)-b << endl; 
    fout << "i = " << i << "\na = " << a << "\nb = " << b 
    << "\nz = " << (3*a*b)-b << endl; 
} 
int main() { 
    const int i = 23; 
    double a = recursiveA(i, i + 5); 
    double b = recursiveB(i, i + 8); 
    printResults(i, a, b); 
    return 0; 
}
