#include <iostream>
using namespace std;
int main() {
	int n, x, y;
	int sy;
	cin >> n >> x >> y;
	if (y%x > 0)
		sy = n - y / x - 1;
	else
		sy = n - y / x;
	if (sy<0)
		sy = 0;
	cout << sy;
	return 0;
}