#include<iostream>
using namespace std;
main()
{
	char str[100];
	int i,j,arr[26]={0};
	int temp;
	cin.getline(str,100);
	for(i=0;str[i]!=NULL;i++)
	{
	for(j=i+1;str[j]!=NULL;j++)
	{
		if(str[i]==str[j])
		{
			temp=str[i];
			arr[temp-96]++;
		}
		}	
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]>0)
		cout<<char(i+96);
	}
}
