#include<iostream>
using namespace std;
int main()
{
	int n,i,prod;
	cout<<"Enter the number which do u want to see the multiplication:";
	cin>>n;
	for(i=1;i<=10;i++)
	prod=n*i;
	cout<<n<<" X "<<i<<" = "<<n*i;
	cout<<endl;
	return 0;
	
}
