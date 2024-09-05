#include<stdio.h>
int main ()
{
    int a, b;
    printf("Enter marks");
    scanf("%d",&a);
    b=a/10;
    switch(b) {
    case 10:printf("You got A+ grade ");
    case 9:printf("You got A grade");
    break;
    case 8:printf("You got B+ grade");
    break;
    case 7:printf("You got B grade");
    break;
    case 6:printf("You got C+ grade");
    break;
    default:printf("You got C");}
    
    
}
