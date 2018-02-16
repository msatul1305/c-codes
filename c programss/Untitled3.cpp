#include <iostream>
using namespace std;

int main() 
{
    int t,i,j,min,temp;
    cin>>t;
    int a[t];
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<t;i++)
    {
    	min=i;
        for(j=0;j<t-i-1;j++)
        {
        	if(a[min]>a[j])
				min=j;  
        }
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<t;i++)
    {
        cout<<a[i]<<"\n";
    }
	return 0;
}

