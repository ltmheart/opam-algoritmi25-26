#include <iostream>
#include <cmath>
#include<fstream>
#include<iomanip>
using namespace std;
 float f1(int x);
 float f2(int x);
 float sum(int n);
 float dobutok(int n);
 int main(){
 float z,a,b;
 a = sum(23);
 b = dobutok(23);
 z = a+b;
 ofstream fout("result_recursive.txt");
 cout << "a= " << a << endl;
 cout << "b= " << b << endl;
 cout << "z= " << z << endl;
 return 0;
}
float f1(int x){
 float f;
 f = fabs((cos(x) / 2.7)) + (9.1 * sin(1.2 * x + 1));
 return (f); 
}
float f2(int x){
 return fabs((sin(x) / 3.12) + pow(cos(x), 2)) - (8.3 * sin(3 * x));
}
float sum(int n){
 float s=0;
 for(int k=n; k<=n+5; k++){
 s = s + f1(k);
 }
 return (s);
}
float dobutok(int n){
 float d=1;
 for(int k=n; k<n+8; k++){
  d = d * f2(k);
 }
 return (d);
}
