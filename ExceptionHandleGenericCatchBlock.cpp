#include<iostream>
using namespace std;
main()
{
int a;
char b;
float c;
cin>>a>>b>>c;
try{
	if(c==1.0)
	throw(c);
}	
catch(...){
	cout<<"Exception Caught!";
}
}
