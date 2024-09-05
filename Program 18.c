#include<stdio.h>
int main()
{
  int a, b, max;
  printf("Enter the three numbers");
  scanf("%d%d%d",&a,&b,&max);
  max= a>b ? (a>max ? a:max) :(b>max ? b:max);
  printf("The max value is%d",max);
  
}
