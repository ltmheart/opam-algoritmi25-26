#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n, k = 0;
	cin >> n;
	while (n>0){
		cout << "v chysli " << n << " ostannya cyfra " << n%10 << endl;
		k++;
		n/=10;
	}
	cout << "v chysli " << k << " chyfr " << endl;
	}
