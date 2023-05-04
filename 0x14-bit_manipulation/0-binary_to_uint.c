#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary numbers to an unsigned int
 * @b: this string contains the binary number
 *
 * Return: the number after conversion
 */
unsigned int binary_to_uint(const char *b)
{
        int i;
        unsigned int Dvalue = 0;

        if (!b)
                return (0);

        for (i = 0; b[i]; i++)
        {
                if (b[i] < '0' || b[i] > '1')
                        return (0);
                Dvalue = 2 * Dvalue + (b[i] - '0');
        }

        return (Dvalue);
}
