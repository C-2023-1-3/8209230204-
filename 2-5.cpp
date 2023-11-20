#include<iostream>
using namespace std;
int main()
{
	char x;
	int a = 1, b = 0, c = 0, d = 0;
	cout << "请输入一行字符：\n";
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

	cout << "该行字符中" << endl;
	cout << "英文字母有" << a << "个" << endl;
	cout << "空格有" << b << "个" << endl;
	cout << "数字字符有" << c << "个" << endl;
	cout << "其它字符有" << d << "个" << endl;

	return 0;
}