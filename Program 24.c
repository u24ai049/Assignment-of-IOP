#include<stdio.h>
int main()
{
    int n,x,q,y;
    printf("\n Enter the value of n");
    scanf(" %d",&n);
     printf("\n Enter the value of x");
    scanf(" %d",&x);
    if(n==1)
    {
        y=1+x;
        printf("\n The value of y is %d",y);
    }
    else if(n==2)
    { y=1+x/n;
    printf("\n The value of y is %d",y);
    
    }
    else if(n==3)
    { y=1+x*n*n*n;
    printf("\n The value of y is %d",y);
    
    }
      else if(n>3 || n<1)
    { y=1+x*n;
    printf("\n The value of y is %d",y);
    
    }
    else
    {printf("ab to mujhe bhi nahi pata");}

}
