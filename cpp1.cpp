#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"hello"<<a;
	{
		int a=20;
		cout<<"inside loop"<<a;
	}
	cout<<" "<<a;
}
