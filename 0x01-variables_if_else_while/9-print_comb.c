#include <stdio.h>
/**
 * main - A program that prints numbers.
 * Return: 0 (Success)
 */
int main(void)
{
char i;

for (i = '0'; i <= '8'; i++)
{
putchar(i);
putchar(',');
if (i == '8')
putchar('9');
}
return (0);
}
