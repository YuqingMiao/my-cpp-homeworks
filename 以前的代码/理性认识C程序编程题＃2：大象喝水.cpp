#include <iostream>
using namespace std;
int main() {
	double Pi = 3.14159 ,V;
	int h, r, n ;
	cin >> h >> r;
	V = Pi * h * r * r;
	n = 20000 / V + 1;
	cout << n << endl;
	return 0;
}