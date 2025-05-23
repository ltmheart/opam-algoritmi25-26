#include <iostream>
#include <cmath>
using namespace std;

	float f1(int x);
	float f2(int x);
	float sum(int n);
	float dobutok(int n);

int main(){
	float a, b, z;
	a = sum(23);
	b = dobutok(23);
	z = 3*a*b - b;
	cout << "a = " << a << endl
	<< " b = " << b << endl
	<< " z = " << z << endl;
	
	return 0;
}	

float f1(int x){
	float f;
	f = fabs(cos(x)/2.7)+ 9.1*sin(1.2*x+1);
	return (f);
}

float f2(int x){
	return (fabs(sin(x)/3,12 + cos pow(x, 2)))- 8,3 sin 3*(x));
}

float sum(int n){ 
	float s=0;
	for(int k=n; k<=n+5; k++){
		s = s + f1(k);
	}
	return (s);
}

float dobutok(int n){ // n nomer varianty
	float d=1;
	for(int k=n; k<=n+8; k++){
		d = d * f2(k);
	}
	return (d);
}


