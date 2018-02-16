#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],temp[50];
	int i=0,j;
	gets(str);
	while(str[i]!=NULL)
	{
	j=0;
		while(str[i]!=' ')
		{
		strcpy(temp,str);
		j++;
		}
		puts(temp);
	i++;
	}
	return 0;
		
}
