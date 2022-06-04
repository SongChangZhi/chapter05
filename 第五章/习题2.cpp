////用选择法对10个整数排序
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i, j,t, a[11];
//		cout << "请输入10个数字：" << endl;
//		for (i=1;i<=10;i++)
//		{
//			cout << "a[" << i << "]=";
//			cin >> a[i];
//		}
//		cout << "排序前为为：" << endl;
//		for (i = 1; i <= 9; i++)
//			cout << a[i] << " ";
//		cout <<endl;
//		for (i = 1; i <= 10; i++)
//		{
//			for (j = i + 1; j <= 10; j++)
//			{
//				if (a[i] > a[j])
//				{
//					int min = i;
//					t = a[min];
//					a[min] = a[j];
//					a[j] = t;
//				}
//			}
//		}
//		cout << "由小到大排序后为：" << endl;
//		for (i = 1; i <= 10; i++)
//			cout << a[i] << " ";
//		
//	return 0;
//}