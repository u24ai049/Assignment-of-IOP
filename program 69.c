#include<stdio.h>
int main()
{
    int n,i,val;
    printf("Enter the value of n\n");
    scanf(" %d",&n);
    int arr[n];
    printf("Enter the value of elements in array\n");
    for(int i=0;i<n;i++)
    scanf(" %d",&arr[i]);
    printf("Enter the value of desired elements\n");
    scanf(" %d",&val);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        printf("The desired elements is present at %d positon\n",i+1);
    }

}
