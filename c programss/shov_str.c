#include<stdio.h>
#include<string.h>
void main()
{
	char name[5][10],tname[5][10],temp[10];
	int i,j,n,k;
	printf("enter the total no of names:");
	scanf("%d",&n);
	printf("enter the names:");
	for(i=0;i<=n;i++)
	{
		gets(name[i]);
		strcpy(tname[i],name[i]);
		
	}
	for(i=0;i<=n;i++)
{
	for(j=i+1;j<=n;j++)
	{
		k=strcmp(name[i],name[j]);
		if(k>0)
		{
			strcpy(temp,name[i]);
			strcpy(name[i],name[j]);
			strcpy(name[j],temp);
		}
	}
}
printf("input name            sorted name");
for(i=0;i<=n;i++)
{
	printf("%s\t\t",tname[i]);
	printf("%s\n",name[i]);
}
}
