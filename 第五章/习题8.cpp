////��15��������С����˳�����������У�����һ��������Ҫ�����۰���ҷ��ҳ������������еĵڼ���Ԫ��
//#include<iostream>
//using namespace std;
//int main()
//{
//	const int n = 15;
//	int a[n],i,number,top,mid,bott,loca;
//	bool flag = true, sign;
//	char c;
//	cout << "����һ�����֣�" << endl;
//	cin >> a[0];
//	i = 1;
//	while (i < n)
//	{
//		cin >> a[i];
//		if (a[i] >= a[i - 1])
//			i++;
//		else
//			cout << "�������������֣�";
//	}
//	cout << endl;
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << endl;
//	while (flag)
//	{
//		cout << "��������Ҫ���ҵ���" << endl;
//		cin >>number;
//		sign = false;                            //signΪ�ٱ�ʾ��δ�ҵ�
//		top = 0;								 //topΪ�����������ʼλ��
//		bott = n - 1;							 //bottΪ���ҵ���ĩλ��
//		if ((number < a[0]) || (number > a[n - 1]))
//			loca = -1;
//		while ((!sign) && (top <= bott))
//		{
//			mid = (top+bott) / 2;					 //�ҳ��м�Ԫ���±�
//			if (number == a[mid])
//			{
//				loca = mid;
//				cout << "�ҵ�" << number << "���±�Ϊ��" << loca+1 << endl;
//				sign = true;
//			}
//			else if (number < a[mid])
//				bott = mid - 1;
//			else
//				top = mid + 1;
//		}
//		if (!sign || loca == -1)
//			cout << "û�ҵ�" << endl;
//		cout << "��Ҫ������?��Y/N)" << endl;
//		cin >> c;
//		if (c == 'N' || c == 'n')
//			flag = false;
//
//			
//	}
//	return 0;
//}