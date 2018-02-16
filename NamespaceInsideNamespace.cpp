#include<iostream>
using namespace std;
namespace m{
	int m1=100;
	namespace n{
		int n1=20;
	} 
}
namespace a{
	int x=10,y=20;
	int add(int x,int y){
		return x+y;		
	}
}
using namespace m;
using namespace m::n;
using namespace a;
main(){
	//cout<<m1<<m::n::n1;
	//cout<<m1<<n1;
	cout<<add(0,0);
}
