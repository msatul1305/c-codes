#include<stdio.h>
main()
{
	
	int func(int),a;
	printf("enter any no:");
	scanf("%d",&a);
	printf("original value is %d\n",a);
	func(a);
}
func(int a)
{
	a=a*10;
	printf("new value of a in function is:%d",a);
}
