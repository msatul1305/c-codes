#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int val;
	node *link;	
};
node *head,*cur;
node* insert(node*);
node* del(node*);
void disp(node*);
main()
{
	int c;
	while(c!=4)
	{
	cout<<"enter your choice:\n1.insert\n2.delete\n3.display\n4.exit";
	cin>>c;
	switch(c)
	{
		case 1:
			head=insert(head);
			break;
		case 2:
			head=del(head);
			break;
		case 3:
			disp(head);
			break;
		default:exit(0);
}
}
}
node* insert(node *head)
{
	int item;
	cout<<"enter the item to be inserted";
	cin>>item;
	if(head==NULL)
	{
		head=new node;
		head->val=item;
		head->link=NULL;
		cur=head;
	}
	else
	{
	node *temp=new node;
	temp->val=item;
	temp->link=NULL;
	head->link=temp;
	}
}
node* del(node *head)
{
	int item;
	cout<<"enter the value to be deleted:";
	cin>>item;
	node *temp,*ptr;
	temp=head;
	while(temp->link->val!=item)
	{
		temp=temp->link;
	}
	ptr=temp->link;
	temp=temp->link->link;
	ptr->link=NULL;
	delete(ptr);
	
}
void disp(node *head)
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->val<<endl;
		temp=temp->link;
	}
}
