#include<stdio.h>
int main()
{   int i,j;


    for(j=1;j<=5;j++)
{
    for(i=1;i<=j;i++)
    switch(j)
    {
        case 1:printf("A");
            break;
        case 2:printf("B");
            break;
        case 3:printf("C");
            break;
        case 4:printf("D");
            break;
        case 5:printf("E");
            break;
    }printf("\n");
}
}
