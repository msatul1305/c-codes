#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int r,i,num,a[i];
	long long int sum=0;
	printf("enter a decimal no:");
	scanf("%d",&num);
	for(i=0;num>0;i++)
	{
		r=num%2;
		num=num/2;
		sum=sum+(r*pow(10,i));
	}
	printf("binary equivalent=%lld",sum);
	getch();
}
