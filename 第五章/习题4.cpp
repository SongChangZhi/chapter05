////有一个已经排好序的数组，输入一个数，要求按原来排序的规律将它插入到数组中
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[11] = {1, 6, 13, 14 ,28 ,40, 56 ,78 ,89, 100};
//	int num,i,j;
//	cout << "数列为：";
//	for (i = 0; i <10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	cout << "请插入一个数：" << endl;
//	cin >>num;
//	if (num > a[9]) a[10] = num;
//	else
//	{
//		for (i = 0; i < 10; i++)
//		{
//			if (a[i] > num)
//			{
//				for (j = 9; j >= i; j--)
//					a[j + 1] = a[j];
//				    a[i] = num;
//					break;
//
//			}
//		}
//	}
//	cout << "排序后结果为：";
//		for (i = 0; i < 11; i++)
//			cout << a[i] << " ";
//	return 0;
//}