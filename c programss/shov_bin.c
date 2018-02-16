#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int r,i,sum=0;
	long long int num;
	printf("enter a binary no:");
	scanf("%lld",&num);
	for(i=0;num>0;i++)
	{
		r=num%10;
		num=num/10;
		sum=sum+(r*pow(2,i));
	}
	printf("decimal equivalent=%d",sum);
	getch();
}
