#include<iostream>
using namespace std;
void bubble(int [],int);
main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	bubble(a,n);
}
void bubble(int a[],int n){
	int temp;
	int flag=0;
	//for(int i=0;i<n-1;i++){
	//	for(int j=0;j<n;j++){
	for(int i=0;i<n;i++){
		flag=0;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)break;
		cout<<"array after pass "<<i+1<<"=";
		for(int k=0;k<n;k++)
			cout<<a[k]<<" ";
			cout<<endl;
	}
}
