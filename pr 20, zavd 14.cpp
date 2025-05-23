// pr 20, zavd 14, var (dop) 1
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

int main(){
	const int k_p=6, k_cd=5;
	int rt[k_p][k_cd];
	// zapovn masivy rt
	srand(time(0));
	for(int k=0; k<k_p; k++){
		for(int n=0; n<k_cd; n++){
			rt[k][n] = rand()%(10*1+50);
		}
	}
	// vyvid tablyxi reityngy
	cout << "       tablysa reityngy \n";
	cout << "-------------------------------\n";
	cout << "|        N_candydativ           |\n";
	cout << "-------------------------------\n";
	cout << "|Np | 1  | 2  | 3  | 4  | 5  |\n";
	cout << "-------------------------------\n";
	for(int k=0; k<k_p; k++){
		cout << "| " << k+1 << "  |";
		for(int n=0; n<k_cd; n++){
			 cout << setw(4) << rt[k][n] << "|";
		}
		cout << endl;
	}
	cout << "-------------------------------\n";
	// poshyk pidsymkovih rezultativ po koznomy kandydaty
	int REZ[k_cd];
	for(int n=0; n<k_cd; n++){ //syckl po stovpsiah
		int s=0;
		for(int k=0; k<k_p; k++){
			s = s+ rt[k][n];
		}
		REZ[n] = s;
	}
	cout << "| " << setw(3) << "S  |";
	for(int n=0; n<k_cd; n++){
		cout << setw(4) << REZ[n] << "|";
	}
	return 0;
}
