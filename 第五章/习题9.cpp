////�����ꡢ�¡��գ���������Ǹ���ĵڼ���
//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum_day(int, int);
//	int leap(int);
//	int year, month, day, days;
//	cout << "���������ڣ��꣬�£��գ���" << endl;
//	cin >> year >> month >> day;
//	cout << year << "/" << month << "/" << day << endl;
//	days = sum_day(month, day);
//	if (leap(year)&&month>=3)
//		days = days + 1;
//	cout << "��һ��ĵ�" << days << "��" << endl;
//	return 0;
//}
//int sum_day(int month, int day)
//{
//	int i;
//	int day_tybe[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	for (i = 0; i < month-1; i++)
//		day = day + day_tybe[i];
//	return(day);
//}
//int leap(int year)
//{
//	int leap;
//	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
//	return (leap);
//}