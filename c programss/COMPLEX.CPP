#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char a[20],b[20],c[41],d[40];
	int i,j,k,m,s;
	cout<<"Enter the numbers which are to be multiplied\n";
	cin>>a>>b;
	c[0]='\0';
	for(j=strlen(b)-1;j>=0;j--)
	{      	m=strlen(a);
		s=0;
		for(i=m-1;i>=0;i--)
		{
			k=(b[j]-48)*(a[i]-48);
			d[i]=(k+s)%10+48;
			s=(k+s)/10;
		}
		d[m]='\0';
		while(s!=0)
		{
			for(i=m;i>=0;i--)
				d[i+1]=d[i];
			d[0]=(s)%10+48;
			m++;
			s=s/10;
		}
		k=j;
		while(k<strlen(b)-1)
		{
			d[m++]=48;
			d[m]='\0';
			k++;
		}
		while(strlen(c)<m)
		{
			for(i=strlen(c);i>=0;i--)
				c[i+1]=c[i];
			c[++i]=48;
		}
		k=0;
		for(i=m-1;i>=0;i--)
		{
			s=(c[i]+d[i]-96)/10;
			c[i]=c[i]+d[i]-48-10*((c[i]+d[i]-96)/10);
			c[i]=c[i]+k;
			k=s;
		}
		if(k==1)
		{
			for(i=m;i>=0;i--)
				c[i+1]=c[i];
			c[i]=k+48;
		}

	}
	cout<<"Product= "<<c;
	getch();
}