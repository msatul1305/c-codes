#include<stdio.h>
#include<malloc.h>
struct node
{
	int a;
	struct node *next;
};
struct node *create()
{
	struct node *p,*r,*n;
	int s,k=0;
	s=sizeof(struct node);
	printf("enter the elements,-1 to stop");
	scanf("%d",&k);
	p=r=NULL;
	while(k!=-1)
	{
		n=(struct node *)malloc(s);
		n->a=k;
		n->next=NULL;
		if(r==NULL)
		r=n;
		else
		p->next=n;
		p=n;
		//printf("%d",p->a);
			printf("enter elements,-1 to stop");
			scanf("%d",&k);
	}
	return r;
}
void display (struct node *r)
{
	printf("\nroot ");
	while(r!=NULL)
	{
		printf("\t%d",r->a);
		r=r->next;
	}
	printf("null ");
}
main()
{
	struct node *r;
	r=create();
	display(r);
}
