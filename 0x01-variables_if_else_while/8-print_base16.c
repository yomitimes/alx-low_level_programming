#include <stdio.h>
/**
 * main - A program that prints numbers.
 * Return: 0 (Success)
 */
int main(void)
{
char i;
char j;

for (i = '0'; i <= '9'; i++)
putchar(i);
for (j = 'a'; j <= 'f'; j++)
putchar(j);
putchar('\n');
return (0);
}
