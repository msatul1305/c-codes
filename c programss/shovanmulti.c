#include<stdio.h>
#include<conio.h>
int main()
{
	int sum=0,row_1,col_1,row_2,col_2,i,j,k,a[4][4],b[4][4],c[4][4];
	printf("enter the no of rows and columns of 1st matrix\n");
	scanf("%d%d",&row_1,&col_1);
	printf("enter the elements of 1st matrix:\n");
	for(i=0;i<row_1;i++)
	{
		for(j=0;j<col_1;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<row_1;i++)
	{
		printf("\n");
		for(j=0;j<col_1;j++)
		printf("%d ",a[i][j]);
	}
	
	printf("\nenter the no of rows and columns of 2nd matrix:\n");
	scanf("%d%d",&row_2,&col_2);
	printf("enter the elements of 2nd matrix:\n");
	for(i=0;i<row_2;i++)
	{
		for(j=0;j<col_2;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<col_1;i++)
	{
		printf("\n");
		for(j=0;j<row_1;j++)
		printf("%d ",b[i][j]);
	}
	if(row_2==col_1)
	{
		for(i=0;i<row_1;i++)
		{
		
			for(j=0;j<col_2;j++)
			{
				for(k=0;k<col_1;k++)
				{
					sum+=(a[i][k]*b[k][j]);
				}
			c[i][j]=sum;sum=0;
			}
		}
		printf("resultant matrix after multiplication:");
		for(i=0;i<row_1;i++)
		{
			printf("\n");
			for(j=0;j<col_2;j++)
			{
				printf("%d ",c[i][j]);
			}
		}
	}
	else
	{
		printf("multiplication not possible");
		
	}
}gyty
