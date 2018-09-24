#include<stdlib.h>
#include<stdio.h>
struct node
{
	int data;
	struct node * next;
}*head;
void createEmptyLinkedList()
{
	head=NULL;
}
void insertAtBegining(int data)
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	temp->data=data;
	temp->next=head;
	head=temp;
}
void insertAtEnd(int data)
{
    struct node *temp,*newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data=data;
    newNode->next=NULL;
    temp=head;
    if(temp==NULL)//Boundary Case: LL is empty
    {
        head=newNode;
        return;
    }
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=newNode;
}
void insertAtPos(int pos, int value)
{
    struct node *newNode,*temp;
    int i;
    newNode=malloc(sizeof(struct node));//creating a node and storing its address in pointer newNode
    newNode->data=value;
    if(pos==1)//if element is to be inserted at first position
    {
        newNode->next=head;
        head=newNode;
        return;//return the control back to main()
    }
    temp=head;
    for(i=2;i<=(pos-1);i++)//moving temp to 1 postion earlier where newNode is to be inserted
    {
        if(temp==NULL)
        {
            printf("Error\n");
            return;
        }
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void insertBeforeGivenNode(int givenNodeValue,int value)
{
    struct node *t1,*t2,*newNode;
    newNode=malloc(sizeof(struct node));
    newNode->data=value;
    t1=NULL;
    t2=head;
    if(head==NULL)//Boundary case 1: LL is empty
    {
        printf("Error");
        return;
    }
    if(head->data==givenNodeValue)//Boundary Case 2: Node is to be inserted before head
    {
        newNode->next=head;
        head=newNode;
        return;
    }
    while(t2->data!=givenNodeValue&&t2->next!=NULL)//we will jump t1 and t2 forward till either t2 starts pointing to target node OR there are no more nodes ahead of t2
    {
        t1=t2;
        t2=t2->next;
    }
    if(t2->data==givenNodeValue)
    {
        t1->next=newNode;
        newNode->next=t2;
    }
}
void deleteAtBegining()
{
    struct node *t;
    if(head==NULL)//Boundary Case- LL is already empty
    {
        printf("Error\n");
        return;
    }
    t=head;
    head=head->next;//moving head to next node in LL which will be the new starting node
    free(t);
}
void deleteAtEnd()
{
    struct node *t2,*t1;//t2 will represent node in consideration, t1 will previous node of t1
    if(head==NULL)//Boundary case 1: LL is empty
    {
        printf("LL is empty\n");
        return;
    }
    if(head->next==NULL)//Boundary case 2: LL contains only one node and it needs to be deleted
    {
        t2=head;
        head=NULL;
        free(t2);
        return;
    }
    t2=head;
    t1=NULL;
    while(t2->next!=NULL)//moving t2 to last node and t1 to second last node
    {
        t1=t2;
        t2=t2->next;
    }
    t1->next=NULL;  //making second last element as last element of linked list
    free(t2);
}
void deleteAtPos(int pos)
{
    struct node *t1,*t2;
    int i;
    if(head==NULL)//Boundary Case 1: LL is empty
    {
        printf("ERROR!!! Deletion not possible\n");
        return;
    }
    if(pos==1)//Boundary Case 2: First node of linked list need to be deleted
    {
        deleteAtBegining();
        return;
    }
    t2=head;
    t1=NULL;
    for(i=2;i<=pos;i++)
    {
        t1=t2;
        t2=t2->next;
        if(t2==NULL)//LL contains less number of elements then the pos of element we want to delete
        {
            printf("Error");
            return;
        }
    }
    t1->next=t2->next;
    free(t2);
}

void displayList()
{
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
    printf("\n----------------\n");
}
int main()
{
    createEmptyLinkedList();
    printf("Inserting 10 at begining\n");
    insertAtBegining(10);
    displayList();
    printf("Inserting 20 at begining\n");
    insertAtBegining(20);
    displayList();
    printf("Inserting 30 at begining\n");
    insertAtBegining(30);
    displayList();
    printf("Inserting 50 at end\n");
    insertAtEnd(50);
    displayList();
    printf("Inserting 60 at end\n");
    insertAtEnd(60);
    displayList();
    printf("Inserting 70 at end\n");
    insertAtEnd(70);
    displayList();
    printf("Inserting 110 at pos 4\n");
    insertAtPos(4,110);
    displayList();
    printf("Inserting 90 before 90\n");
    insertBeforeGivenNode(30,90);
    displayList();
    printf("Inserting 99 before 10\n");
    insertBeforeGivenNode(10,99);
    displayList();
    printf("Deleting first node at begining\n");
    deleteAtBegining();
    displayList();
    printf("Deleting first node at begining\n");
    deleteAtBegining();
    displayList();
    printf("Deleting last node\n");
    deleteAtEnd();
    displayList();
    printf("Deleting  node at pos 3\n");
    deleteAtPos(3);
    displayList();
    printf("Deleting  node at pos 5\n");
    deleteAtPos(5);
    displayList();
    printf("Deleting  node at pos 5\n");
    deleteAtPos(5);
    displayList();
    printf("Deleting  node at pos 1\n");
    deleteAtPos(1);
    displayList();
	return 0;
}
