#include <stdio.h>

/**
* add - Adds two integers and returns the result.
* @a: the first operand.
* @b: the second operand.
* Return:The sum of a and b.
*/
int add(int a, int b)
{
	return (a + b);
}

/**
* sub - Subtracts the second int from the first int and returns the result.
* @a: the first operand.
* @b: the second operand.
* Return:The difference between a and b.
*/

int sub(int a, int b)
{

	return (a - b);
}

/**
* mul- Multiplies two integers and returns the result.
* @a: An integer, the first operand.
* @b: An integer, the second operand.
* Returns:The product of a and b.
*/

int mul(int a, int b) {

	return (a * b);
}

/**
*div- Divides the first integer by the second integer and returns the result.
* @a: An integer, the dividend.
* @b: An integer, the divisor.
* Return: The quotient of a divided by b.
*/

int div(int a, int b) {

	if (b == 0) {
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
* mod - returns the result of dividing the first int by the second int .
* @a: the dividend.
* @b: the divisor.
* Return:The remainder of a divided by b.
*/
int mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error: Division by zero\n");
		return (0);
	}
	return (a % b);
}
