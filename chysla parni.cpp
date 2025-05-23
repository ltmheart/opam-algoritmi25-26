//nastypne parne chyslo
#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << n - (1 + abs(n%2));
	return 0;
}
