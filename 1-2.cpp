#include<iostream>
using namespace std;

 int main()
{
	 double r,h,P;
	 P = 3.14159;
	 cout << "请输入圆锥底的半径：";
	 cin >> r;cout << endl;
	 cout << "请输入圆锥的高：";
	 cin >> h;cout << endl;
	 double V = P*r*r*h/3;
	 cout << "圆锥的体积为：" << V << endl;
	 return 0;

 }
