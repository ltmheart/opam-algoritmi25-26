#include <istream>
#include<cmath>
using namespace std;
int main (){

  int n;
  cout << "Vvedit chyslo" << endl; 
  if(n>0){cout << "plus"<<endl;
    
  }else(n==0) cout <<"zer<<endl";
  else cout<<"minus"endl;
  
  if (abs(n))<=9){
    cout <<"number 1"<<endl;  
  
  }
  else if(abs(n))<=99){
  std::cout <<"number 2sym." << std::endl;
}else std::cout <<"3 and more sym" << std::endl;

if (n%2 == 0) std::cout <<"odd" << std:: endl;
else std::cout <<"even" <<std::endl; 
  
  
