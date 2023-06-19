#include "main.h"

char *_strcat(char *dest, char *src)
{
  char *temp = dest;
  int len=0,i=0;
  while (dest[len]!='\0')
    {
      *temp = dest[len];
      temp++;
      len++;
    }
  while(src[i]!='\0')
    {
      *temp = src[i];
      temp++;
      i++;
    }
  return dest;
}
