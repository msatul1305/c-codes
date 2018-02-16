#include<stdio.h>
int main()
{
	char str[100],temp[50];
	int i=0,j=0;
	for(i=0;str[i]!=NULL;i++)
	{
		j=0;
		while(str[i]!=' ')
		{
			temp[j]=str[i];
			j++;i++;
		}
			puts(temp);
		
	}
	return 0;
}
