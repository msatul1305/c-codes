#include<iostream>
using namespace std;
class complex
{
	int x;
	public:
		complex()
		{
			x++;
		}
		void disp()
		{
			cout<<x<<endl;
		}
};
main()
{
	complex s1,s2;
	s1.complex();
	s1.disp();
	s2.complex();
	s2.disp();
	s1.disp();
}
