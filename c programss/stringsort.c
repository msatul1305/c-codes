#include<stdio.h>
main()
{
	char str[100][100];
	int n,i,j;
	printf("enter the no of strings you want:");
	scanf("%d",&n);
	printf("enter the string:");
	for(i=0;i<n;i++)
	{
		scanf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%s",str[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=1;j<n-i-1;j++)
		{
		if(str[i])	
		}
	}
	
}
