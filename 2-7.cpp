#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	for (a = 1;a < 6;a++)
	{
		cout << endl;
		for (b = 1;b <= a;b++)
			cout << "*";
		for (c = 1;c <= 5 - a;c++)
			cout << " ";
	}
	return 0;
}