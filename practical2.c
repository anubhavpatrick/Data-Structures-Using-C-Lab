//WAP to remove an element at a given pos in an array
#include<stdio.h>
int main()
{
	int a[100],n,i,pos;
	printf("Enter actual size of the array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter position of element to be deleted\n");
	scanf("%d",&pos);
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	printf("Array after deletion is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
