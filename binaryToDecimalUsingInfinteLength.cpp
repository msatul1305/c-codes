#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;

main()
{
	char ch='y';
	long long int dec=0;
	char bin[1000];
	int rem=0,i=0,l,j;
	while(ch=='y')
	{
		cin>>bin;
		j=l=strlen(bin);
		cout<<j<<l<<endl;
	while((j--)>0)
	{
		rem=bin[l-i-1]-48;
		cout<<"rem="<<rem<<endl;
		dec+=(rem*pow(2,i++));
		cout<<"dec="<<dec<<endl;
	}
	cout<<"decimaL is:"<<dec<<endl;
	cout<<"do you want more:";
	cin>>ch;
		dec=0;
		rem=0;
		i=0;
}

}
