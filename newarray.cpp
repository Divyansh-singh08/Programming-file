#include<iostream>
using namespace std;
int main()
{
	int A[2][3]={2,4,3,6,5,8};
	for(auto ++&x:A)
	{
		for(auto ++&y:x)
		{
			cout<<y<<" ";
		}
		cout<<endl;
	}
	return 0;
}
