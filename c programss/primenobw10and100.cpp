#include<stdio.h>
main()
{
	int i,j,a,temp,c=0;
	for(i=10;i<=100;i++)
	{
		a=i;c=0;
		for(j=2;j<=a/2;j++)
		if(a%j==0)
		c++;
		if(c==0)
		printf("%d ",a);
	}
}
