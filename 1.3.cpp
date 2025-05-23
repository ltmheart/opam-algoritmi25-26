#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float b = 1;
	float s = 0;
	for(int a = 0 ; a<=8; a++){
		cout << a << " " << b << endl;
	s+=b;
	b*=1/2.;
	}
	cout << "s =" << s << endl;
}
