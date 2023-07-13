#include<stdio.h>
#include<conio.h>
int recursiveMinimum(int arr[],int n);
int main()
{
	int arr[60];
	int i, n;
	int mvalue;
	printf("Enter how many elements you want to enter: ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
printf("The minimum value is %d",recursiveMinimum(arr,n));
return 0;
}
int recursiveMinimum(int arr[],int n)
{
	int m;
	if(n==1)
	{
		return arr[0];
	}
	else
	{
		m=recursiveMinimum(arr,n-1);
		if(m<arr[n-1])
		{
			return m;
		}
		else
		{
			return arr[n-1];
		}

	}
}