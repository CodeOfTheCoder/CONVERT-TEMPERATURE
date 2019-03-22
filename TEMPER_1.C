#include<stdio.h>
#include<conio.h>
void main()
{
	 int f,c;

	 clrscr();

//Convert the given temperature from Fahrenheit to Celsius

	printf("Enter the Fahrenheit:::");
	scanf("%d",&f);

// Formula of convert the given temperature from Fahrenheit to Celsius

	c=(f-32)/1.8;

	printf("\nCelsius = %d",c); // Print Celsius

// Convert the temperature from Celsius to Fahrenheit

	printf("\n\nEnter the Celsius:::");
	scanf("%d",&f);

//Formula of convert the given temperature from Celsius to Fahrenheit

	(f=(c* 9/5)+32);

	printf("\nFahrenheit = %d",f); // Print Fahrenhrit

	getch();
}
