#include<iostream>
using namespace std;
class Add{
	int a[30];
	public:
		void input()
		{
			for(int i=0;i<5;i++)
			cin>>a[i];
		}
		void large(Add );
		void display(){
			for(int i=0;i<5;i++)
			cout<<a[i];
		}
		
};
void Add::large(Add k){
		int i;
		for(i=0;i<5;i++)
		a[i]=a[i]+k.a[i];
}
main(){

Add p,b;
p.input();
b.input();
p.large(b);
p.display();
}
