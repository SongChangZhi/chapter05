//将两个字符串连接起来，结果取代第一个字符串
//#include<iostream>
//#include<string>
//using namespace std;
//int main()								//用字符数组定义字符串变量
//{
//	int i=0, j=0;
//	char s1[80], s2[40];
//	cout << "输入字符串1：";
//	cin >> s1;
//	cout << "输入字符串2：";
//	cin >> s2;
//	while (s1[i] != '\0')
//		i++;
//	while (s2[j] != '\0')
//		s1[i++] = s2[j++];
//	s1[i] = '\0';
//	cout << "新的字符串为：" << s1 << endl;
//	return 0;
//
//
//int main()								//用标准库中的strcat函数
//{
//	char s1[80], s2[40];
//	cout << "输入字符串1：";
//	cin >> s1;
//	cout << "输入字符串2：";
//	cin >> s2;
//	strcat_s(s1, s2);
//	cout << "新的字符串为：" << s1 << endl;
//	return 0;
//}




//int main()									//用string方法定义字符串变量
//{
//	string s1,s2;
//	cout << "输入字符串1：";
//	cin >> s1;
//	cout << "输入字符串2：";
//	cin >> s2;
//	cout <<"新的字符串为：" << s1 + s2 << endl;
//	return 0;
//}