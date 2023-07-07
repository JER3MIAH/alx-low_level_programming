#include <main.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string `b` that is not 0 or 1, or if `b` is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	char current;

	if (b == NULL)
		return (0);

	while ((current = *b++) != '\0')
	{
		/* Check if the current character is a valid binary digit */
		if (current != '0' && current != '1')
			return (0);

		/* Convert the binary digit to its decimal value */
		result = (result << 1) + (current - '0');
	}

	return (result);
}
