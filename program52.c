#include<stdio.h>
int main()
{
    int i,j,k;
    for( i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        if(j>i)
              {
          //  printf("  ");
              }
        else
             {
                printf(" %d ",j);
             }
             
        }
        for(k=5;k>=1;k--)
             {
                 if(k<i)
                 {
                     printf(" %d ",k);
                 }
             }
        printf("\n");
    
        }
}
