#include<iostream>
using namespace std;
class a
{
	int k;
	public:
		a(int k=0)
		{
			this->k=k;
			cout<<"a"<<k<<endl;
		}
		~a()
		{
			cout<<"Da\n";
		}
};
class b
{
	public:
		b()
		{
			cout<<"b\n";
		}
		~b()
		{
			cout<<"Db\n";
		}
};
class c:public a
{
	public:
		c()
		{
			a(10);	
			cout<<"c\n"; 
		}
			                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
		~c()
		{
			cout<<"Dc\n";
		}
};
main()
{
	//a a1;
//	b b1;
	c c1;
}
