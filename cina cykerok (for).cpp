#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	float cina;
	cout << "vvedyt ciny" << endl;
	cin >> cina;
	for(int kg = 100; kg <= 1000; kg += 100){
		cout << "cina za " << kg << " gram " << fixed << setpresicion(2) << (cina/1000)*kg << " grn" << endl;
	}
	
}
