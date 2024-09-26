#include<stdio.h>
int main()
{
    int arr1[10],arr3[10],i;
    printf("Enter th values of elements :");
    
    for(int i=0;i<10;i++)
    scanf("%d",&arr3[i]);
     
    for(int i =0;i<10;i++)
     arr1[i]=arr3[9-i];
     
     for(int i = 0;i<10;i++)
    printf(" %d",arr1[i]);
    
}
