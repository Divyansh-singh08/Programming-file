#include<iostream>
using namespace std;
int main()
{
	int A[10],n=10,i,key;
	cout<<"Enter the number\n";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	cout<<"Enter the key\n";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(key==A[i])
		{
			cout<<"Element found at \n"<<i<<endl;
			exit(0);
		}
		
	}
	cout<<"element not found\n";
	return 0;
}
