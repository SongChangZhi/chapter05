////��һƪ���£����������֣�ÿ�������80�ַ���Ҫ��ֱ�ͳ�Ƴ����е�Ӣ�Ĵ�д��ĸ��Сд��ĸ�����֡��ո��Լ������ַ�����
//#include<iostream>
//using namespace std;
//int main()
//{
//	int upper, lower, digit, space, other,i,j;
//	upper = lower = digit = space = other = 0;
//	char text[3][80];
//	for (i = 0; i < 3; i++)
//	{
//		cout << "�������"<<i+1<<"������" << endl;
//		gets_s (text[i]);                                      //ע��gets_s����gets
//		for (j = 0; j < 80 && text[i][j] != '\0'; j++)
//			if (text[i][j] >= 'A' &&text[i][j] <= 'Z')
//				upper++;
//			else if (text[i][j] >= 'a' && text[i][j] <= 'z')
//				lower++;
//			else if (text[i][j] >= '0' && text[i][j] <= '9')
//				digit++;
//			else if (text[i][j] == ' ')
//				space++;
//			else
//				other++;
//	}
//	cout << "��д��ĸ����Ϊ��" << upper << endl;
//	cout << "Сд��ĸ����Ϊ��" << lower << endl;
//	cout << "���ָ���Ϊ��" << digit << endl;
//	cout << "�ո�����Ϊ��" << space << endl;
//	cout<<"���������ַ�Ϊ��"<<other<<endl;
//	return 0;
//}