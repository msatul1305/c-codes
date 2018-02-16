#include <iostream>
using namespace std;

int main() 
{
    int t,i,j;
    cin>>t;
    int a[t]={0};
    for(i=0;i<t;i++)
    {
        cin>>j;
        a[j]+=1;
    }
    for(i=0;i<t;i++)
    {
            while(a[i]>0)
            {
                cout<<i<<"\n";
                a[i]--;
            }  
    }
    return 0;
}
