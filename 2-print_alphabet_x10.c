#include "holberton.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times in lowercase
 */
void print_alphabet_x10(void)
{
    char letter;
    int i, j;

    for (i = 0; i < 10; i++)  /* loop 10 times */
    {
        for (j = 0, letter = 'a'; j < 26; j++, letter++)  /* print the alphabet */
        {
            _putchar(letter);
        }
        _putchar('\n');  /* print a newline after each set of 26 letters */
    }
}

