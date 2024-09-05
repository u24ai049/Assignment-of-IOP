#include<stdio.h>
float main()
{
float a, sale;
printf("What's the temperature today in Farenheit? ");
scanf("%f",&a);
sale=(a-32)*5/9; 
printf("The value of temperature in celcius = %f",sale);
}