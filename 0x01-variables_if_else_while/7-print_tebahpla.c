#include <stdio.h>
/**
 * main - print all the digits of base 10
 * Return: 0 always
*/
int main(void)
{
char i;
for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
