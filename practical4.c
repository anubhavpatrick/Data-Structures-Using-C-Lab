//WAP to reverse array without using any additional array
#include<stdio.h>
int main()
{
	int a[100],i,j,n,t;
	printf("Enter size of array:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);
	}
	j=n-1;
	for(i=0;i<j;i++)
	{
		//We will interchange the ith element of a[] with jth element
		//i will start from 0 and j will start from n-1
		//at each step i will be incremented by and j will be decremented by 1
		t=a[i];
		a[i]=a[j];
		a[j]=t;
		j--;
	}
	printf("Reversed array is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

