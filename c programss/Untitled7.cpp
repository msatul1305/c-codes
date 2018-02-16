#include<stdio.h>
#include<math.h>
void tri(int,int,int);
float area(float,float,float);
int main()
{
	int a,b,c;
	float ar;
	printf("enter the sides:");
	scanf("%d%d%d",&a,&b,&c);
	tri(a,b,c);
	ar=area(a,b,c);
	printf("\narea=%f",ar);
	return 0;
	
}
void tri(int a,int b,int c)
{
	if(a+b>c||b+c>a||a+c>b)
	{
		if(a==b&&b==c)
		printf("equilateral triangle");
		else if((a==b&&a!=c)||(b==c&&b!=a)||(c==a&&c!=b))
		printf("isosceles triangle");
		else if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
		printf("right triangle");
		else
		printf("normal triangle");
	}
	else
	printf("\nnot a triangle");
	
}
float area(float a,float b,float c)
{
	float s,ar;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
