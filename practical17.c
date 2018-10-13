#include<stdio.h>
#define MAX_SIZE 100 //Stack has capacity to store 100 integers
#define TRUE 1
#define FALSE 0
int stack[MAX_SIZE];//creating a stack using array having capacity MAX_SIZE
int top=-1;//Initially stack is empty which is represented by top=-1
//top will point to index of element at the top of the stack
int isEmpty()
{
	if(top==-1)
		return TRUE;
	else
		return FALSE;
}
int isFull()
{
	if(top==MAX_SIZE-1)
		return TRUE;
	else
		return FALSE;
}
void push(int value)
{
	if(isFull()==TRUE)
	{
		printf("ERROR!!! STACK OVERFLOW\n");
		return;
	}
	top=top+1;
	stack[top]=value;
}
int pop()
{
	int value;
	if(isEmpty()==TRUE)
	{
		printf("ERROR!!! STACK UNDERFLOW\n");
		return -999;//-999 is stack underflow error code chosen by us
	}
	value=stack[top];
	top=top-1;
	return value;
}
int peek()
{
	int value;
	if(isEmpty()==TRUE)
        {       
		printf("ERROR!!! STACK UNDERFLOW\n");
		return -999;//-999 is stack underflow error code chosen by us
	}
	return stack[top];
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
