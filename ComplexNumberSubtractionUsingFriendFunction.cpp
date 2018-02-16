#include<iostream>
using namespace std;
class complex
{
	int re,img;
	public:
	void input(int r,int i)
	{
		re=r;
		img=i;
	}
	friend complex subt(complex,complex);
	friend void disp(complex);	
};
complex subt(complex c1,complex c2)
	{
		complex c3;
	c3.re=c1.re-c2.re;
	c3.img=c1.img-c2.img;
	return c3;
	};
	void disp(complex c)
	{
		cout<<c.re<<"+";
		cout<<c.img<<"i";
	}
main()
{
	complex c1,c2,c3;
		c1.input(5,3);
		c2.input(1,5);
		c3=subt(c1,c2);
		disp(c3);
}
