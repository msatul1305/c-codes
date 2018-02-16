#include<iostream>
using namespace std;
void divide(int,int,int);
main(){
	try{
		divide(10,20,30);
		divide(10,10,20);
	}
	catch(int i)
	{
		cout<<"Exception caught!";
	}
}
void divide(int a,int b,int c)
{
	if((a-b)!=0)
	{
		int res=c/(a-b);
		cout<<res;
	}
	else throw(a-b);
}
