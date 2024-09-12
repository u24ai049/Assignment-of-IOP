

#include <stdio.h>

int main() {
    int a, sum = 0;

    do {
        printf("Enter the number: ");
        scanf("%d", &a);
        sum = sum + a;
    } while (a >= 0);

    printf("The sum of values is: %d\n", sum);
    return 0;
}







