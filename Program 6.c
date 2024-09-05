#include<stdio.h>
int main()
{
int a, b;
printf("Enter the value of a");
scanf("%d",&a);
printf("Enter the value of b");
scanf("%d",&b);
printf("\n Initially a=%d,b=%d",a,b);
a+=b;
b=a-b;
a=a-b;
printf("\n Final a=%d,b=%d",a,b);
}