#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5][5],b[5][5],c[5][5],i,j,k,r1,r2,c1,c2;
	printf("enter the no.of rows and columns in mat1 (max5):");
	scanf("%d%d",&r1,&c1);
	printf("enter the no.of rows and columns of mat.2 (max 5):");
	scanf("%d%d",&r2,&c2);
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			c[i][j]=0;
		}
	}
	if(c1==r2)
	{
		printf("enter 1st matrix elements:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a[i][j]);
			}
		}
			printf("enter 2nd matrix elements");
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
				for(k=0;k<c2;k++)
				{
					c[i][j]+=(a[i][k]*b[k][j]);
				}
			}
		}
		printf("multiplied matrix is:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d \t",c[i][j]);
			}
		printf("\n");
	}
}
	else
	printf("matrix multiplication not possible");
getch();
return 0;
}
	
