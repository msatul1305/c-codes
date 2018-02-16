#include<stdio.h>
int fibo(int,int);
int main()
{
int i=0,j=1;
 fibo(i,j);
 
}
int fibo(int a,int b)
{
	int c;
	c=a+b;
	a=b;
	b=c;
	printf("%d ",c);
	while(c<10)
	{
	if(c>10)
		break;
		else
		fibo(a,b);
	}
	return 0;
}
