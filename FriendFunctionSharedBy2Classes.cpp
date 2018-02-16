#include<iostream>
using namespace std;
class A;
class B;
//void add(A,B);
class A{
	private:
		int a;
		public:
			A(){
				a=100;
			}
			friend void add(A,B);
};
class B{
	private:
		int b;
		public:
			B(){
				b=100;
			}
			friend void add(A,B);
};
void add(A aobj,B bobj){
	cout<<(aobj.a+bobj.b);
}
main(){
	A a1;
	B b1;
	add(a1,b1);
}
