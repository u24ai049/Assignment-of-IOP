#include<stdio.h>
int main()
{
    int p,i;
    int arr[i],max=0,secmax=0;
    printf("The value of array\n");
    scanf("%d",&p);
    printf("The elements of array\n");
    for(i=0;i<p;i++)
   {
       scanf("%d",&arr[i]);
       if(arr[i]>max)
       {
           secmax=max;
           max=arr[i];
       }
       else if(arr[i]<max)
       {
           if(arr[i]>secmax)
           {
               secmax=arr[i];
           }
       }
       
       
   }
    printf("The value of max is %d\n",max);
     printf("The value of max is %d\n",secmax);
    
}
