#include<stdio.h>
int main()
{
	int a[100],i,n,temp,j;
	printf("enter no.of elements in array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		if(a[j]>a[j+1])
		{
		temp=a[j+1];
		a[j+1]=a[j];
		a[j]=temp;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d \t",a[i]);
	}
return 0;
}
