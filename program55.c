#include<stdio.h>
int main()
{
    int arr[10];
    char sad='0';
    char odd='0';
    printf("Enter the value of 10 integers\n");
    for(int i=1;i<=10;i++)
    scanf("%d",&arr[i]);
    printf("The value of 10 integers: ");
    for(int i=1;i<=10;i++)
    printf("%d\t",arr[i]);
    for(int i=1;i<=10;i++)
   {
       if(arr[i]%2==0)
       {sad=sad+1;}
       if(arr[i]%2!=0)
       {odd=odd+1;}
   }    
   printf("\nthe number of odd integers are %c",odd);
   printf("\nthe number of even integers are %c",sad);
    
}
