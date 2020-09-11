#include<iostream>
using namespace std;
int main()
{
	int n,m,r,sum;
	m=n;
	cout<<"enter the number";
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	
	if(sum==m)
	cout<<"palindrome no";
	else
	cout<<"not palindrome";

 return 0;
}
