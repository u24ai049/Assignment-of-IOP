include<stdio.h>

int main() {
    char operator;
    float num1, num2, result;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %f + %f = %f\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %f - %f = %f\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %f * %f = %f\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %f / %f = %f\n", num1, num2, result);
            } else {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
```

### Explanation
1. The program prompts the user to enter an operator (`+`, `-`, `*`, `/`).
2. It then reads two numbers from the user.
3. The `switch` statement is used to perform the arithmetic operation based on the operator entered.
4. For division, the program checks for division by zero to prevent errors.

You can copy and paste this code into your C compiler or IDE to run it.
