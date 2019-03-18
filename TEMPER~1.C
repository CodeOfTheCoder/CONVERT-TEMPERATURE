#include<stdio.h>
#include<conio.h>
void main()
{
	 int f,c;
	 clrscr();
//convert the given temperature from Fahrenheit to Celsius	
	printf("enter the fahrenheit::");
	scanf("%d",&f);
	
	c=(f-32)/1.8; // formula of convert the given temperature from Fahrenheit to Celsius
	
	printf("\ncelsius=%d",c); // print celsius

// convert temperature from Celsius to Fahrenheit
	
	printf("\n\n\nenter the celsius::");
	scanf("%d",&f);

	(f=(c* 9/5)+32);  //formula of convert the given temperature from celsius to fahrenheit
	
	printf("\nfahrenheit=%d",f);
	
	getch();
	

}
