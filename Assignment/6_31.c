#include <stdio.h>
#include <string.h>
int paldindrome(int size,char arr[size]);
int main()
{
   int size;
   int j, i;
     
   scanf("%d",&size);
   char arr[100],remove[100];
  
   scanf("%s",arr);
   
   size=strlen(arr);
  
   for(i=0;i<size;i++)
   {
      if(arr[i]==' ')
      {
         for( j=i;j<size;j++)
         {
            arr[j]=arr[j+1];
         }
      }
      remove[i]=arr[i];
   }
   int flag;
   size=strlen(remove);
   flag=paldindrome(size,remove);
   if(flag==0)
   {
      printf("String is not a paldindrome");
   }
   else
   {
      printf("String is a paldindrome");
   }
   
}
int paldindrome(int size,char arr[size])
{
   static int count=0,flag=1,size1;
   if(count==0)
   {
      size--;
      size1=size;
   }
   if(count==size1)
   {
      return flag;
   }
   if(arr[count]==arr[size])
   {
      flag=1;
   }
   else
   {
      flag=0;
   }
   
   count++;
   size--;
   paldindrome(size,arr);
}
