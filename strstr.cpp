#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100]="greatpeoples";
	char b[100]="peoplesis";
    if(strstr(a,b)!=NULL)
	cout<<strstr(a,b)<<endl;
	else
	cout<<"not found:-"<<endl;
	return 0;
}
