//Find the length of the string using iterators:-
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter the string "<<endl;
	string t;
	getline(cin,t);
	//string::iterator le;
	int count=0;
	//for(le=t.begin();le!=t.end();le++)
	for(int i=0;t[i]!='\0';i++)
	{
		count++;
	}
	cout<<"length is:-"<<count<<endl;
	return 0;
}
