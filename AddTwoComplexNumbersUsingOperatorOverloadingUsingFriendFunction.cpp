#include<iostream>
using namespace std;
class complex
{
	int re,img;
	public:
		void getd(){cin>>re>>img;
		}
		friend void operator +(complex c1,complex c2);
		void putd()
		{
			cout<<re<<img;
		}
};
void operator +(complex c1,complex c2)
{
	c1.re=c1.re+c2.re;
	c1.img=c1.img+c2.img;
	cout<<c1.re<<c1.img;
	
}

main()
{
	complex c1,c2,c3;
	c1.getd();
	c2.getd();
	c1+c2;
}
