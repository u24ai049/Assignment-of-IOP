#include<stdio.h>
int main()
{
    int arr[10],sum=0;
    printf("Enter the value of integers\n");
    for(int i=1;i<=10;i++)
    scanf("%d",&arr[i]);
    printf("The value of array is: ");
    for(int i=1;i<=10;i++)
    printf("\t%d",arr[i]);
    for(int i=1;i<=10;i++)
    sum=sum+arr[i];
    printf("\nThe value of sum of all the integers is: %d ",sum);
    
    
}
