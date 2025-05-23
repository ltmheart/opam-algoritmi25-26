// practical, zavd 3
#include <iostream>
#include <math.h>
using namespace std;
int main(){
  double x, y, b, a;
  cout << "Enter the value x";
  cin >> x;
  cout << "Enter the value a";
  cin >> a;
  cout << "Enter the value b";
  cin >> b;
if (x == 1) {
        y = pow(cos(x), 2) * x;
    }
    if (x == 2) {
        y = pow(x, 2) * a * x + b;
    }
    if (x == 3) {
        y = pow(sin(x), 2) * x;
    }
  if (x>3) {
        y = sqrt(y * pow(tan(x), 4) * x);
    }
  if (1<x<2 && 2<x<3 && 3<x<4 && 4<x<5 && 5<x<6 && 6<x<7 && 7<x<8 && 8<x<9 && 9<x<10) {
    y = a*x;
  }
   cout << "y = " << y << endl;
  return 0;
}
