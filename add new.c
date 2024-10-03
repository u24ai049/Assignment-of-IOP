
#include <stdio.h>

int main() 
{
    int m, n,temp,p;
   
    printf("Enter the size of array1\n");
    scanf("%d",&n);
    int arr1[n];
    printf("Enter the values of array1\n");
    for(int i=0;i<n;i++)
   {
       scanf("%d",&arr1[i]);
   }
    printf("The values of array1 is:\n");
    for(int i=0;i<n;i++)
    {
    printf(" %d",arr1[i]);
    }
    
     printf("Enter the size of array2\n");
    scanf("%d",&m);
    int arr2[m];
    printf("Enter the values of array2\n");
    for(int i=0;i<m;i++)
   {
       scanf("%d",&arr2[i]);
   }
    printf("The values of array2 is:\n");
    for(int i=0;i<m;i++)
    {
    printf(" %d",arr2[i]);
    }p=0;
     for(int i=0;i<n;i++)
     {arr[p]=arr1[n];p++}
     int p=n;
     for(int i=0;i<m;i++)
    { arr[p]=arr2[m];
     p++;}
    
    
    for(int j=0;j<p;j++)
{
    for(int i=0;i<p-1;i++)
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
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
    return 0;
}
