#include<iostream>
using namespace std;
int division(int a,int b)
{
	if(b==0)
	throw 1;
	return a/b;
}
int main()
{
	int x,y,z;
	cout<<"Enter the value "<<endl;
	cin>>x>>y;
	try
	{
		z=division(x,y);
		cout<<z<<endl;
		
	}
	catch(int i )
	{
		cout<<"hello duniya"<<i<<" "<<endl;
	}
}
