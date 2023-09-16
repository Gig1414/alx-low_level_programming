#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a:first integer
 * @b:second integer
 * @c:third integer
 * return: always 0 (success)
 */
int largest_number(int a, int b, int c)
{
<<<<<<< HEAD
int largest;
if (a > b && b > c)
{
largest = a;
}
else if (b > a && a > c)
{
largest = b;
}
else
{
largest = c;
}
return: (0);
=======
    int largest;
if (a >= b && b >= c)
    {
        largest = a;
    }
    else if (b >= a && a >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
>>>>>>> 5477f596d910dc57218d29ef05bc767b29cf5958
}
