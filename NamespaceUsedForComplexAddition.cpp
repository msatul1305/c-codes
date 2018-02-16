#include<iostream>
using namespace std;
namespace{
	int k=100;
}
namespace n1{
	class complex
{
	int re,img;
	public:
	void input(int r,int i)
	{
		re=r;
		img=i;
	}
	void sum(complex c)
	{
	re=re+c.re;
	img=img+c.img;
	}
	void disp()
	{
		cout<<re<<"+";
		cout<<img<<"i";
	}
	
};
}
using namespace n1;
main(){
		complex c1,c2;
		c1.input(5,3);
		c2.input(1,2);
		c1.sum(c2);
		c1.disp();
		cout<<endl<<k;
}
