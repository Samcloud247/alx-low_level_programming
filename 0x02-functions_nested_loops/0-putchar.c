#include "_putchar.h"
#include "main.h"
/**
* *main - this program prints _putchar
* *Return: (0) if successful
*/
int main(void)
{
	char *var = "_putchar";

	while (*var)
/*length of the array var*/
	{
		_putchar(*var);
		var++;
	}
		_putchar('\n');
	return (0);
}
