#include<stdio.h>
main()
{
	int a[3][3],i,n,j,chek=0;
	printf("enter the n value of n*n matrix");
	scanf("%d",&n);
	printf("enter the array elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				if(a[i][j]!=1)
				chek++;
			}
			else 
			if(a[i][j]!=0)
			chek++;
			
		}
	}
	if(chek==0)
	printf("identity matrix");
	else
	printf("not an identity matrix:");
}
