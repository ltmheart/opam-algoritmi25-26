#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
void fun(int*, int*); //

int main() {
int big = 2002, small = 0;
cout << " do funksii: \n" 
     << " big = " << big << endl
	 << " small = " << small << endl; 
fun (&big, &small);
cout << " pislya funksii: \n" 
     << " big = " << big << endl
	 << " small = " << small << endl;
	 return 0; 
}

//------------------------------

void fun(int* big, int* small){
	*big+= 1001, *small+=1001;
	cout << " vseredyni funksii: \n" 
     << " big = " << *big << endl
	 << " small = " << *small << endl;
	 return; 
}
