#include<iostream>
using namespace std;
int main()
{
	float a, b, c, S;
	cout << "�����������ε������߳���";
	cin >> a >> b >> c;cout << endl;
	if (a + b <= c || a + c <= b || b + c <= a) 
	{
		cout << "���������޷����������Ρ�" << endl;
	}
	else
	{
		S = a + b + c;
		cout << "�������ε��ܳ�Ϊ��" << S << endl;
		if (a == b || a == c || b == c)
		{
			cout << "���������ǵ��������Ρ�" << endl;
		}
		else
		{
			cout << "�������β��ǵ��������Ρ�" << endl;
		}
	}
	return 0;
}