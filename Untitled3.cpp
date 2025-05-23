#include <iostream>
#include <math.h>
using namespace std;
int main(){
		float x, y, z, max;
	cout << "Vvedyt znacheniyna x,y,z:" ;
	cin >> x >> y >> z;
	if(x>y) max = x;
	else max = y;
	if(max <z) max = z;
	cout << "max= " << max;
	return 0;
}

