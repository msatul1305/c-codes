#include<stdio.h>
int main()
{
	int i,j,k,m;
	for(i=0;i<4;i++)
	{
	k=1;
	printf("\n");
	for(j=0;j<4;j++)
	{
	if(i+j<=2)
	printf(" ");
	else
	{
	printf("%d",k);
	k++;
}
}
for(m=0;m<i;m++)
{
	printf("%d",k);
	k++;
}
}

	return 0;
}
