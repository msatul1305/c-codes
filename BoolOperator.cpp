#include<iostream>
using namespace std;
class complex{
	double re;
	double im;
	public:
		complex():re(1),im(0.5){}
		bool operator ==(complex &rhs);
		operator int(){}
};
bool complex::operator ==(complex &rhs){
	if((this->re==rhs.re)&&(this->im==rhs.im))return true;
	else return false;
}
main(){
	complex c1;
	cout<<c1;
}
