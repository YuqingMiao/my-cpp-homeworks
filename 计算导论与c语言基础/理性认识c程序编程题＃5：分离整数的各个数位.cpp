#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	cin >> num;
	int a, b, c;
	a = num / 100;
	b = (num % 100) / 10;
	c = num % 10;
	cout << a<<endl<< b<<endl<< c<<endl;

	return 0;
}