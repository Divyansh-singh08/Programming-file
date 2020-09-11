#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[20]="hello";
	char b[20]="";

	strncpy(b,a,3);
	cout<<b<<endl;
	return 0;
}
