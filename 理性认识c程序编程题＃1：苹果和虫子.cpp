#include <iostream>
using namespace std;
int main() {
	int n, x, y,z;
	cin >> n >> x >> y;
	if (y%x == 0)
		z = n - y / x;
	else
		z = n - y / x;
	cout << z << endl;
	return 0;
}