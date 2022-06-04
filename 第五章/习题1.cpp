////筛选法求100之内的素数（“埃拉托色尼筛选法”）
//#include<iostream>
//#include<iomanip>
//#include<cmath>
//using namespace std;
//int main()
//{
//	int n, a[101];
//	for (int i = 1; i < 101; i++)
//		a[i] = i;
//	a[1] = 0;
//	for (int i = 2; i <= sqrt(100); i++)
//	{
//		for (int j = i + 1; j < 101; j++)
//			if (a[i] != 0 && a[j] != 0)
//				if (a[j] % a[i] == 0)
//					a[j] = 0;
//	}
//	for (int i = 1,n=0; i < 101; i++)
//	{
//		if (a[i] != 0)
//		{
//			cout << setw(5) << a[i] << " ";
//			n++;
//		}
//		if (n == 10)
//		{
//			cout << endl;
//			n = 0;
//		}
//	}
//
//	return 0;  
//}