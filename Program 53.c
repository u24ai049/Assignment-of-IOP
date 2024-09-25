#include<stdio.h>
int main()
{
    
    for(int i=1;i<=7;i=i+2)
    {
        for(int k = 7; k > 0; k--)
            if(k>=i)
              printf(" ");
        for(int j=1;j<=7;j++)
            if(j<=i)
              printf(" *");
       
        printf("\n");
    }
    for(int i=1;i<=7;i=i+2)
    {
        for(int k = 0; k < 7; k++)
            if(k<=i)
              printf(" ");
        for(int p=5;p>=1;p--)  
          if(p>=i)  
          printf(" *");
          
    printf("\n");
    }
}
