#include<stdio.h>
int  main()
{
    int a,table,i;
    printf("Enter the number you want table of:\n ");
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        table=a*i;
        printf(" %dx%d=%d\n",a,i,table);
    }
}
