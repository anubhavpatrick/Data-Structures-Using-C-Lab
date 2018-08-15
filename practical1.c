//WAP to insert an element at a given pos in an array
#include<stdio.h>
int main()
{
	int a[100],n, pos,val, i;
	printf("Enter actual size of array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position at which element is to be inserted\n");
	scanf("%d",&pos);
	printf("Enter value of element to be inserted\n");
	scanf("%d",&val);
	for(i=n;i>pos;i--)
	{
		a[i]=a[i-1];
	}
	n=n+1;
	a[pos]=val;
	printf("Array after insertion is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}

