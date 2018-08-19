//WAP to shift all the odd elements of an array towards end of the array and even elements towards beginning of the array
#include<stdio.h>
int main()
{
	int a[100], i,j, n,t;
	printf("Enter size of the array:\n");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//we will only place odd elements at the end, even elements automatically will come at begining
	j=n-1;
	for(i=0;i<j;i++)
	{
		if(a[i]%2!=0)//ith element is odd
		{
			//interchange the ith element with jth element
			t=a[i];
			a[i]=a[j];
			a[j]=t;
			j--;//decrement j so that next odd element can be placed before current odd element
			i--;//decrement i as well since we do not know the ith element that we have interchanged is odd or even
			//ith element will now be re-examined for odd/even
		}
	}
	printf("Resultant array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}

