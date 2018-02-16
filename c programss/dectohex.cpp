#include<stdio.h>
#include<math.h>
int main()
{
int dec,hex=0,i=0,r;
scanf("%d",&dec);
while(dec!=0)
{
	r=dec%16;
	hex+=r*pow(10,i);
	dec=dec/16;
	i++;*
	}	
	printf("%d",hex);
	
}=================================                                                  
