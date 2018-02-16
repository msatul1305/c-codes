#include <iostream>
using namespace std;

int main() 
{
    int t,a[1000],i,j,temp=-1;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<t-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<"\n";
    }
	return 0;
}

