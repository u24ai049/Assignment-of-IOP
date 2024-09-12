

#include <stdio.h>

int main() 
{
    int num, oNum, rNum = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    oNum = num;

    while (num != 0) 
    {
        remainder = num % 10;
        rNum = rNum * 10 + remainder;
        num /= 10;
    }

    if (oNum == rNum) {
        printf("%d is a palindrome.\n", oNum);
    } else {
        printf("%d is not a palindrome.\n", oNum);
    }

    return 0;
}



