#include<iostream>
using namespace std;
class a{
	int sum=0;
	public:
		void add(int x,int y)
		{
			cout<<x+y;
		}
};
class b{
	public:
		a a1;
		b(){
		a1.add(10,20);	
		//cout<<a1.sum;
		}
		
};
main(){
	b b1;
}
