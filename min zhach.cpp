#include <iostream>
using namespace std;
int main(){
	int a, min;
	cout << "klkst chyslo: ";
	cin >> a;
	int b;
	cout << "vvedyt chysloo: ";
	cin >> b;
	min = b;
	for (int k=1; k<a; k++){
		cout << "vvedyt chysloo: ";
		cin >>b;
		if(b<min) {
			min = b;
			
		}
	}
	cout << "min: " << min;
}
