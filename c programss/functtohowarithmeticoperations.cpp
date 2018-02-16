#include<stdio.h>
main()
{
	float add(float,float);
	float multiply(float,float);
	float divide(float,float);
	float subtract(float,float);
	float a,b,c,d,n1,n2;
	printf("enter the values of n1 and n2:");
	scanf("%f%f",&n1,&n2);
	a=add(n1,n2);
	b=subtract(n1,n2);
	c=multiply(n1,n2);
	d=divide(n1,n2);
	printf("n1+n2=%f \n n1-n2=%f \n n1*n2=%f \n n1/n2=%f \n ",a,b,c,d);	
}
float add(float a,float b)
{
	return a+b;
}
float subtract(float a,float b)
{
	return a-b;
}
float multiply(float a,float b)
{
return a*b;
}
float divide(float a,float b)
{
	return a/b;
}
