#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"Enter the string"<<endl;
	string y;
	string z;
	getline(cin,z);
	string::reverse_iterator it;
	for(it=z.rbegin();it!=z.rend();it++)
	{
		y.push_back(*it);
	}
	if(!z.compare(y))
	   cout<<"palindrome no:-"<<endl;
	else
	   cout<<"not a palindrome:-"<<endl;
	   return 0;   

}
