#include<stdio.h>
#include<conio.h>
int main()
{
	int a[10],b[10],c[10],a1,a2,i;
	printf("enter array size of 1st and 2nd array:");
	scanf("%d%d",&a1,&a2);
	printf("enter array 1:");
	for(i=0;i<a1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter array 2:");
	for(i=0;i<a2;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<a1+a2;i++)
	{
		if(i<a1)
		{
			c[i]=a[i];		}
			else
			c[i]=b[i-a1];
	}
	for(i=0;i<a1+a2;i++)
	printf("%d",c[i]);
	getch();
	return 0;
}
