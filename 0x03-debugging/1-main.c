#include <stdio.h>
/**
* main - causes an infinite loop
* return: 0 (success)
*/
int main(void)
{
int i;
printf("Infinite loop incoming:("\n");
i = 0;
while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided (\n'));
/*while (i < 10)*/
/*{*/
/*putchar(i);*/
/*}*/
printf("Infinite loop avoided! \\o/\n");
return (0);
}
