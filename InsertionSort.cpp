#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	int v,j;
	for(int i=0;i<n;i++){
		v=a[i];
		j=i;
		while(a[j-1]>v&&j>=1){
			a[j]=a[j-1];
			j--;
		}
		a[j]=v;
		cout<<"array after pass "<<i+1<<"=";
		for(int k=0;k<n;k++){
			cout<<a[k]<<" ";		}
			cout<<endl;
	}
}
