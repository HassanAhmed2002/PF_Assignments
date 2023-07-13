#include<stdio.h>
#include<conio.h>

int binarySearch(int arr[], int f, int l, int a);
int main() 
{
  int arr[90];
  int n,position,i,search;
 
  printf("Enter the number of elements you want to enter: \n");
  scanf("%d",&n);
  printf("Enter the array elements\n");
  for ( i=0;i<n;i++)
  scanf("%d",&arr[i]);
  printf("Enter  element to be searched: \n");
  scanf("%d",&search);
  position = binarySearch(arr,0,n-1,search);
  if (position < 0 )
    printf("Element not found.\n", search);
 
  else
    printf("%d element is at index %d\n", search, position+1); 
    
  return 0;
}    
int binarySearch(int arr[], int f, int l, int a) {
   int mid;
   mid = (f + l)/2;
   if (f > l)
    return -1;
   if (arr[mid]==a) 
   return mid;
   if (arr[mid]<a) 
     return binarySearch(arr,mid+1,l,a);
   else 
    return binarySearch(arr,f,mid-1,a);
}