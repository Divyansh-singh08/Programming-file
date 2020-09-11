#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	cout<<"Enter the 1st string:-"<<endl;
	string x;
	getline(cin,x);
	char z[10];
	x.copy(z,x.length());
	cout<<z<<endl;
	return 0;
	
}

