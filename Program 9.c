#include<stdio.h>
float main()
{
float a, b, c, d, e, f, g;
printf("Enter the numbers of minutes");
scanf("%f",&a);
e=a*60;
printf("Enter the number of hours");
scanf("%f",&b);
f=b*3600;
printf("Enter the number of days");
scanf("%f",&c);
g=c*21600;
d=e+f+g;
printf("The total number of seconds is %f",d);
}