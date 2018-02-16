#include<stdio.h>
main()
{
	char str[10]="hello";
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",str[j]);
		}
		printf("\n");
	}
		for(i=0;i<5;i++)
	{
		for(j=4;j>i;j--)
		{
			printf("%c",str[5-j]);
		}
		printf("\n");
	}

}
