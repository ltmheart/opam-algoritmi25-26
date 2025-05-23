// kategory 8, ex. 1
#include <iostream>
using namespace std;
int main(){
	int row,col;
	cout << "Vvedyt coordynaty klitynky doshky:\n";
	cin >> row >> col;
 	if((row<1 || row>8) && (col<1 || col>8));
	 cout << "Kordynaty nekorektni";
	 else
	 {
	 	if((row%2!=0 && col%2!=0) || (row%2==0 && col%2==0);
	 	cout << "black";
	 	else
		cout << "white";
	}
	return 0;
}
