
#include <stdio.h>
#include <math.h>

int main()
{
    int a, sum = 0, q, s;
    printf("Enter the number: ");
    scanf("%d", &a);

    s = a;
    while (a != 0) 
    {
        q = a % 10;
        sum = sum + pow(q, 3);
        a = a / 10;
    }

    if (s == sum) 
    {
        printf("The number is an Armstrong number\n");
    } else {
        printf("The number is not an Armstrong number\n");
    }

    return 0;
}
