#include<iostream>
using namespace std;
int main()
{
	int A[]={2,4,6,8,9};
	int *p=&A[3];
	cout<<p<<endl;
	
	cout<<*p<<endl;
	cout<<&p<<endl;
	cout<<*A[]<<endl;
	return 0;
}
