#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char z[50]="x=20;y=50;a=100";
	// cout<<strtok(z,"=;")<<endl;
	char *token=strtok(z,"=;");
	while(token!=0)
	{
		cout<<token<<endl;
		token=strtok(0,"=;");
	}
	return 0;
}
