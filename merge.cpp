#include<bits/stdc++.h>
using namespace std;
int n;
void merge(int arr[],int f,int b)
{
	int i,m=(f+b)/2,j=f,k=m+1,brr[n];
	for(i=f;i<=b;i++)
	{
		if(j<=m && k<=b)
		{
			if(arr[j]<arr[k])
			{
				brr[i]=arr[j++];
			}
			else
			{
				brr[i]=arr[k++];
			}
		}
		else if(j>m)
		{
			brr[i]=arr[k++];
		}
		else
		{
			brr[i]=arr[j++];
		}
	}
	for(i=f;i<=b;i++)
	{
		arr[i]=brr[i];
	}
}
void mersort(int arr[],int f,int b)
{
	int m=(f+b)/2;
	if(f<b)
	{
		mersort(arr,f,m);
		mersort(arr,m+1,b);
		merge(arr,f,b);
	}
}
int main()
{
	int i;
	cout<<"Enter no. of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	mersort(arr,0,n-1);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
