#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char str1[100],str2[100];
	cout<<"enter the string 1:";
	cin.getline(str1,100);
	cout<<"enter string 2:";
	cin.getline(str2,100);
	int c=1,arr[26]={0},arr1[26]={0},i=0,temp,temp1;
	i=0;
	if(strlen(str1)==strlen(str2))
	{
	while(str1[i]!=NULL)
	{
		temp=int(str1[i]-97);
		arr[temp]++;
		i++;
	}
	cout<<"in string 1:";
	i=0;
	for(i=0;i<26;i++)
	{
		if(arr[i]>0)
		{
			cout<<(char)(i+97)<<" occurs "<<arr[i]<<" times"<<endl;
		}
	}
	i=0;
	while(str2[i]!=NULL)
	{
		temp1=int(str2[i]-97);
		arr1[temp1]++;
		i++;
	}
	cout<<"in string 2:\n";
	i=0;
	for(i=0;i<26;i++)
	{
		if(arr1[i]>0)
		{
			cout<<(char)(i+97)<<" occurs "<<arr1[i]<<" times"<<endl;
		}
	}
	i=0;
	for(i=0;i<26;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	i=0;
	for(i=0;i<26;i++)
	{
		cout<<arr1[i];
	
	}
	cout<<endl;
	i=0;
	for(i=0;i<26;i++)
	{
		if(arr[i]!=arr1[i])
		{
			c=0;
			cout<<"not anagram";
			break;
		}
	}
	if(c==1)
	cout<<"anagram";
	
}
else 
cout<<"not anagram";
}
