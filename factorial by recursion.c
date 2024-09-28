#include<stdio.h>
int fac(int n);//declaration of fn
int main() 
{
    int n;
  printf("Enter the number you want factorial of:")  ;
  scanf("%d",&n);
  printf("The value of factorial of %d is %d",n,fac(n));//calling of fn
  return 0;
}
//designing the function
int fac(int n)
{
    if(n==1)
    {
    return 1;
    }
    
    return fac(n-1)*n;
}
