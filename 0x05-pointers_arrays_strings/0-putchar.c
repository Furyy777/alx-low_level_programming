#include <unistd.h>

/**
 * _putchar - write the character c stdout
 * @c: The charcter to print
 *
 * Return: On success 1.
 * on error, -1 is returned , amd errno is set apropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
