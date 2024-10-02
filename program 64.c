#include<stdio.h>
int main()
{
    int i,j;
    int arr[3][3], sum[3];
    printf("Enter the values in array\n");
    //value of array
    for(int i=0;i<3;i++)            //00 01 02
                                    //10 11 12
                                    //20 21 22
    {
        for(int j=0;j<3;j++)
        scanf("%d", &arr[i][j]);
    }
    
     for(int i=0;i<3;i++)           
    {
        for(int j=0;j<3;j++)
        printf("  %d", arr[i][j]);
        printf("\n");
    }
    
    //printing the array
    for(int j=0;j<3;j++)
    {
        sum[j] = 0;
        for(int i=0;i<3;i++)
        {
            sum[j] += arr[i][j];    //00 10 20
                                    //
            printf("  %d", arr[i][j]);
            
        }
        printf(" = %d\n", sum[j]);
    }

}
