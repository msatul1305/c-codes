#include<stdio.h>
void swap(int,int);
main()
{
	int a,b;
	printf("enter a and b:");
	scanf("%d%d",&a,&b);
	printf("values before swap:a=%d,b=%d\n",a,b);
	swap(a,b);
	
}
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d,b=%d",a,b);
	}
