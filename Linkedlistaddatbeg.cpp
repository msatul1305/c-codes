#include<iostream>
using namespace std;
typedef struct node   
    {
    int value;
    node *next;
    }node_t;
void dis(node_t *head);
node_t* add_b(node_t *head);
static node_t *head=NULL;
int main()
{
    int k;
    
    head=new node_t;
    if(head==NULL)
    {
        return 1;
    }
    head->value=1;
    head->next=new node_t;
    head->next->value=2;
    head->next->next=new node_t;
    head->next->next->value=3;
    head->next->next->next=NULL;
    cout<<"enter 1 to enter element at begining: ";
    cin>>k;
    if(k==1)
    head=add_b(head);
    dis(head);
    
}   
node_t* add_b(node_t *head)
{
    node_t *temp=NULL;
    temp=new node_t;
    temp->value=10;
    temp->next=head;
    head=temp;
    
}

void dis(node_t *head) 
{
    node_t *current=head;
    while(current!=NULL)
    {
        cout<<(current->value)<<endl;
        current=current->next;
        
    }
}
