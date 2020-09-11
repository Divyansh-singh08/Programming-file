#include<iostream>
using namespace std;
int main()
{
	int ba,pa,pd;
	float netsalary;
	cout<<"enter the value as u need";
	cin>>ba>>pa>>pd;
	netsalary=ba+ba*pa/100-ba*pd/100;
	cout<<netsalary;
	return 0;
}
