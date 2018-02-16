#include<stdio.h>
int i,fibo(int);
void main()
{
	int n;
	printf("enter the no of terms in the series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	printf("\nfibo(%d)=%d",i,fibo(i));
	
}
int fibo(int num)
{
	if(num<=2)
	return 1;
	return(fibo(num-1)+fibo(num-2));
}

