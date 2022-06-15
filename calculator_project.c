#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * MAIN - a scientific calculator with multiple entries
 *RETURN: Always 0 (Success)
 */

int main(void)
{
/*
 *declaration of variable op1 and op 2
*/
int op1, op2, n1, n2, j, n3;
float res, sec;
char ch;
do {
/*
 *displays multiple operations
 *available in this calculator
 */
printf(" Select an operation to perform the calculation in C Calculator: ");
printf("\n 1 Addition \t \t 2 Subtraction\n 3 Multiplication \t 4 Division");
printf("\n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");

scanf("%d", &op1);

switch (op1)
{
case 1:
/*
 *Add two numbers
*/
printf(" You chose: Addition");
printf("\n Enter First Number: ");
scanf(" %d", &n1);
printf(" Enter Second Number: ");
scanf(" %d", &n2);
res = n1 + n2;
printf(" Addition of two numbers is: %.2f", res);
j = n1 + n2;
break;

case 2:
/*
 *Subtract two numbers
*/
printf(" You chose: Subtraction");
printf("\n Enter First Number: ");
scanf(" %d", &n1);
printf(" Enter Second Number: ");
scanf(" %d", &n2);
res = n1 - n2;
printf(" Subtraction of two numbers is: %.2f", res);
j = n1 - n2;
break;

case 3:
/*
 *Multiplication of the numbers
*/
printf(" You chose: Multiplication");
printf("\n Enter First Number: ");
scanf(" %d", &n1);
printf(" Enter Second Number: ");
scanf(" %d", &n2);
res = n1 * n2;
printf(" Multiplication of two numbers is: %.2f", res);
j = n1 * n2;
break;

case 4:
/*
 *Division of the numbers
*/
printf(" You chose: Division");
printf("\n Enter First Number: ");
scanf(" %d", &n1);
printf(" Enter Second Number: ");
scanf(" %d", &n2);
if (n2 == 0)
{
printf(" \n Divisor cannot be zero. Please enter another value ");
scanf("%d", &n2);
}
res = n1 / n2;
printf(" Division of two numbers is: %.2f", res);
j = n1 / n2;
break;

case 5:
/*
 *retrieving square of a number
*/
printf(" You chose: Square");
printf("\n Enter First Number: ");
scanf(" %d", &n1);

res = n1 * n1;
printf(" Square of %d number is: %.2f", n1, res);
j = n1 * n1;
break;

case 6:
/*
 *getting the square root of the number
*/
printf(" You chose: Square Root");
printf("\n Enter First Number: ");
scanf(" %d", &n1);

res = sqrt(n1);
printf(" Square Root of %d number is: %.2f", n1, res);
j = sqrt(n1);
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
} while (op1 != 7);

do {
printf(" Select an operation to perform the calculation in C Calculator: ");
printf("\n 1 Addition \t \t 2 Subtraction\n 3 Multiplication \t 4 Division");
printf("\n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, Make a choice ");

scanf("%d", &op2);

switch (op2)
{
case 1:
printf(" You chose: Addition");
printf("\n Enter last Number: ");
scanf(" %d", &n3);
sec = j + n3;
printf(" Addition of the last numbers is: %.2f", sec);
break;

case 2:
printf(" You chose: Subtraction");
printf("\n Enter last Number: ");
scanf(" %c", &n3);
sec = j - n3;
printf(" Subtraction of the last two numbers is: %.2f", sec);
break;

case 3:
printf(" You chose: Multiplication");
printf("\n Enter First Number: ");
scanf(" %c", &n3);
sec = j * n3;
printf(" Multiplication of the last two numbers is: %.2f", sec);
break;

case 4:
printf(" You chose: Division");
printf("\n Enter last Number: ");
scanf(" %c", &n3);
if (n3 == 0)
{
printf(" \n Divisor cannot be zero. Please enter another value ");
scanf("%d", &n3);
}
sec = j / n3;
printf(" Division of the last two numbers is: %.2f", sec);
break;

case 5:
printf(" You chose: Square");

sec = j * j;
printf(" Square of %d number is: %.2f", j, sec);
break;

case 6:
printf(" You chose: Square Root");

sec = sqrt(j);
printf(" Square Root of %d number is: %.2f", j, sec);
break;

case 7:
printf(" You chose: Exit");
exit(0);
break;

default:
printf(" Something is wrong in the third number ! ");
break;
}
printf(" \n \n ********************************************** \n ");
op2 = 7;
} while (op2 != 7);
return (0);
}
