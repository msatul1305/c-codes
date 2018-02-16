#include<iostream>
using namespace std;
struct node
{
	int val;
	 node *next;
}nodet;
main()
{
	struct nodet *head=NULL;
	head =(nodet *)malloc((sizeof(nodet)));
	if (head==NULL)
	{
		return 1;
	}
	else {
		head->val=1;
		head->next=NULL;
	}
}
