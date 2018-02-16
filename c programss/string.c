#include<stdio.h>
int main()
{
	char str[100],temp[50];
	int i=0;
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		temp[i]=str[i];
	}
	printf("temp is %s",temp);
	return 0;
}
