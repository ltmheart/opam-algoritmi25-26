#include <iostream>
#include <fstream>
using namespace std;
int main(){
	int a = 12321;
	ofstream file1("TextFileClass.txt");
	file1 << "Hello, world!\n My name is jobaiden. \n" << a;
	file1.close();
	
	ifstream file2("TextFileClass.txt");
	char line[64];
	if(file2.fail()) cout << "Error.";
	else{
	while (!file2.eof() && !file2.fail())
	{
	file2.getline(line, sizeof(line));
	cout << line << endl;
    } 
	}
	
	
	return 0;
}
