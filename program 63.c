#include<stdio.h>
int main()
{
    int i,j,min,max;
    int arr[3][3];
    printf("Enter the values in array\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d", &arr[i][j]);
    }
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("  %d", arr[i][j]);
            
        }
        printf("\n");
    }
    min=max=arr[0][0];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
   { 
       if(arr[i][j]>max)
         max=arr[i][j];
    if(arr[i][j]<min)
         min=arr[i][j];
   }    
   }
   printf("max= %d\n",max);
    printf("min= %d",min);

}
