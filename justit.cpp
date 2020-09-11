#include <iostream>
using namespace std;
int main()
    {
        
		int a[100][100],b[100][100],mult[100][100],i,j,r1,r2,c1,c2,k;
        cout<<"enter number of rows and columns in 1st matrix"<<endl;
        cin>>r1>>c1;
        cout<<"enter number of  rows and columns in 2nd matrix"<<endl;
        cin>>r2>>c2;
    if(c1!=r2)

        {
          cout<<"multiplication is not possible "<<endl;
          exit(0);

        }

    else
        { 
          cout<<"values for 1st matrix"<<endl;
          for(i=0;i<r1;i++)
            {
                for(j=0;j<c1;j++)

                   {
                      cout<<"enter the values "<<"a"<<i+1<<":";
					  cin>>a[i][j];
                   }
                cout<<endl;

            }
                cout<<"enter the values for 2nd matrix"<<endl;
                for(i=0;i<r2;i++)
                {
                   for(j=0;j<c2;j++)
                    {
                       cout<<"enter the values "<<"b"<<i+1<<":";
                       cin>>b[i][j];
                    }
                cout<<endl;
				}
                for(i = 0; i < r1; ++i)

                for(j = 0; j < c2; ++j)
                {
                       mult[i][j]=0;
                for(k = 0; k < c1; ++k)
                  {
                        mult[i][j] += a[i][k] * b[k][j]; // [formula for multiplying]
                  }
				}
                    cout << endl << "Output Matrix: " << endl;
                    for(i = 0; i < r1; ++i)
                    for(j = 0; j < c2; ++j)
                 {
                    cout << " " << mult[i][j];
                    if(j == c2-1)
                    cout << endl;
                 }

            }
           return 0;
	}
