#include <iostream>
using namespace std;
//brute force
int greatestcommandivisor(int a,int b)
{
int n=min(a,b);{
}
int gcd,i;
i = gcd = 1;
while(i <= n)
    {
        if(a % i ==0 && b % i==0)
        gcd = i;
        i+=1;
}
return gcd;
}
//euclidean algorithem
int greatestcommandivisor2(int a, int b)
{
if(b == 0)
{
  return a;
}
else {
  return greatestcommandivisor2(b,a % b);
}
}

int main()
{
  int a,b;
  cout<<"Enter the two values-:";
  cin>>a>>b;
  int gcd=greatestcommandivisor(a,b);
  int gcd2=greatestcommandivisor2(a,b);
  cout<<"GCD--->brute force-:"<<gcd<<endl;
  cout<<"GCD--->euclidean-:"<<gcd2<<endl;
}
