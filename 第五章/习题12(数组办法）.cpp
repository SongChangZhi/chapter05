////��һ�е��ģ��Ѱ��չ��ɼ��ܣ�A-Z,a-z,B-Y,��һ����ĸ���26��,
////��i����ĸ��ڣ�26-i+1��������ĸ���䣬Ҫ���������ԭ�ģ�����ӡ�������ԭ�ģ�
//#include<iostream>
//using namespace std;
//int main()
//{
//	int j, n;
//	char ch[80];
//	cout << "���������룺" << endl;
//	gets_s(ch);
//	cout << "����Ϊ��" << ch << endl;
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
//	cout << "ԭ��Ϊ��";
//	for (j = 0; j < n; j++)
//		putchar(ch[j]);
//	return 0;
//}