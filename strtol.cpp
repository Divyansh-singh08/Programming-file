#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[50]="254";
	char b[50]="98.25";
	long int x=strtol(a,NULL,50);
	float y=strtof(b,NULL);
	cout<<x<<endl<<y<<endl;
	return 0;
	
}
