#include<iostream>
using namespace std;
namespace atul{
	int a=100;
	void read(){
		cin>>a;
		cout<<a;
	}
}
namespace aaa{
	int m=20,n=100;
}
using namespace atul;
using aaa::m;
main(){
	cout<<atul::a<<endl;
	read();
	cout<<m<<aaa::n;
}

