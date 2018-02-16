#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int count=1,len=0,i;
	printf("enter the sentence:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
	
	if(str[i]==' ')
	{
	count++;
}
}
	printf("the no of words is:%d,len is%d,string is %s",count,len,str);
	return 0;
}
