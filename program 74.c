#include <stdio.h>

int main() 
{
    int n,temp,m;
   
    printf("Enter the size of array 1 \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of array 1\n");
    for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
    printf("Enter the size of array 2 \n");
    scanf("%d",&m);
    printf("Enter the values of array 2 \n");
    for(int i=n;i<m+n;i++)
   {
       scanf("%d",&arr[i]);
   }
    printf("The values of array is:\n");
    for(int i=0;i<n+m;i++)
    {
    printf(" %d",arr[i]);
    }
    for(int j=0;j<n+m;j++)
{
    for(int i=0;i<n+m-1;i++)
   {
       if(arr[i]>arr[i+1])
       {   
           temp=arr[i];
           arr[i]=arr[i+1];
           arr[i+1]=temp;
          
       }
   }
}   printf("\n");
    printf("The order of array in ascending order is\n");
    for(int i=0;i<n+m;i++)
    printf(" %d",arr[i]);
    return 0;
}
