#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F,C;
	cout << "请输入华氏温度：";
	cin >> F;cout<<endl;
	C = (F - 32) / 1.80;
	cout << "其换算为摄氏温度为："<<fixed<< setprecision(2)<< C<<endl;

	return 0;



}