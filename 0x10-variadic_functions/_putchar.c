int _putchar(char c);

/**
 * struct funckey - a key for picking functions to use for printing
 * in 3-print_all.c
 *
 * @f: function to use for printing
 * @spec: character specifier
 */
typedef struct funckey
{
	void (*f)(va_list);
	char spec;
} funckey;
