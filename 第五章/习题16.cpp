////输入一个字符串，把其中的字符按照逆序逻辑输出
//#include<iostream>	
//#include<string>
//using namespace std;
//int main()								//字符数组方法
//{
//	const int n = 10;
//	char a[n], temp;
//	int i;
//	cout << "请输入一个字符串：" << endl;
//	for (i = 0; i < n; i++);
//		cin >> a[i];
//	for (i = 0; i < n/2; i++)
//	{
//		temp = a[i];
//		a[i] = a[n - 1 - i];
//		a[n - 1 - i] = temp;
//	}
//	for (i = 0; i < n; i++)
//		cout << a[i];
//	cout << endl;
//
//	return 0;
//}



//int main()								//string方法
//{
//	string str;
//	int i, n;
//	char temp;
//	cout << "请输入一个字符串：" << endl;
//	cin >> str;
//	n = str.size();
//	for (i = 0; i < n/2; i++)
//	{
//		temp = str[i];
//		str[i] = str[n - 1 - i];
//		str[n - 1 - i] = temp;
//	}
//	cout << str;
//	return 0;
//}