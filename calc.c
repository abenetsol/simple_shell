#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "loops.h"
#include "operations.c"
#include "operations2.c"
/**
 *main - a scientific calculator
 *Return: Always 0 (Success)
 */

int main(void)
{
	int op1, n1, n2;
	double res;
do {
printf(" Select an operation to perform the calculation in C Calculator: ");
printf("\n 1 Addition \t \t 2 Subtraction\n 3 Multiplication \t 4 Division");
printf("\n 5 Square \t \t 7 Exit \n \n Please ");
scanf("%d", &op1);
choose(op1);
if (op1 == 5 || op1 == 6)
{
printf("\n Enter First Number: ");
n1 = nums();
res = calc(n1, 0, op1);
}
else
{
printf("\n Enter First Number: ");
n1 = nums();
printf("\n Enter second Number: ");
n2 = nums();

res = calc(n1, n2, op1);
}
printf("%f \n \n **********************************\n", res);
op1 = 7;
} while (op1 != 6);
return (0);
}
/**
 *choose - matimatical choose
 *@a: choosen character
 *Return: char
 */
int choose(int a)
{
	switch (a)
{
case 1:
printf(" You chose: Addition");
return (1);
break;
case 2:
printf(" You chose: Subtraction");
return (2);
break;
case 3:
printf(" You chose: Multiplication");
return (3);
break;
case 4:
printf(" %d You chose: Division", a);
return (4);
break;
case 5:
printf(" You chose: Square");
return (5);
break;
case 6:
printf(" You chose: Exit");
exit(0);
break;
default:
printf(" Something is wrong in the first two numbers! ");
break;
}
	return (a);
printf(" \n \n ********************************************** \n ");
}
/**
 *nums - inputed numbers
 *
 *
 *Return: INT inputed numbers
 */
int nums(void)
{
	int n;

	scanf("%d", &n);
	return (n);
}

/**
 *calc - calculate annd displays
 *@a: first number
 *@b: second number
 *@op: operation
 *Return: void
 */
double calc(int a, int b, int op)
{
double res;
switch (op)
{
case 1:
	printf(" You chose: Addition");
	res = add(a, b);
	printf(" Addition of two numbers is: %.2f", res);
	break;
case 2:
	printf(" You chose: Subtraction");
	res = sub(a, b);
	printf(" Subtraction of two numbers is: %.2f", res);
	break;
case 3:
	printf(" You chose: Multiplication");
	res = mult(a, b);
	printf(" Multiplication of two numbers is: %.2f", res);
	break;
case 4:
	printf(" You chose: Division");
	if (b == 0)
	{
	printf(" \n Divisor cannot be zero. Please enter another value ");
	b = nums();
	}
	res = _div(a, b);
	printf(" Division of two numbers is: %.2f", res);
	break;
case 5:
	printf(" You chose: Square");
	res = sqr(a);
	printf(" Square of %d number is: %.2f", a, res);
	break;
case 6:
	printf(" You chose: Exit");
	exit(0);
	break;
}
return (res);
}
