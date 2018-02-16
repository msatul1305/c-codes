#include<iostream>
using namespace std;
class a{
	public:
		void ball()
		{
			cout<<"base";
		}
		
};
class b:public a{
	public:void ball(){
		cout<<"derieved";
	}
};
main()
{
	a *a1;
	b ob;
	a1=&ob;
	a1->ball();
	
}
