#include<stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter the total seconds:");
    scanf("%d",&a);
    b=a/3600;
    c=a%3600;
    d=c/60;
    e=c%60;
   // f=e/60;
   // g=e%60;
    printf("The time is %d hours, %d minutes, %d seconds",b, d, e);
    return 0;
}