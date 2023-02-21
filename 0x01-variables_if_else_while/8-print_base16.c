#include <stdio.h>
/**
 * main - print all the digits of base 10
 * Return: 0 always
*/
int main(void)
{
int i;
char j;
for (i = 48; i <= 57; i++)
{
putchar(i);
}
for (j = 'a'; j <= 'f'; j++)
{
putchar(j);
}
putchar('\n');
return (0);
}
