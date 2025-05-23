#include <iostream>
using namespace std;
int main()
{
    cout << "Enter number from 100 to 999: \n";
    int num, od, des, sto;
    cin >> num;
    od = num % 10;
    des = (num/10)%10;
    sto = num / 100;
    cout << "1.Hundrets " << sto << endl;
    cout << "2.tens " << des << endl;
    cout << "3.ones " << od << endl;
    cout << "4.sum " << od+des+sto << endl;
    cout << "5.dobutok " << sto * des * od << endl;

    return 0;
}
