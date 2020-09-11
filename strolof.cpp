#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout<<"enter the charecter:-"<<endl;
	char r[100];
	cin.getline(r,100);
	char s[100];
	cin.getline(s,100);
	long int x=strtol(r,NULL,10);
	float y=strtof(s,NULL);
	cout<<x<<endl<<y<<endl;
	return 0;
	
}
