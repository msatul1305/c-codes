#include<iostream>
using namespace std;
class complex
{
int re,img;
public:
	complex(int x,int y)
	{
		re=x;
		img=y;
		}
		void disp()
			{
				cout<<re<<" + "<<img<<endl;
			}
		friend void operator +(complex &c1,complex &c2);
};
	 void operator +(complex &c1,complex &c2)
		{
			c1.re=c1.re+c2.re;
			c1.img=c1.img+c2.img;
			}	
			
main()
{
	complex c1(3,4),c2(5,6);
	c1+c2;
	c1.disp();
	
}
