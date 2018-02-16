#include<stdio.h>
int isprime(int);
main()
{
	int r,r1,r2,i;
	printf("enter range->r1 to r2:");
	scanf("%d %d",&r1,&r2);
	for(i=r1;i<=r2;i++)
	{
		r=isprime(i);
		if(r==1)
		printf("%d",i);
	}
}
int isprime(int num)
{
	int j,c=0;
	for(j=0;j<=num/2;j++)
	if(num%j==0)
	c++;
	if(c==0)
	return 1;
	else return 0;
}


