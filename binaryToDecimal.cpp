#include<iostream>
#include<math.h>
using namespace std;

main()
{
	char ch='y';
	long long int dec=0;
	 long long int bin;
	int rem=0,i=0;

	while(ch=='y')
	{
		cin>>bin;
	while(bin>0)
	{
		rem=bin%10;
		dec+=(rem*pow(2,i++));
		bin=bin/10;
	}
	cout<<"decimaL is:"<<dec<<endl;
	cout<<"do you want more:";
	cin>>ch;
		dec=0;
		rem=0;
		i=0;
}

}
