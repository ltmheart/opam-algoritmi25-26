#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a, b, c;
	cout << "Vvedit a, b, c: " ;
	cin >> a >> b >> c;
	if(a>b && b>=c )
	{
		a=2*a; b=2*b; c=2*c;
	}
	else
	{
		a = fabs(a); b = fabs(b); c = fabs(c);
	}
	cout << "Rezult: \n a =" << a << "\n b= " << b << "\n c= " << c << endl;
    return 0;
}

