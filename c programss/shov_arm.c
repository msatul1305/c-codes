#include<stdio.h>
#include<math.h>
int main()
{
	int r,num,k,sum=0;
	printf("enter a no");
	scanf("%d",&num);
	
	k=num;
	while(k>0)
	{
		r=k%10;
		k=k/10;
		sum=sum+pow(r,3);
	}
	if(sum==num)
	printf("armstrong");
	else
	printf("not");
}
