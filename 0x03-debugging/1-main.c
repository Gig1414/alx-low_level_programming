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
<<<<<<< HEAD
while (i < 10)
{
putchar(i);
}
printf("Infinite loop avoided (\n'));
=======
/*while (i < 10)*/
/*{*/
/*putchar(i);*/
/*}*/
printf("Infinite loop avoided! \\o/\n");
>>>>>>> 5477f596d910dc57218d29ef05bc767b29cf5958
return (0);
}
