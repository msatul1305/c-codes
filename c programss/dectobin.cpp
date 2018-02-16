#include<stdio.h>
#include<math.h>
int main()
{
	int dec,r,bin,i=0;
	printf("enter decimal");
	scanf("%d",&dec);
	while(dec!=0)
	{
		r=dec%2;
		bin+=r*pow(10,i);i++;
		dec/=2;
	}
	
	printf("%d",bin);
	
	
}
