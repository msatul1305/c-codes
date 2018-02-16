#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct node
{
	int val;
	 struct node *next;
}nodet;
main()
{
	int val;
	struct nodet *head=NULL;
	head =(struct nodet *)malloc((sizeof(nodet)));
/*	if (head==NULL)
	{
		return 1;
	}
	*/
	//else {
	scanf("%d",&val);
	head->val=val;
		head->next=NULL;
	//}
}
