#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase, and upper case
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int lw = 'a';
int up= 'A';

while (lw <= 'z')
{
putchar(lw);
lw += 1;
}

while (up <= 'Z')
{
putchar(up);
up += 1;
}

return (0);
}
