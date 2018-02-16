#include<stdio.h>
#include<math.h>
void tri(int,int,int);
int area(int,int,int);
int main()
{
	int a,b,c,ar;
	printf("enter the sides:");
	scanf("%d%d%d",&a,&b,&c);
	tri(a,b,c);
	ar=area(a,b,c);
	printf("area=%d",ar);
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
int area(int a,int b,int c)
{
	int s,ar;
	s=(a+b+c)/2;
	ar=sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
