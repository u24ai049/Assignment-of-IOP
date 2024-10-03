#include<stdio.h>
int main()
{
    int n,i,val,occ=0;
    printf("Enter the value of n\n");
    scanf(" %d",&n);
    int arr[n];
    printf("Enter the value of elements in array\n");
    for(int i=0;i<n;i++)
    scanf(" %d",&arr[i]);
    printf("Enter the value of desired elements you want occurance of\n");
    scanf(" %d",&val);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        occ=occ+1;
    }
    printf("The occurance is %d is %d",val,occ);

}
