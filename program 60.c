

#include <stdio.h>

int main() 
{
    int i,j, n,temp,t;
   
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the values of array\n");
    for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
    printf("The values of array is:\n");
    for(int i=0;i<n;i++)
    {
    printf(" %d",arr[i]);
    }
    for(i=0;i<n-1;i++)
    {   t=i;
        for(j=i+1;j<n;j++)
        if(arr[j]<arr[t])
        {
           
            temp=arr[t];
            arr[t]=arr[j];
            arr[j]=temp;
        }
    }printf("\nSorted array\n");
    for(i=0;i<n;i++)
    printf(" %d",arr[i]);
    printf("\n");
    
}
