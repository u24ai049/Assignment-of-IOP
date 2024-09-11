
#include<stdio.h>

int main() {
    int a, sum = 0, pod = 1; 

    printf("Enter the number n: ");
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {

        if (i % 2 == 0) {  
            sum = sum + i;
        } else {  
            pod = pod * i;
        }
    }

    printf("Sum of even is %d\n", sum);
    printf("Product of odd is %d\n", pod);

    return 0;
}
