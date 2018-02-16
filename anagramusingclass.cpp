#include<iostream>
#include<string.h>
using namespace std;
class strin
{
char str[100];
public:
	void input()
	{
		cout<<"enter the string :";
		cin.getline(str,100);
	}	
	void check(strin s2)
	{
//		cout<<str;
//		cout<<endl<<s2.str;
		int c=1,arr[26]={0},arr1[26]={0},i=0,temp,temp1;
	if(strlen(str)==strlen(s2.str))
	{
	while(str[i]!=NULL)
	{
		temp=str[i]-97;
		arr[temp]++;
		i++;
	}
	cout<<"in string 1:";
	for(i=0;i<26;i++)
	{
		if(arr[i]>0)
		{
			cout<<(char)(i+97)<<" occurs "<<arr[i]<<" times"<<endl;
		}
	}
	i=0;
	while(s2.str[i]!=NULL)
	{
		temp1=s2.str[i]-97;
		arr1[temp1]++;
		i++;
	}
	cout<<"in string 2:\n";
	for(i=0;i<26;i++)
	{
		if(arr1[i]>0)
		{
			cout<<(char)(i+97)<<" occurs "<<arr1[i]<<" times"<<endl;
		}
	}
//	for(i=0;i<26;i++)
//	{
//		cout<<arr[i];
//	}
//	cout<<endl;
//	for(i=0;i<26;i++)
//	{
//		cout<<arr1[i];
//	
//	}
//	cout<<endl;
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
};
main()
{
	strin str1,str2;
	cout<<"string 1:"<<endl;
	str1.input();
	cout<<"string 2:"<<endl;
	str2.input();
	str1.check(str2);
}
