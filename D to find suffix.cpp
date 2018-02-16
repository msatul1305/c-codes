#include<iostream>
using namespace std;
int main()
{
	int i,j;
	char str[10];
	cout<<"Enter a string:";
	cin>>str;
	for(i=0;i<6;i++)
	{
		cout<<"\n";
		
		for(j=0;j<=i;j++)
		{
			cout<<""<<str[j];
		}
	}
	return 0;
}
