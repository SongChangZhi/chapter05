////有一行电文，已按照规律加密：A-Z,a-z,B-Y,第一个字母变第26个,
////第i个字母变第（26-i+1）个非字母不变，要求将密码译回原文，并打印出密码和原文；
//#include<iostream>
//using namespace std;
//int main()
//{
//	int j, n;
//	char ch[80];
//	cout << "请输入密码：" << endl;
//	gets_s(ch);
//	cout << "密码为：" << ch << endl;
//	j = 0;
//	while (ch[j] != '\0')
//	{
//		if ((ch[j] >= 'A') && (ch[j] <= 'Z'))
//			ch[j] = 155 - ch[j];
//		else if ((ch[j] >= 'a') && (ch[j] <= 'z'))
//			ch[j] = 219 - ch[j];
//		else
//			ch[j] = ch[j];
//		j++;
//	}
//	n = j;
//	cout << "原文为：";
//	for (j = 0; j < n; j++)
//		putchar(ch[j]);
//	return 0;
//}