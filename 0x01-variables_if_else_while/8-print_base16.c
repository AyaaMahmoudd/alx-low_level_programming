#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int digit = 48 /*48: decimal rep of 0*/
		while (digit <= 102) /*102: decimal rep of f*/
		{
			putchar(digit);
			/*after 9 we jump till 96; */
			if (digit == 57)
			digit += 39;
			digit++;
		}
		putchr('\n');
		return (0);
}
