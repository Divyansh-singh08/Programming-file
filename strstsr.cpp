#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100]="greatpeopleis";
	char b[100]="people";
    if(strstr(a,b)!=NULL)
	cout<<a<<endl;
	else
	cout<<"not found:-"<<endl;
	return 0;
}
