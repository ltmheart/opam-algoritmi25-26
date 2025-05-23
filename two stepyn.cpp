#include <iostream>
using namespace std;
int main(){
	int b = 1;
	int s = 0;
	double p = 1;
	for (int a = 0; a<=10; a++){
	s+=b;
	cout << a << " " << b << endl;
	cout << p << endl;
	p*=b;
	b*=2; 
    }
    cout << "S = " << s << endl; 
}
