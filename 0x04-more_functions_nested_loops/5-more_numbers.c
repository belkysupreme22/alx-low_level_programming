#include "main.h"

/**
 * more_numners- print numbers
 */
void more_numners(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 15; j++)
_putchar(j + '0');
}
_putchar('\n');
}
