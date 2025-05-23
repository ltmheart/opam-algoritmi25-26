// switch case
#include <iostream>
using namespace std;
int main(){
	int m, k, price;
	cout << "Vvedit kilkist kvytkiv: ";
	cin >> m;
	cout << "Vvedyt nomer naselenogo pynkty: ";
	cin >> k;
	switch(k){
	 case 1: price = 22; break;
	 case 2:
	 case 3:
	 case 4: price = 25; break;
	 case 5:
	 case 6: price = 30; break;
	 case 7:
	 case 8: price = 35; break;
	 default: cout << "Nomer nekorekt.";								
	}
	if(price!=0) cout << "Vartist" << m <<  "kvytkiv stanovyt " << m*price << "grn";
	return 0;
}
