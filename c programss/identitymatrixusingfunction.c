#include<stdio.h>
void iden(int [3][3],int ,int);
main()
{
	int ar[3][3],i,j,rsize,csize;
	printf("enter the no.of row and column of matrix:");
	scanf("%d%d",&rsize,&csize);
	printf("enter the array elements:");
	for(i=0;i<rsize;i++)
	{
		for(j=0;j<csize;j++)
		scanf("%d",&ar[i][j]);
	}
	printf("original matrix:\n");
	for(i=0;i<rsize;i++)
	{
		for(j=0;j<csize;j++)
		printf("%d ",ar[i][j]);
	printf("\n");
	}
	printf("\n");
	iden(ar,rsize,csize);
}
void iden(int a[3][3],int r,int c)
{
int ch=0,i,j;
	
	
	
			
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				ch++;
			}
			else 
			if(a[i][j]!=0)
			ch++;
			
		}
	}
	if(ch==0)
	printf("identity matrix");
	else
	printf("not an identity matrix:");
}
