#include <iostream>
using namespace std;

int main()
{
    int a,b;

    cout << "请输入两个整数" << endl;
    cin >> a >> b;
    if (a>b)
    {
        cout << a <<" is large."<<endl;
    }
    else if (a==b)
    {
        cout << "These numbers are equal." << endl;
    }
    else
    {
        cout << b <<" is large." << endl;
    }
    return 0;
}
