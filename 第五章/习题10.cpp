////有一篇文章，共三行文字，每行最多有80字符，要求分别统计出其中的英文大写字母、小写字母、数字、空格以及其他字符个数
//#include<iostream>
//using namespace std;
//int main()
//{
//	int upper, lower, digit, space, other,i,j;
//	upper = lower = digit = space = other = 0;
//	char text[3][80];
//	for (i = 0; i < 3; i++)
//	{
//		cout << "请输入第"<<i+1<<"行文字" << endl;
//		gets_s (text[i]);                                      //注意gets_s不是gets
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
//	cout << "大写字母个数为：" << upper << endl;
//	cout << "小写字母个数为：" << lower << endl;
//	cout << "数字个数为：" << digit << endl;
//	cout << "空格字数为：" << space << endl;
//	cout<<"其他类型字符为："<<other<<endl;
//	return 0;
//}