#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
struct queue {
	int data;
	struct queue *next;
};
struct queue *front, *rear;
void create()
{
    front=rear=NULL;
}
int isFull()
{
    return false;
}
int isEmpty()
{
    if (front==NULL && rear==NULL)
        return true;
    else
        return false;
}
void insert(int data)
{
	struct queue *temp;
	temp=malloc(sizeof(struct queue));
	temp->data=data;
	temp->next=NULL;
	if(isEmpty()==true)//Exception Case
	{
		front=rear=temp;
        return;
	}
    rear->next=temp;
    rear=temp;
}
int delete()
{
	struct queue *temp;
	int val;
	//if queue is empty
	if(isEmpty()==true)
	{
		printf("Queue Empty\n");
		return -9999;//Randomly chosen value representing empty queue
	}
    temp=front;
    val=temp->data;
    if(front==rear)//queue contains only one node
    {
        front=rear=NULL;//after deletion queue becomes empty
    }
    else{//queue contains more then one node
        front=front->next;
    }
    free(temp);
    return val;
}

void display()
{
	struct queue *temp;
	temp=front;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
	printf("\n");
}
int main()
{
    create();
	insert(5);	
	insert(10);
	insert(20);
	insert(30);
	display();
	delete();
	display();
	delete();
	display();
	delete();
	display();
	delete();
	display();
	delete();
	display();
}
