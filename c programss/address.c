#include<stdio.h>
main()
{
	int a,b,c;
	float d;
	int e,*ptr=&e;
	printf("%u %u %u %u %u %x",&a,&b,&c,&d,&ptr,&e);
}
