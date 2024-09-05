#include<stdio.h>
int main () 
{
float a, b, Interest,sum;
printf("Enter the principal amount =");
scanf("%f",&a);
printf("Enter the value of percentage interest=");
scanf("%f",&b);
Interest=(a*b) /100;
printf("Interest=%f",Interest);
sum=a+Interest;
printf("\n The total amount after adding Interest=%f",sum);
}