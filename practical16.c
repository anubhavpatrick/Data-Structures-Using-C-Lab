#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head;
void createEmptyLinkedList()
{
	head=NULL;
}
void insertAtBegining(int value)
{
	struct node *t,*newNode;
	newNode=malloc(sizeof(struct node));
	newNode->data=value;
	newNode->prev=NULL;
	newNode->next=head;
	head=newNode;
}
void insertAtEnd(int value)
{
    struct node *newNode,*t;
    newNode=malloc(sizeof(struct node));
    newNode->data=value;
    newNode->next=NULL;
    if(head==NULL)//DLL is empty
    {
        newNode->prev=NULL;
        head=newNode;
    }
    t=head;
    while(t->next!=NULL)//move to the last node of DLL
    {
        t=t->next;
    }
    newNode->prev=t;
    t->next=newNode;
}
void insertAtGivenPos(int pos,int value)
{
	struct node *t,*newNode;
	int i;
	newNode=malloc(sizeof(struct node));
	newNode->data=value;
    if(head==NULL&&pos!=1)//DLL is empty and we want to insert node other than first node then inserton not possible
    {
        printf("Error. DLL is empty, cannot insert at given position\n");
        return;
        }
	if(pos==1)//if pos is 1 then we have to insert given node at begining of LL
	{
		insertAtBegining(value);
		return;
	}	
	t=head;
	for(i=2;i<pos;i++)//normal insertion in DLL is possible
	{
		t=t->next;
		if(t==NULL)//DLL contains less elements then the pos at which new node is to be inserted
		{
			printf("Error. Linked list contain less elements\n");
			return;
		}
	}
    if(t->next==NULL)//node will be inserted at the end of DLL
    {
        insertAtEnd(value);
        return;
    }
    newNode->next=t->next;
    t->next->prev=newNode;
    t->next=newNode;
    newNode->prev=t;
}
void traverse()
{
	struct node *t;
	t=head;
	while(t!=NULL)
	{
		printf("%d\t",t->data);
		t=t->next;
	}
	printf("\n--------------\n");
}
int main()
{
	createEmptyLinkedList();
	printf("Inserting 10 at pos 1\n");
	insertAtGivenPos(1,10);
	traverse();
	printf("Inserting 20 at pos 2\n");
	insertAtGivenPos(2,20);
	traverse();
	printf("Inserting 50 at pos 1\n");
    insertAtGivenPos(1,50);
    traverse();
	printf("Inserting 70 at pos 8\n");
    insertAtGivenPos(8,70);
    traverse();
	return 0;
}

