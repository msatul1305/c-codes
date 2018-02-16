#include<stdio.h>
int main()
{
	int a[10],i,larg=0,j;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i-1;j++)
		{
			if(a[i]>a[j])
			{
			larg=a[i];
			a[i]=a[j];
			a[j]=larg;
		}
		}
	}
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
	
}
