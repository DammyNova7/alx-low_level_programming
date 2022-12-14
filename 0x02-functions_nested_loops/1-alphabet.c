#include "main.h"

/**
 * print_alphabet(void)-function
 * A function that prints the letters of the alphabet
 * in lowercase
 * using _putchar to display to stdout
 * _putchar is used only twice
 */
void print_alphabet(void)
{
int i = 'a';

for (; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');

}
