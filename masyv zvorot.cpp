// zavd 4
#include <iostream>
using namespace std;
int main(){
	int const n = 10;
	int arr[n]={1, 2, 3, 5, -5, 6, 4, 8, 9, 0};
	cout << "vyvid masivy\n" ;
	for (int i = 0; i<n; i++){
		cout << arr[i] << " " ;
	} 
	// vyvid zvorot
	cout << "\n\nvyvid masivy zvorot\n" ;
	for (int i = n-1; i>=0; i--){
		cout << arr[i] << " " ;
}
cout << "\n\nelementy z parnymi indeksami:";
for (int i = 0; i<n; i+=2){
	cout << arr[i] << " " ;
}
cout << "\n\nelementy z ne parnymi indeksami:";
for (int i = 1; i<n; i+=2){
	cout << arr[i] << " " ;
}
// vyvid parnyh chisel
cout << "\n\nparny chysla:";
for (int i = 0; i<n; i++){
	if(arr[i] %2== 0)
      cout << arr[i] << " " ;
}
cout << "\n\nne parny chysla:";
for (int i = 0; i<n; i++){
	if(arr[i] %2!= 0)
      cout << arr[i] << " " ;
}
}
