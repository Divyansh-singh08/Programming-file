#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter the string-:"<<endl;
	string rev="";
	string a;
	getline(cin,a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>=65 && a[i]<=90 )
		a[i]+=32;
	}
	cout<<a<<endl;
	int len=(int)a.length();
	rev.resize(len);
	for(int i=0,j=len-1;i<len;i++,j--)
	{
		rev[i]=a[j];
	}
	rev[len]='\0';
	if(!a.compare(rev))
	cout<<"\npalindrome";
	else
	cout<<"\nnot a pallindrome";
	return 0;
}
