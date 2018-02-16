#include<bits/stdc++.h>
using namespace std;
int merge (int arr[],int brr[],int n,int m,int c[])
{
	int i,j,k=0,p=0;
	for(i=0,j=0;i<n && j<m;)
	{
		if(arr[i]<=brr[j])
		{
			c[k++]=arr[i++];
			p++;
		}
		else
		{
			c[k++]=brr[j++];
			p++;
		}
	}
	while(i<n)
	{
		c[k++]=arr[i++];
	}
	while(j<m)
	{
		c[k++]=brr[j++];
	}
	return p;
}
int main()
{
	int n,m,i,p;
	cout<<"Enter no. of elements for 1st array: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter no. of elements for 2nd array: ";
	cin>>m;
	int brr[m];
	int c[n+m];
	cout<<"Enter the elements:\n";
	for(i=0;i<m;i++)
	{
		cin>>brr[i];
	}
	p=merge(arr,brr,n,m,c);
	cout<<"Merged Array:\n";
	for(i=0;i<n+m;i++)
	{
		cout<<c[i]<<" ";
	}
	cout<<"\n No. of comparisons: "<<p;
	return 0;
}
