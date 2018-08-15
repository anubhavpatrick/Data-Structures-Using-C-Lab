//WAP to cyclically shift elements of an array 1 position towards right
#include<stdio.h>
int main()
{
	int a[100], n,i,temp;
	printf("Enter size of the array\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	temp=a[n-1];
	for(i=n-1;i>0;i--)
	{
		a[i]=a[i-1];
	}
	a[0]=temp;
	printf("Array after cyclic rotation is \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
