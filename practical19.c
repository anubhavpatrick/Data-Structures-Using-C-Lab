#include<stdio.h>
#define MAX_SIZE 20
int queue[MAX_SIZE];
int front=-1,rear=-1;
#define TRUE 1
#define FALSE 0
int isFull()
{
    if(rear==MAX_SIZE-1)
    {
        return TRUE;
    }
    else
        return FALSE;
}
int isEmpty()
{
    if(front==-1&&rear==-1)
        return TRUE;
    else
        return FALSE;
}
void insert(int data)
{
	if(isFull()==TRUE)//Boundary Case 1
	{
		printf("Queue Full\n");
		return;
	}
	if(isEmpty()==TRUE) // Boundary Case 2
	{
		front=rear=0;
		queue[rear]=data;
		return;
	}
	rear++;
	queue[rear]=data;
}
int delete()
{
	int item;
	if(isEmpty()==TRUE)//Boundary Case
	{
		printf("Queue Empty\n");
		return -9999; //Randomly chosen val representing empty queue
	}
	item=queue[front];
    if(front==rear)//when queue becomes empty after deletion
	{
		front=rear=-1;
	}
	else
	{
		front++;
	}
	return item;
}
void display()
{
	int i;
	if(isEmpty()==TRUE)
	{
        printf("Queue is empty\n");
        return;
    }
    for(i=front;i<=rear;i++)
    {
        printf("%d\t",queue[i]);
    }
    printf("\n");
}
int main()
{
	insert(5);
	display();
	insert(7);
	display();
	insert(2);
	display();
	printf("Item deleted %d\n",delete());
	display();
	printf("Item deleted %d\n",delete());
	display();
	printf("Item deleted %d\n",delete());
	display();
	printf("Item deleted %d\n",delete());
	display();
}
