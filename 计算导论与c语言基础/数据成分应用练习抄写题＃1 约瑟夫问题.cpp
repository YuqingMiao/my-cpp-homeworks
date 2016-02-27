#include<iostream>
using namespace std;

//һ�������300ֻ����
int succedent[300];//����һ�����ӵĺ�һλ��˭
int precedent[300];//���ڱ���һ�����ӵ�ǰһλ��˭

int main()
{
	int m, n;
	while (true)
	{
		cin >> n >> m;
		if (0 == n && 0 == m)
		{
			break;
		}
		for (int i = 0; i < n - 1; i++)
		{
			succedent[i] = i + 1;
			precedent[i + 1] = i;
		}
		succedent[n - 1] = 0;
		precedent[0] = n - 1;

		int current = 0;
		while (true) {
			//���һ��Ҫ��m�κţ���ôȡm-1��succedent֮�������Ҫ�˳�����ֻ����
			for (int count = 0; count < m - 1; count++)
				current = succedent[current];

			int pre = precedent[current];
			int suc = succedent[current];
			//��current�ź����˳��ܼ򵥣����ǰ�ǰһλ�ġ���һλ��ָ��current����һλ��
			//��һλ�ġ�ǰһλ��ָ��current��ǰһλ�ͺ���
			succedent[pre] = suc;
			precedent[suc] = pre;
			if (pre == suc) {
				//���ֻʣ�������ˣ���ôÿ���˵�ǰλ�ͺ�λ����ͬһ���ˡ�
				//current���˳��ģ���ô��һ������ʣ�µġ�
				//���ǵ�����Ǵ�0��ŵģ����ʱҪ��һ
				cout << pre + 1 << endl;
				break;
			}
			current = suc;
		}
	}
	return 0;
}