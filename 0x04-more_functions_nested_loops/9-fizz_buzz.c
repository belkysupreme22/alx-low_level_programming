#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - printing up to 100
 */
void fizz_buzz(void)
{
int i;

for (i = 0; i < 100; i++)
{
if (i == 100)
printf("BUZZ ");
else if (i % 3 == 0 && i % 5 == 0)
printf("FIZZBUZZ ");
else if (i % 3 == 0)
printf("FIZZ ");
else if (i % 5 == 0)
printf("BUZZ ");
else
printf("%d ", i);
}
printf("\n");
}
