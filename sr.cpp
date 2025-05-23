#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int a, b, c;
  int V;
  double d;
  cout << "Type sides of the parallelepiped " << a << b << c << endl;
  cin >> a >> b >> c;
  V= a*b*c;
  cout << "volume of a parallelepiped " << V << endl;
  d = sqrt(pow (a,2)+pow(b,2)+pow(c,2));
  cout <<"diagonals of a parallelepiped" << d << endl;
  return 0;
}
