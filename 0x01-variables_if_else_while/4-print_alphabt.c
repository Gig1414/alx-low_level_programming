#include <stdlib.h> 
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet without q and e.
 * 
 * Return: Always 0 (success)
*/
  int main(void)
{
  int i;
   for (i = 97;  i < 123; i++)
 {
     if (i  != 101 && i  !=133)
{
    putchar(i);
  }
  }
  putchar('\n');
  return (0);
  }
