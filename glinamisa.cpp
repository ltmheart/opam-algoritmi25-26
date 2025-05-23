#include <iostream>
using namespace std;
int f(int a, int b){
	if (a==b) returtn a;
	if (a>b) return f(a-b, b);
	if (a<b) return f (a, b-a);	
}
int main(){
	int n,m
	n = 24;
	m =72;
	cout << "nsd ( n, m) = " << n << " " << m << endl
	<< f (n, m);
}
