// praktychna, zavd 1, variant 19
#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double x;
	cout << "enter the value x" ;
	cin >> x;
	if(x>-4){
		cout << "F(x) = " << cos(2*x+9) << endl;
	}
	else{
	cout << "F(x) = " << -(cos(x)/(pow(x, 2)-7)) << endl;
	}
    return 0;
}
