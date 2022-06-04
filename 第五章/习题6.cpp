////打印出10行杨辉三角形
//#include<iostream>
//using namespace std;
//#include<iomanip>
//int main()
//{
//	const int n = 11;
//	int a[n][n], i, j;
//	for (i = 1; i < n; i++)
//	{
//		a[i][i] = 1;
//		a[i][1] = 1;
//	}
//	for (i = 3; i < n; i++)
//	{
//		for (j = 2; j <= i-1; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//	for (i = 1; i < n; i++)
//	{
//		for (j = 1; j <= i; j++)
//			cout << setw(6) << a[i][j] << " ";
//		cout << endl;
//	}
//	
//	return 0;
//}