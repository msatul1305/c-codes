#include<iostream>
using namespace std;
int main()
{
	int a[100]={0},n,q,c,r,i,l=0;
	a[0]=1;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		c=0;
		while(a[c]!=0)
		{
			n=a[c]*i+q;
			r=n%10;
			a[c]=r;
			q=n/10;
			c++;
			if(q!=0&&a[c]==-1)
			{
				while(q>0)
				{
					a[c]=q%10;
					q/=10;
					c++;
				}
			}
		}
		
	}
	for(i=0;a[i]!=-1;i++)
	{
		++l;
	}
	cout<<"\n";
	for(i=l;i>=0;i--)
	{
		cout<<a[i];
	}
}
