#include<stdio.h>
#include<math.h>
int main()
{
	int op,bin=0,bina[10]={0},dec,i=0,r=0;
	printf("enter your choice:\n1.binary->decimal\n2.decimal->binary");
	scanf("%d",&op);
	if(op==1)
	{
		scanf("%d",&bin);
		while(bin>0)
		{
			r=bin%10;
			dec+=(r*pow(2,i));
			i++;
			bin/=10;
		}
		printf("decimal =%d",dec);
}
else if(op==2)
{
	scanf("%d",&dec);
	if(dec==0)
	printf("0");
	while(dec>0)
	{
		r=dec%2;
		bina[i]=r;
		i++;
		dec/=2;
	}
	i--;
	for(;i>=0;i--)
	printf("%d",bina[i]);
}
}
