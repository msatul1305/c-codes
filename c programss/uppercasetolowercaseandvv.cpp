#include<stdio.h>
int main()
{
	char a;
	printf("enter a char");
	scanf("%c",&a);
	if(a>='A'&&a<='Z')
	{
		a=a+32;
		printf("%c",a);
	}
	else if(a>='a',a<='z')
	{
		a=a-32;
		printf("%c",a);
	}
}
