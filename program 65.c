#include<stdio.h>
int main()
{
    int i,j;
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

printf("The transpose array is\n");
 for(int j=0;j<3;j++)
    {
        for(int i=0;i<3;i++)
        
            printf("  %d", arr[i][j]);
           printf("\n");
    }
}
