#include<iostream>
using namespace std;
int main()
{
	char x;
	int a = 1, b = 0, c = 0, d = 0;
	cout << "������һ���ַ���\n";
	cin >> x;cout << endl;
	while ((x = getchar()) != '\n')
	{
		if (x <= 'z' && x >= 'a' || x <= 'Z' && x >= 'A')
			a++;
		else if (x == ' ')
			b++;
		else if (x <= '9' && x >= '0')
			c++;
		else
			d++;
	}

	cout << "�����ַ���" << endl;
	cout << "Ӣ����ĸ��" << a << "��" << endl;
	cout << "�ո���" << b << "��" << endl;
	cout << "�����ַ���" << c << "��" << endl;
	cout << "�����ַ���" << d << "��" << endl;

	return 0;
}