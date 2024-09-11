#include <stdio.h>

int main()
{
    int a=0,b=1,c, i;
    printf("%d",a);
    printf("%d",b);
    for(i=1;i<=10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }
}
