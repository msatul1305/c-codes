#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int count=0,i,sum=0,a[i];
	long long int num;
	printf("enter a binary no:");
	scanf("%lld",&num);
	for(i=0;num>0;i++)
	{
		a[i]=num%10;
		num=num/10;
		count++;
	}
	for(i=0;i<count;i++)
	{
		sum=sum+(a[i]*pow(2,i));
	}
	printf("decimal equivalent=%d",sum);
	getch();
}
