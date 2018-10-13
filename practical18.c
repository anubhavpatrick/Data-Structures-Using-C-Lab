#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
struct stackNode
{
	int data;
	struct stackNode *next;
};
struct stackNode *top=NULL;//initially stack is empty
int isEmpty()
{
	if(top==NULL)
		return TRUE;
	else
		return FALSE;
}
int isFull()
{
	return FALSE;
}
void push(int value)//concept is similar to insert at begining in singly linked list
{
	struct stackNode *newNode;
	if(isFull()==TRUE)
	{
		printf("ERROR!!! STACK OVERFLOW\n");
		return;
	}
	newNode=malloc(sizeof(struct stackNode));
	newNode->data=value;
	newNode->next=top;
	top=newNode;
}
int pop()//concept is similar to deletion at begining in singly linked list
{
	int value;
	struct stackNode *temp;
	if(isEmpty()==TRUE)
	{
		printf("ERROR!!! STACK UNDERFLOW\n");
		return -999;// -999 is stack underflow error code chosen by us
	}
	value=top->data;
	temp=top;
	top=top->next;
	free(temp);
	return value;
}
int peek()
{
        if(isEmpty()==TRUE)
        {
                printf("ERROR!!! STACK UNDERFLOW\n");
                return -999;// -999 is stack underflow error code chosen by us
        }
        return top->data;
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	printf("Peek=%d\n",peek());
	printf("Pop=%d\n",pop());
	printf("Pop=%d\n",pop());
	printf("Pop=%d\n",pop());
	printf("Pop=%d\n",pop());
	return 0;
}
