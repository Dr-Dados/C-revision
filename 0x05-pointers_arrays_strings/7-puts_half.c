#include "main.h"

void puts_half(char *str)
{
  int len,i;
  len =0;
  while (str[len]!='\0')
    len++;
  for (i=len/2;i<len;i++)
    {
      _putchar(str[i]);
    }
  _putchar('\n');
}
