#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <loops.h>
/*
 * MAIN - a scientific calculator
 *RETURN: Always 0 (Success)
 */

int main(void)
int _double(int a, int b) 
{
switch (op1)
{
case 1:
/*
 *Add two numbers
*/
printf(" You chose: Addition");
printf("\n Enter First Number: ");
scanf(" %d", &a);
printf(" Enter Second Number: ");
scanf(" %d", &b);
res = a + b;
printf(" Addition of two numbers is: %.2f", res);
break;

case 2:
/*
 *Subtract two numbers
*/
printf(" You chose: Subtraction");
printf("\n Enter First Number: ");
scanf(" %d", a);
printf(" Enter Second Number: ");
scanf(" %d", b);
res = a - b;
printf(" Subtraction of two numbers is: %.2f", res);
break;

case 3:
/*
 *Multiplication of the numbers
*/
printf(" You chose: Multiplication");
printf("\n Enter First Number: ");
scanf(" %d", &a);
printf(" Enter Second Number: ");
scanf(" %d", b);
res = a * b;
printf(" Multiplication of two numbers is: %.2f", res);
break;

case 4:
/*
 *Division of the numbers
*/
printf(" You chose: Division");
printf("\n Enter First Number: ");
scanf(" %d", &a);
printf(" Enter Second Number: ");
scanf(" %d", &b);
if (b == 0)
{
printf(" \n Divisor cannot be zero. Please enter another value ");
scanf("%d", b);
}
res = a / b;
printf(" Division of two numbers is: %.2f", res);
break;

case 5:
/*
 *retrieving square of a number
*/
printf(" You chose: Square");
printf("\n Enter First Number: ");
scanf(" %d", &a);

res = a * a;
printf(" Square of %d number is: %.2f", n1, res);
break;

case 6:
/*
 *getting the square root of the number
*/
printf(" You chose: Square Root");
printf("\n Enter First Number: ");
scanf(" %d", &a);

res = sqrt(a);
printf(" Square Root of %d number is: %.2f", n1, res);
break;

case 7:
printf(" You chose: Exit");
exit(0);
break;
default:
printf(" Something is wrong in the first two numbers! ");
break;
}
printf(" \n \n ********************************************** \n ");
op1 = 7;
while (op1 != 7);
return (0);
}
