#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sumn = 0, sumd = 1;//��������sumn/sumd
	while (n--) {
		int num, deno;
		char slash;//ר�������Ե�/��
		cin >> num >> slash >> deno;
		//����� a/b + c/d = (a*d+c*b)/(b*d)
		sumn = sumn*deno + num*sumd;
		sumd = sumd*deno;
	}
	//��Լ��
	//�������Լ��gcd�������õ���ŷ����÷�
	int a = sumd, b = sumn, c;
	while (a != 0) {
		c = a; a = b%a; b = c;
	}
	int gcd = b;
	//���ӷ�ĸͬʱ����gcd�Ϳ������Լ��
	sumd /= gcd;
	sumn /= gcd;
	if (sumd > 1)
		cout << sumn << '/' << sumd << endl;
	else
		cout << sumn << endl;
	return 0;
}
