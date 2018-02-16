#include<stdio.h>
int main()
{
	int n;
	float sum=0,i;
	printf("enter no of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
    {
    	sum=sum+(i/(i+1));
	}
	printf("sum=%f",sum);
}
