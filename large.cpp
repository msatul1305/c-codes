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
		int large(){
		int i,j,large;
		for(i=0;i<5;i++)
		for(j=i+1;j<5;j++)
		if(a[i]>a[j])	
		large=a[i];
		else
		large=a[j];
		return large;
		}
		
};
main(){

Add a;
a.input();
int k=a.large();
cout<<"lareg is "<<k;
}
