// write a code about finding username in gmail
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter the string as gmail-name:"<<endl;
	string a;
	getline(cin,a);
	//int b=(int)a.find('@');
	//cout<<b<<endl;
	//string c=a.substr(0,b);
	//cout<<c;
	for(int i=0;a[i]!=0;i++)
	{
		if(a[i]=='@')
		return 0;
		else
		cout<<a[i];
	}
	return 0;
}
