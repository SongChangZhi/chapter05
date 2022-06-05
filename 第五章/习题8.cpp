////有15个数按由小到大顺序存放在数组中，输入一个人数，要求用折半查找法找出该数是数组中的第几个元素
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int n = 15;
//	int a[n],i,number,top,mid,bott,loca;
//	bool flag = true, sign;
//	char c;
//	cout << "输入一个数字：" << endl;
//	cin >> a[0];
//	i = 1;
//	while (i < n)
//	{
//		cin >> a[i];
//		if (a[i] >= a[i - 1])
//			i++;
//		else
//			cout << "请重新输入数字：";
//	}
//	cout << endl;
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	while (flag)
//	{
//		cout << "请输入你要查找的数" << endl;
//		cin >>number;
//		sign = false;                            //sign为假表示尚未找到
//		top = 0;								 //top为查找区间的起始位置
//		bott = n - 1;							 //bott为查找的最末位置
//		if ((number < a[0]) || (number > a[n - 1]))
//			loca = -1;
//		while ((!sign) && (top <= bott))
//		{
//			mid = (top+bott) / 2;					 //找出中间元素下标
//			if (number == a[mid])
//			{
//				loca = mid;
//				cout << "找到" << number << "的下标为：" << loca+1 << endl;
//				sign = true;
//			}
//			else if (number < a[mid])
//				bott = mid - 1;
//			else
//				top = mid + 1;
//		}
//		if (!sign || loca == -1)
//			cout << "没找到" << endl;
//		cout << "你要继续吗?（Y/N)" << endl;
//		cin >> c;
//		if (c == 'N' || c == 'n')
//			flag = false;
//
//			
//	}
//	return 0;
//}