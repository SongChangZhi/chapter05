////找出一个二维数组中的鞍点，及该位置上的元素在该行上最大，在该列上最小（也可能没有鞍点）
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int n = 4, m = 5;
//	int i, j, a[n][m], max, max_j;
//	bool flag;
//	cout << "请输入数组：" << endl;
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
//				cout << "a[" << i << "]" << "[" << max_j << "]=" << max << "为鞍点" << endl;
//				break;
//		}
//		
//	}
//	if (!flag)
//		cout << "鞍点不存在" << endl;
//
//	return 0;
//}