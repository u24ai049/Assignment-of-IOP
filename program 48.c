#include<stdio.h>
int main()
{
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
        if(j>i)
        {
            printf("  ",j);
        }
        else
        {
            printf(" %d ",j);
        }
        }printf("\n");
    
    }//printf("\n");
}
