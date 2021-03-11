/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
void main()
{
float celsius,farhenheit;

printf("enter temp in farhenheit");
scanf("%f",&farhenheit);
celsius=(farhenheit-32)*5/9;
printf("temperature in celsius=%f",celsius);
getch();
}