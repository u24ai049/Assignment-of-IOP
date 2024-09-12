// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int n,max1=0,max2=0,a,i;
    printf("Enter the numbers of number you are to enter\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("enter the %d number  ", i);
        scanf("%d",&a);
        if(a>=max1)
        {
            max2=max1;
            max1=a;
        }
        else if(a<max1)
        {
            if(a>max2)
            {
                max2=a;
            }
        }
    }
          printf("The biggest number is %d",max1);
          printf("\nThe Second biggest number is %d",max2);
            
          

    return 0;
}
