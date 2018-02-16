#include<stdio.h>
struct cx
{
	int real;
	int img;
}c1,c2;
main()
{
	printf("enter real part of 1st no.");
	scanf("%d",&c1.real);
	printf("enter img part of 1st no.");
	scanf("%d",&c1.img);
printf("enter real part of 2nd no.");
	scanf("%d",&c2.real);
printf("enter img part of 2nd no.");
	scanf("%d",&c2.img);
printf("1st no is:%d+%di \n 2nd no is %d+%di\n",c1.real,c1.img,c2.real,c2.img);
printf("the sum of it is %d+%di\n",c1.real+c2.real,c1.img+c2.img);
}
