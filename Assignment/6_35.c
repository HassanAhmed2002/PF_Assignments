#include<stdio.h>
#include<conio.h>
void printArray(int arr[], int f, int l);
int main()
{
	int arr[50];
	int i, n;
	printf("Enter how many numbers you want to enter: ");
	scanf("%d",&n);
	printf("Enter array elements: \n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The elements of array are: ");
	printArray(arr ,0 ,n);
	return 0;
}
void printArray(int arr[], int f, int l)
{
	if(f>=l)
        return;
    printf("%d, ",arr[f]);
    printArray(arr, f+1 ,l); 

}