#include<iostream>
using namespace std;
class complex
{
float re,img;
public:
	void getd(){
		cin>>re>>img;
			}
	complex findeq(complex c2)
	{
		float r1=re,r2=c2.re,x1=img,x2=c2.img;
		float dr=(r1+r2)*(r1+r2)+(x1+x2)*(x1+x2);
		complex c;
		c.re=((r1*r2-x1*x2)*(r1+r2)-(r2*x1+r1*x2)*(x1+x2))/dr;
		c.img=((r1+r2)*(r2*x1+r1*x2)-(x1+x2)*(r1*r2-x1*x2))/dr;
		return c;
	}
	void disp()
	{
		cout<<re<<"+i "<<img;
	}
};
main()
{
	complex c1,c2;
	c1.getd();
	c2.getd();
//	c1.disp();
//	cout<<endl;
//	c2.disp();
//	cout<<endl;
	complex c;
	c=c1.findeq(c2);
	c.disp();
}
