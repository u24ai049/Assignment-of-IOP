#include <stdio.h>

int main()
{
    float i, n, factorial, j, sum;
    printf("Enter the number till you want series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            factorial=factorial*j;
        }
        sum=i/factorial;
        printf("%f",sum);
    } 
}
