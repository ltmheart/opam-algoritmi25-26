// practical, var 19, zavd 4
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x, y;
	cout << "Enter the value x and y";
	cin >> x >> y;
	if ((x >= -1 && 0 >= x && pow(x, 2)+ pow(y, 2) <= 1 && (0 >= y && y >= -1)) || (x > 0 && x <= 1 && y > 0 && y <= 1)){
	cout << "belong to the shaded figure";
	}
    else{
    	cout << "doesn`t belong to the shaded figure";
	}
	return 0;
}
