#include<stdio.h>
#include<conio.h>
int main()
{
	int a[50],i,pos,n,temp;
	printf("enter size of array (max 50):");
	scanf("%d",&n);
	printf("enter your elements..(max 50):");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter pos you want to delete");
	scanf("%d",&pos);
	for(i=pos;i<n;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	for(i=0;i<n-1;i++)
	printf("%d",a[i]);
	getch();
	return 0;
	}

