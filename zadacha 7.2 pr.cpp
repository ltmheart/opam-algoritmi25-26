#include<iostream>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

double f3(int k) { return fabs((cos(k) / 2.7)) + (9.1 * sin(1.2 * k + 1)); } 
double f4(int k) { return fabs((sin(k) / 3.12) + pow(cos(k), 2)) - (8.3 * sin(3 * k)); } 

double recursiveA(int current, int end) {
    return (current > end) ? 0:f3(current)+recursiveA(current+1, end);
}
double recursiveB(int current, int end) { 
    return (current > end) ? 1:f4(current)+recursiveB(current+1, end); 
} 
void printResults(int i, double a, double b) { 
    ofstream fout("result_recursive.txt");
    cout << fixed << setprecision(5); 
    fout << fixed << setprecision(5); 
    cout << "i = " << i << "\na = " << a << "\nb = " << b 
    << "\nz = " << a+b << endl; 
    fout << "i = " << i << "\na = " << a << "\nb = " << b 
    << "\nz = " << a+b << endl; 
} 
int main() { 
    const int i = 23; 
    double a = recursiveA(i, i + 5); 
    double b = recursiveB(i, i + 8); 
    printResults(i, a, b); 
    return 0; 
}
