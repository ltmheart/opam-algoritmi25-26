#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	
	int A[3][2], x[2][2]={{0,1}, {2,3}};
	cout << "Vvedit masyyv A: \n";
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			cin >> A[i][j];
		}
	}
	cout << "Masiv x: \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << x[i][j] << "   ";
		}
		cout << endl;
	}
	cout << "Masiv A: \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << A[i][j] << "   ";
		}
		cout << endl;
	}
	//vydil pamyat, dynam masyvy
	int **B = new int *[3]; // masyv vkazivnikiv
	for(int i=0; i<3; i++){
		B[i]= new int [2];
	}
	
	//zapovn pamyat
	srand(time(0));
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j+
		+){
			B[i][j] = rand()%2;
		}
	}
	cout << "Masiv B: \n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout << B[i][j] << "   ";
		}
		cout << endl;
    }
	delete [] B;
}

