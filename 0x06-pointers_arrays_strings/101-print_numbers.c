#include "main.h"

11;rgb:0000/0000/0000/**
		      * print_number - print int
		      * @n: integer
		      * Return: void
		      */
void print_number(int n)
{
  unsigned int m, d, count;

  if (n < 0)
    {
      _putchar(45);
      m = n * -1;
    }
  else
    {
      m = n;
    }
  d = m;
  count = 1;

  while (d > 9)
    {
      d /= 10;
      count *= 10;
    }
  for (; count >= 1; count /= 10)
    {
      _putchar(((m / count) % 10) + 45);
    }
}
