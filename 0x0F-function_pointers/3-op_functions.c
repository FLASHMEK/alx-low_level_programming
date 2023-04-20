#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Add two numbers
 * @a: First number
 * @b: second number
 *
 * Return: The sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Sub from two numberas
 * @a: first number
 * @b: second number
 *
 * Return: thedifference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: answer
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - division of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: division of a by b answer
 */
int op_mod(int a, int b)
{
	return (a % b);
}
