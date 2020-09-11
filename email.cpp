#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"ENTER your email-address:-"<<endl;
	string a;
	getline(cin,a);
	int x=(int)a.find('@');
	string b=a.substr(0,x);
	cout<<"username:-"<<b<<endl;
	return 0;
}
