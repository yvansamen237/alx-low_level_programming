#include <stdio.h>
/**
 * main - print the alphabet in lowercase except 'q' and 'e'
 * Return: 0 always
*/
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
{
continue;
}
putchar(i);
}
putchar('\n');
return (0);
}
