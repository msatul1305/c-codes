#include<stdio.h>
void main()
{
	int i,a[5],k=-1,p=-1;
	printf("enter 5 nos:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++)
	{
	k=k>a[i]?k:a[i];
	}
	for(i=0;i<5;i++)
	{
		if(a[i]!=k)
		p=p>a[i]?p:a[i];
		
	}
	if(p==-1)
	printf("\nno 2nd largest no");
	else
	printf("2nd largest no=%d",p);
}
