#include<iostream>
using namespace std;
int main()
{
	int a[10],i,j,temp;
	cout << "请输入10个数字：" << endl;
	for (i = 0; i < 10; i++)
		cin >> a[i];
		cout << endl;
		for (j = 1; j < 10; j++)
		{
			for (i = 0; i < 10 - j; i++)
			{
				if (a[i] > a[i + 1])
				{
					temp = a[i];
					a[i] = a[i + 1];
					a[i + 1] = temp;
				}
			}
		}
		cout << "排序后为：";
		for (i = 0; i < 10; i++)
			cout << a[i]<<" ";
		cout << endl;

	return 0;
}