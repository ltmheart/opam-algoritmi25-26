//задача 7 Глина
#include <iostream>
#include <cmath>
#include<fstream>
#include<iomanip>
using namespace std;
 double f1(int x);
 double f2(int x);
 double sum(int n);
 double dobutok(int n);
 int main(){
	double z,a,b;
	a = sum(23);
	b = dobutok(23);
	z = (3*a*b)-b;
	ofstream fout("result_recursive.txt");
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
	cout << "z= " << z << endl;
 return 0;
}
double f1(int x){
	double f;
	f = fabs((cos(x) / 2.7)) + (9.1 * sin(1.2 * x + 1));
	return (f); 
}
double f2(int x){
	return fabs((sin(x) / 3.12) + pow(cos(x), 2)) - (8.3 * sin(3 * x));

}
double sum(int n){ //n - номер варіанту
	double s=0;
	for(int k=n; k<=n+5; k++){
	s = s + f1(k);
	}
	return (s);
}
double dobutok(int n){
	double d=1.;
	for(int k=n; k<=n+8; k++){
	 d = d * f2(k);
	}
	return (d);
}





