#include<stdio.h>
int fibonacci(int term);
int main()
{
	int terms,i;
	printf("enter no of terms in fibonacci series:");
	scanf("%d",&terms);
	printf("fibonacci series till %d terms\n",terms);
	for(i=0;i<terms;i++)
	{
		printf("%d ",fibonacci(i));
	}
	getch();
	
}
int fibonacci(int term)
{
	if(term<2)
	return term;
	return fibonacci(term-1)+fibonacci(term-2);
}
