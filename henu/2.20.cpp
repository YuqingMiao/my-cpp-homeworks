#include <iostream>
using namespace std;

int main()
{
   int r;

   cout << "输入圆的半径：";
   cin >> r;

   cout << "直径是 " << r * 2.0 << endl
      << "周长是 " << 2 * 3.14159 * r << endl
      << "面积是 " << 3.14159 * r * r << endl;
      return 0;
}
