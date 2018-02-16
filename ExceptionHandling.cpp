#include<iostream>
using namespace std;
main(){
	int mark;
	cin>>mark;
	try{
		
	if(mark>=0&&mark<=33)
		throw(mark);
	//else break;
	}
	catch(int m)
	{
		while(mark>=0&&mark<=20)
		{
			cout<<"re-enter the mark";
			cin>>mark;
		}
		cout<<"mark="<<mark;
	}
	
}

