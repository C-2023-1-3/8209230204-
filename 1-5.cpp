#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F,C;
	cout << "�����뻪���¶ȣ�";
	cin >> F;cout<<endl;
	C = (F - 32) / 1.80;
	cout << "�任��Ϊ�����¶�Ϊ��"<<fixed<< setprecision(2)<< C<<endl;

	return 0;



}