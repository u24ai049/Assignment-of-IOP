#include<stdio.h>

int main()
{
int M, P, C, CM, E;
    printf("Enter the marks obtained in maths");
    scanf("%d",&M);
       printf("Enter the marks obtained in physics");
    scanf("%d",&P);
       printf("Enter the marks obtained in chemistry");
    scanf("%d",&C);
       printf("Enter the marks obtained in Entrence exam");
    scanf("%d",&E);
    CM=M/2+P/2+C/2+E;
    printf("The cut off marks are %d",CM);
    return 0;
}