#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter the number till you want series");
    scanf("%d",&n);
    for(i=1;i<n;i+=2)
    {
        printf("%d\n",i);
    } 
}
