// kategory 9, zadacha 1
#include <iostream>
using namespace std;
int main(){
	int N, ostN10;
	cout << "vvedyt vik ";
	cin >> N;
	ostN10 = N%10;
	if(N>10 && N<21)
	 cout << "vik " << N << " rokiv";
	else
	  switch(ostN10){
	  	case 1: cout << "vik " << N << " rokiv"; break;
	  	case 2:
	  	case 3:
	  	case 4: cout << "vik " << N << " roky"; break;
	  	default: cout << "vik " << N << " rokiv";
	  }
	return 0;
}
