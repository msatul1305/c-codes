#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],d[5][5],r1,r2,c1,c2,i,j;
	printf("enter the no. of rows and columns of 1st matrix");
	scanf("%d%d",&r1,&c1);
	printf("enter the no.of rows and columns in 2nd matrix");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		
			printf("enter the 1st matrix elements");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter 2nd matrtix elements");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
	}
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
				d[i][j]=a[i][j]-b[i][j];
			}
		}
		printf("added matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d \t",c[i][j]);
			}
			printf("\n");
		}
		printf("subtracted matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d \t",d[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("sorry.matrix operations not possible..");
	}
	getch();
	return 0;
}
