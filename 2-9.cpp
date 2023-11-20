#include<iostream>
using namespace std;
int main()
{
	double a=0.8,d;
	int b, c = 1, e = 2;
	for (b = 2,e=2;e <= 100;)
	{
		d = (a * b) / c;
		e = e * 2;
		b = e + b;
		c++;

	}
		cout << "每天平均花" << d << "元";

	return 0;
}