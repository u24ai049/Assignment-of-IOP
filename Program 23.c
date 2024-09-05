// C program to calculate power of any number.
#include <stdio.h>
int main()
{
    int a,b,c=1;
    printf("enter the values of a and b:\n");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=b;i++)
    {
        c=c*a;
    }
    printf("the value of a to the power b is:%d",c);
    return 0;
}
