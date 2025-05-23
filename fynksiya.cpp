#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x, y;
	cout << "Vvedyt znacheniyna x:" ;
	cin >> x ;
	if((x*x-1!=0) && (2*x-10>=0))
	{
		y = (sqrt(2*x-10)/(x*x-1));
		cout << "y = " << y << endl;
	}
	else
	cout << "y nevyznavheno" << endl;
	return 0;
}
