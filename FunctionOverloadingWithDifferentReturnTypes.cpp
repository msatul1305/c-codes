#include<iostream>
using namespace std;
int addiyion(int,int);
float addiyion(int,int);
main(){
	int x;
	x=addiyion(10,20);
	float y;
	y=addiyion(10,20);
	cout<<x<<" "<<y;
}
int addiyion(int a,int b){
	return a+b;
}
float addiyion(int a,int b){
	return a/b;
}
