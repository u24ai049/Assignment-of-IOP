#include<stdio.h>
int main()
{
    int n,i,temp,t,p,j;
    printf("Enter the value of n\n");
    scanf(" %d",&n);
    int arr[n];
    printf("Enter the value of elements in array\n");
    for(int i=0;i<n;i++)
    scanf(" %d",&arr[i]);
    printf("The value of elements in array is:\n");
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
    printf("\n");
    printf("Enter the number of times you want to rotate the array\n");
    scanf("%d",&p);
    for(j=0;j<p;j++)
    {
    t= arr[n-1];
    for(i=n-1;i>=0;i--)
    {
     arr[i]=arr[i-1];
    }
    i+=1;
    arr[i]=t;
    }
    for(int i=0;i<n;i++)
    printf(" %d",arr[i]);
    printf("\n");
    
}
