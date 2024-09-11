#include <stdio.h>

int main() 
{
    int a, q, sum=0;
    printf("Enter the number");
    scanf("%d",&a);
    while(a!=0)
    {
        q=a%10;
        sum=sum+q;
        a=a/10;
        
    }
        printf("%d",sum);

    return 0;
}
