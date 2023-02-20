#include <stdio.h>
/**
 * main - print the alphabet in lowercase
 * Return: 0 always
*/
int main (void)
{
    char i;
    
    for (i='a', i<='z', i++)
    {
        putchar(i);
    }
    putchar('\n');
    return 0;
}
