#include <iostream>
using namespace std;
int main(){
	int i = 17; // 4 b
	int j = 29; // 4 b
	// cout << sizeof(i) << endl;
	// cout << sizeof(j) << endl;
	
	
int* p1 = &i; // p1 - vkazivnyk na zminny tupy int, zapysalu adresy zminnoi int
cout << p1 << endl;
cout << *p1 << endl;
*p1 = 18;
cout << i << " " << *p1 << endl;
cout << sizeof(p1) << endl;
int* p2 = p1;
cout << p2 << endl;
cout << *p2 << endl;
*p2=30;
cout << i << " " << *p1 << endl;
p2++;
cout << p2 << endl << *p2 << endl;
p1--;
cout << p1 << endl << *p1 << endl;
(p2<p1) ? cout << "p2<p1" : cout << "p2>p1";

//char ch='a'; 
//char* p2 = &ch;
//cout <<< p2 << endl << *p2 << endl;
//cout << sizeof(p2) << endl;

}
