#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main()
{
	string a;
	cout<<"enter the string:-"<<endl;
	getline(cin,a);
	cout<<a<<endl;
	cout<<a.length()<<endl;//length 
	cout<<a.size()<<endl;//size
	cout<<a.capacity()<<endl;//compiler capacity it own memory
	cout<<a.max_size()<<endl;
	cout<<a.empty()<<endl;
	return 0;
	 
}
