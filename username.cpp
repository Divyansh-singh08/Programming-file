// write a code about finding username in gmail
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter the string as gmail-name:"<<endl;
	string a;
	getline(cin,a);
	int b=(int)a.find('@');
	cout<<b;
	string c=a.substr(0,b);
	cout<<c;
	return 0;
}
