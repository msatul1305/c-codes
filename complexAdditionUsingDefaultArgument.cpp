#include<iostream>
using namespace std;
class complex
{
	int re,img;
	public:
	void input(int r,int i=10)
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
main()
{
	complex c1,c2;
		c1.input(5,3);
		c2.input(1);
		c1.sum(c2);
		c1.disp();
}
