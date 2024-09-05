#include<stdio.h>
float main()
{
float seconds,hours, minutes, days;
printf("Enter the seconds needed for one earth revolution");
scanf("%f",&seconds);
minutes=seconds/60;
printf("\n Earth take %f minutes to complete one revolution",minutes);
hours=minutes/60;
printf("\n Earth take %f hours to complete one revolution", hours);

days =hours/24;
printf("\n Earth take %f days to complete one revolution", days);

}