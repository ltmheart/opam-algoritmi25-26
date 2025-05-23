#include <iostream>
using namespace std;
int main(){
	float chyslo, max, s = 0, k=0;
	cout << "Vvedit chyslo -> ";
	cin >> chyslo;
	max = chyslo;
	k++;
	while(chyslo!=0){
		s=s+chyslo;
		cout << "Vvedit chyslo -> ";
	    cin >> chyslo;
	    k++;
	    if(chyslo>max) max=chyslo;
	}
	if(k>1){
		cout << "bulo vvedeno " << k << " chysel" << endl;
		cout << "max = " << max << endl;
		cout << "suma = " << s << endl;
		cout << "ser = " << s/k << endl;
	}
	else{
		cout << " Vvedeno odne chyslo " << chyslo << endl;
	}
	return 0;
}
