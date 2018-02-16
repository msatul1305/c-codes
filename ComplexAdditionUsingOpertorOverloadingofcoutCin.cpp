#include<iostream>
using namespace std;
class complex{
	int re,img;
	public:
		friend complex operator +(complex,complex);
		friend istream &operator >>(istream &din,complex &c);
		friend ostream &operator <<(ostream &dout,complex &c);
};
complex operator +(complex c1,complex c2)
{
	complex c3;
	c3.re=c1.re+c2.re;
	c3.img=c1.img+c2.img;
	return c3;
}
istream &operator >>(istream &din,complex &c)
{
	din>>c.re;
	din>>c.img;
}
ostream &operator <<(ostream &dout,complex &c)
{
dout<<c.re<<c.img;	
}

main()
{
	complex c1,c2,c3;
	cout<<"enter the complex nos:";
	cin>>c1>>c2;
	c3=c1+c2;
	cout<<c3;
}

