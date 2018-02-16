#include<iostream>
#include<string.h>
using namespace std;
class x{
	protected:
	char ch1[100];
	public:
		x(char c1[100]){
		strcpy(ch1,c1);
		}
		char* get()
		{
			return ch1;
		}
};
class y:public x{
	protected:
	char ch2[100];
	public:
		y(char c1[100],char c2[100]):x(c1){
		strcpy(ch2,c2);
		}
		char *get1(){
			return ch2;
		}
};
class z:public x,public y{
	char ch3[100];
	public:
		z(char c1[100],char c2[100]):y(c1,c2){
		strcat(ch3,get());
		strcat(ch3," ");
		strcat(ch3,y1.get1());
		}
		void disp()
		{
			cout<<"ch1="<<ch1<<endl<<"ch2="<<y1.get1()<<endl<<"ch3="<<ch3;
		}
};
main(){
	//x x1;
	//y y1;
	z z1("atul","kumar");
	z1.disp();
}
