////�ҳ�һ����ά�����еİ��㣬����λ���ϵ�Ԫ���ڸ���������ڸ�������С��Ҳ����û�а��㣩
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int n = 4, m = 5;
//	int i, j, a[n][m], max, max_j;
//	bool flag;
//	cout << "���������飺" << endl;
//	for (i = 0; i < n; i++)
//		for (j = 0;j < m; j++)
//			cin >> a[i][j];
//	for (i = 0; i < n; i++)
//	{
//		max = a[i][0];	
//		max_j = 0;   
//		for(j=0;j<m;j++)
//			if (a[i][j] > max)
//			{
//				max = a[i][j];
//				max_j = j;
//			}
//		flag = true;
//		for (int k = 0; k < n; k++)
//			if (max > a[k][max_j])
//			{
//				flag = false;
//				continue;
//			}
//		
//			if (flag)
//			{
//				cout << "a[" << i << "]" << "[" << max_j << "]=" << max << "Ϊ����" << endl;
//				break;
//		}
//		
//	}
//	if (!flag)
//		cout << "���㲻����" << endl;
//
//	return 0;
//}