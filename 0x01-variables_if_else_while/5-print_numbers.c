#include <stdio.h>
/**
* main-entry point
* * * printd single digit number of base 10
* Return: 0 if successful
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}

putchar('\n');

return (0);
}
