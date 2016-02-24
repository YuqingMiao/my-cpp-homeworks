#include <iostream>
using namespace std;
int main() {
	int n, a, b=0;
	cin >> n;
	for (int i = 0, i < n, i++) {
		cin >> a;
		if (a > b)
			b = a;
	}
	cou << b << endl;
	return 0;
}