////��һ���Ѿ��ź�������飬����һ������Ҫ��ԭ������Ĺ��ɽ������뵽������
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a[11] = {1, 6, 13, 14 ,28 ,40, 56 ,78 ,89, 100};
//	int num,i,j;
//	cout << "����Ϊ��";
//	for (i = 0; i <10; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	cout << "�����һ������" << endl;
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
//	cout << "�������Ϊ��";
//		for (i = 0; i < 11; i++)
//			cout << a[i] << " ";
//	return 0;
//}