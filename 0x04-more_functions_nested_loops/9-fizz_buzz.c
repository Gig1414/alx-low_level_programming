#include "main.h"
/**
* main - prints the numbers from 1 to 100, followed by new line
* but for multiplies of three prints fizz instead of the number
* and for the multiplies of five prints buzz
* return: always 0 (success)
*/
int main (void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 ! = 0)
{
printf("fizz");
}
else if (i % 5 == 0 && i % 3 != 0)
}
printf("buzz");
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("fizzbuzz");
}
else if (i  == 1)
{
printf("%d", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
return (0);
}
