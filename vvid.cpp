// vvid/vyvid stream
#include <iostream>
#include <iomanip>
using namespace std;
//using namespace ios;
int main(){
	double d = 1.321e-3;
	int n = 1024;
	cout << " n= " << n << endl;
	cout << " d= " << d << endl;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << " n= " << n << endl;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout.setf(ios::showpos);
	cout << " n= " << n << endl;
	cout << " d= " << d << endl;
	
	// manipylatory
	cout << "n = " << dec << n << endl;
	cout << "n = " << oct << n << endl;
	cout << flush << "n= " << n << endl;
	cout << "d = " << setw(8) << setprecision(4) << fixed << d << endl;
	return 0;
}
