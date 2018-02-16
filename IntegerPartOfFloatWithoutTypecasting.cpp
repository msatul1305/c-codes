#include<iostream>
using namespace std;
main(){
	float x;
	cin>>x;
	while(x>0){
		cout<<(x%10);
		x=x/10;
	}
}
