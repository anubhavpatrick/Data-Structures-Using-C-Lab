// to verify the formula of address finding of 1D array learnt in class
#include<stdio.h>
int main()
{
	int a[10]={3,5,7,8,9,1,2,3,12,21},index;
	printf("Address of 0th element: %u\n",&a[0]);//& operator is used to find address of given operator
	printf("Enter the index of array element whose address need to be found: ");
	scanf("%d",&index);
	printf("Address of element at given index: %u\n",&a[index]);
	return 0;
}
