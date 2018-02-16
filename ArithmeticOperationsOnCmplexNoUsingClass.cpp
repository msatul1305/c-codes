#include<iostream>
#include<math.h>
using namespace std;
class complex
{
	float real;
	float img;
	public:
		void read();
		void disp();
		complex add(complex);
		complex sub(complex);
		complex multiply(complex);
		complex div(complex);
		};
	void complex::read()
		{
			cin>>real;
			cin>>img;
		}
		complex complex::add(complex c)
		{
		complex temp;
		temp.real=real+c.real;
		temp.img=img+c.img;
		return temp;
		}
		
		complex complex::sub(complex c)
		{
		complex temp;
		temp.real=real-c.real;
		temp.img=img-c.img;
		return temp;
		}
		
		complex complex::multiply(complex c)
		{
		complex temp;
		temp.real=real*c.real-img*c.img;
		temp.img=real*c.img+c.real*img;
		return temp;
		}
		
		
		complex complex::div(complex c)
		{
		complex temp;
		temp.real=(real*c.real+img*c.img)/(sqrt(c.real*c.real+c.img*c.img));
		temp.img=(img*c.real-real*c.img)/(sqrt(c.real*c.real+c.img*c.img));
		
		return temp;
		}
	void complex::disp()
		{
			cout<<real;
			cout<<img;
		}

		
main()
{
	complex c1,c2,c3;
	c1.read();
      cout<<"contents of c1=";
      c1.disp();
	cout<<endl;
	c2.read();
	cout<<"contents of c2=";
	c2.disp();
	cout<<endl;
	c3=c1.div(c2);
	c3.disp();
	
}
