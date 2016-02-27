#include <iostream>
using namespace std;
int main()
{
    int num,x1,x2,x3,x4,x5;
    cin >> num;
    x1 = num%10;
    x2 = (num%100)/10;
    x3 = (num%1000)/100;
    x4 = (num%10000)/1000;
    x5 = num/10000;
    cout << x5 <<"   " << x4< <"   "<< x3 <<"   "<< x2 <<"   "<< x1;
    return 0;
}
