#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s1[50]="programming";
	char s2[50]="gramM";
    if(strstr(s1,s2)!=NULL)
	cout<<strstr(s1,s2)<<endl;
    else
    cout<<"not finding"<<endl;
	return 0;
}
