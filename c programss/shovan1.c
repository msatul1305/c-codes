#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("enter the 1st matrix:");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	
		scanf("%d",&a[i][j]);
}
	for(i=0;i<3;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)
		printf("%d  ",a[i][j]);
	}
	printf("\nenter the 2nd matrix:");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
		scanf("%d",&b[i][j]);
	}
	for(i=0;i<3;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)
		printf("%d  ",b[i][j]);
	}
	
	printf("\nmatrix after addition:\n");
	
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	c[i][j]=a[i][j]+b[i][j];
   }
	for(i=0;i<3;i++)
	{
	printf("\n");
	for(j=0;j<3;j++)		
		{
		printf("%d ",c[i][j]);
	}
}
	getch();
	return 0;
}
