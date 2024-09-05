#include <stdio.h>

int main() {
    char sedha;
    printf("Enter the character");
    scanf("%c",&sedha);
    if(sedha>= 'A' && sedha<='Z')
    {printf("The character is a capital letter");}
else if (sedha>='a' && sedha<='z')
{printf("The character is a small case letter");}
else if (sedha>='0' && sedha<='9')
{printf("The character is a digit");}
else
{printf("The character is a special symbol");}

    return 0;
}
