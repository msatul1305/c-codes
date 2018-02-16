#include<bits/stdc++.h>
using namespace std;
void insert(int arr[],int n)
{
	int i,j,k,temp;
	for(i=0,j=1;i<n-1;i++,j++)
	{
		if(arr[i]>arr[j])
		{
			temp=arr[j];
			k=i;
			while(k>=0 && arr[k]>temp)
			{
				arr[k+1]=arr[k];
				k--;
			}
			arr[k+1]=temp;
		}
	}
}
int main()
{
	int i,n;
	cout<<"Enter no. of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elements:\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insert(arr,n);
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
