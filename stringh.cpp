#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout<<"Enter the 1 string:-\n"<<endl;
	char a[100];
	cin.getline(a,100);
	cout<<"Enter the 2 string:-\n"<<endl;
	char b[100];
	cin.getline(b,100);
	strcat(a,b);
	strncat(a,b,4);
	cout<<a<<endl;
	return 0;
}
