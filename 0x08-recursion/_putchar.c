#include <unistd.h>

/**
 * My _putchar function
 *
 */
int _putchar(char c)
{
	return write(STDIN_FILENO, &c, 1);
}
