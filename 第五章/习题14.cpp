////输入n个字符串，将他们按字母由小到大的顺序排列并输出
//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	int i, j;
//	const int n = 5;
//	string str[n],temp;
//	cout << "请输入字符串："<< endl;
//	for (i = 0; i < n; i++)
//		cin >> str[i];
//	for (i = 0; i < n - 1; i++)
//	{
//		for(j=0;j<n-i-1;j++)
//			if (str[j] > str[j + 1])
//			{
//				temp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = temp;
//			}
//		cout << "排序后结果为：" << endl;
//		for (i = 0; i < n; i++)
//			cout << str[i] << endl;
//	}
//	return 0;
//}