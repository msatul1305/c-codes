#include<iostream>
using namespace std;
void divide(double x,double y){
	try{
		if(y==0.0)throw y;
		else cout<<x/y;
	}
	catch(double){
		cout<<"exception caught!";
		throw;
	}
}
main(){
	try{
		
		divide(20.0,0.0);
		divide(10.5,2.0);
	}
	catch(double){
		cout<<"\nexception caught inside main"<<endl;
	}
}
