#include<stdio.h>
#include<conio.h>
int main()
{
int a[52],last,i,n,temp,mid,temp1;
printf("enter the size of array (max50):");	
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("original array=");
for(i=0;i<n;i++)
{
	printf("%d\t",a[i]);
}
	printf("\nenter the no. to be inserted at last");
	scanf("%d",&last);
a[n]=last;
printf("new array=");
	for(i=0;i<n+1;i++)
	{
		printf("%d",a[i]);
		printf("\t");
	}
	printf("\nenter the no.to be inserted at middle");
	scanf("%d",&temp);
	if(n%2==0)
	{
		mid=n/2;
	}
	else
	{
		mid=(n+1)/2;
	}
	for(i=n+1;i>=mid;i--)
	{
		temp1=a[i];
		a[i]=a[i+1];
		a[i+1]=temp1;
	}
	a[mid]=temp;
	for(i=0;i<n+2;i++)
	printf("%d\t",a[i]);
	getch();
	return 0;
}
