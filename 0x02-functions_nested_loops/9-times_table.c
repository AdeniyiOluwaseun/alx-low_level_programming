#include <stdio.h>
#include "main.h"
/**
 * times_table - function prints times table to 9
 * Return: void
 */
void times_table(void)
{
int main(void)
{
int c = 0;
int d = 0;
int e = 1;

while (c <= 5)
{
int d = 1;
while (d > 0 && <= 9)
{
if (c == 0)
{
printf("%d, ", 0);
d++;
}
else if ( c == 1)
{
printf("%d, ", d);
d++;
}
while (c > 1)
{
printf("%d, ", d);
d++;
}
}
printf("%d, ", 0);
c = c + 1;
putchar('\n');
}
return (0);
}
}
