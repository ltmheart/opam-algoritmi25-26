#include <iostream>
#include <cmath>
using namespace std;
int Mir ( int);
char Test ( int);

int main(){
	int b = 123, b_zv;
	cout << " Chyslo b = " << b << endl;
	b_zv = Mir(b);
	cout << " Chyslo b dzerkalne = " << b_zv << endl;
	cout << Test
	return 0;
}

int Mir (int a)
{
	int a_zv =0;
	while(a>0){
		a_zv = a_zv*10 + a%10;
		a=a/10;
	}
	return (a_zv);
}

char Test (int a)
{
	switch(a){
		case 1: return 'p'; break;
		case -1: return 'n'; break;
		default: cout << " error!\n"; return 0; 
	}
}
