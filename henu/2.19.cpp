#include <iostream>
using namespace std;
//求最大值和最小值的函数
int max(int a, int b, int c);
int min(int a, int b, int c);

int main()
{
	int a, b, c, sum, average, product;

	cout << "Input three different integers: ";
	cin >> a >> b >> c;
	sum = a + b + c;
	average = sum / 3;
	product = a*b*c;
	cout << "Sum is " << sum << endl;
	cout << "Average is " << average << endl;
	cout << "Product is " << product << endl;
	cout << "Smallest is " << min(a, b, c) << endl;
	cout << "Largest is " << max(a, b, c) << endl;
	return 0;
}
int max(int a, int b, int c)
{
	if (a > b && a > c) return a;
	if (b > a && b > c) return b;
	return c;
}
int min(int a, int b, int c)
{
	if (a < b && a < c) return a;
	if (b < a && b < c) return b;
	return c;
}
