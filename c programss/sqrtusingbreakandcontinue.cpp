#include<stdio.h>
#include<math.h>
int main() 
{
	while(1)
	{
	int n;
	float sq;
	printf("enter the number\n");
	scanf("%d",&n);
	if(n>999)
	break;
	else if(n<0)
	continue;
	sq=sqrt(n);
	printf("%f\n",sq);
    }
	
	
}
