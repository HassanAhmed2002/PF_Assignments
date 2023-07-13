#include<stdio.h>
#include<conio.h>
int recursivelinear(int arr[], int search, int index, int n)

 
int main()
{
    int n, search, position, m = 0, arr[100];
    int i;
    printf("Enter how many elements you want to enter:  ");
    scanf("%d",&n);
 
    printf("Enter the elements of an array:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to  be searched:  ");
    scanf("%d",&search);
 
    position =recursivelinear(arr,search, 0, n);
    if (position!= 0)
    {
        printf("Element found at index %d ",pos);
    }
    else
    {
        printf("Element not found");
    }
    return 0;
}
int recursivelinear(int arr[], int search, int index, int n)
{
    int position= 0;
    if(index >= n)
    {
        return 0;
    }
    else if (arr[index] == search)
    {
        position = index + 1;
        return pos;
    }
    else
    {
        return recursivelinear(arr,search,index+1, n);
    }
    return position;
}
