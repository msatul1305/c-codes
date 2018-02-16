#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	float sq;
	while(1)
	{
		printf("enter the number:");
		scanf("%d",&n);
		if(n>999)
		break;
		else if(n<0)
		continue;
		sq=sqrt(n);
		printf("%f",sq);
	}
}
