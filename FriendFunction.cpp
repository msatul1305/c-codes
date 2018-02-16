#include<iostream>
using namespace std;
class a{
	int a1;
	public:
	a(){
	a1=100;
	}
	friend void add(a a11);
};
void add(a a11){
	//cout<<a1;
	a11.a1=100;
	cout<<a11.a1;
}
main(){
	a a1;
	add(a1);
}
