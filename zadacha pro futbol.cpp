// задача про футбольну команду
#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int result [20]={0, 1, 3, 1, 0, 3, 1, 0, 3, 1, 0, 1, 3, 1, 0, 3, 1, 0, 3, 1};
	int win = 0, draw = 0;
	for (int i = 0; i < 20; i++){
		if (result[i] == 1){
			draw++;
		}
		if (result[i] == 3){
			win++;
		}
		
	}
	cout << " Кількість виграшів: " << win << endl;
	cout << " Кількість нічиїх: " << draw << endl;
	return 0;
}
