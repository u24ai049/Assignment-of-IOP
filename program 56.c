#include<stdio.h>
int main()
{
    int arr[10];
    int positive=0,negative=0,zero=0;
    printf("Enter the value of integers\n");
    for(int i=1;i<=10;i++)
    {scanf("%d",&arr[i]);}
    printf("The value of array is: ");
    for(int i=1;i<=10;i++)
    {printf("\t%d",arr[i]);}
    for(int i=1;i<=10;i++)
   {
       if(arr[i]>0)
       {positive=positive+1;}
       if(arr[i]<0)
       {negative=negative+1;}
       if(arr[i]=0)
       {zero=zero+1;}
   }
   printf("The number of positive elements are %d",positive);
   printf("The number of negative elements are %d",negative);
   printf("The number of zero elements are %d",zero);
}
