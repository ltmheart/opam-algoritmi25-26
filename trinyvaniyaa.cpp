#include <iostream>
using namespace std;
int c(int n, int m){
	if (m == 0 && n> 0 || m==n && n >=0) {
	return 1;
	}
	if (m > n && n >= 0) return 0;
	else return c(n-1, m-1)+ c(n-1, m);
}
int main (){
	cout << c(4,3);
}
