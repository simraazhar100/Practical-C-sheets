#include<stdio.h>
#include<conio.h>
void main()
{
float celsius, Fahrenheit;
clrscr();
printf("Enter temperature in Fahrenheit:");
scanf ("%f",& Fahrenheit);
printf("***CONVERSION OF FAHRENHEIT TEMPERATURE INTO CELSIUS***\n");
celsius = 5.0/9.0*(Fahrenheit-32);
printf("Temperature in Celsius is:%f\n",celsius);
getch();
}
