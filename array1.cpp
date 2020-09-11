#include<iostream>
using namespace std;
int main()
{
	int test[3][3]={{2,4,7},{3,5,8},{12,13,14}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<test[i][j]<<"   ";
		}
		cout<<endl;
	}
	return 0;
}
