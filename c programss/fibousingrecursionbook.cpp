#include<stdio.h>
int fibo(int);
main()
{
	int n;
	printf("\n enter the no.of terms in series");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%d %d",i,fibo(i));
		
	}
	return 0;
}
	int fibo(int num)
	{
	if(num<=2)
	return 1;
		return (fibo(num-1)+fibo(num-2));
	}
