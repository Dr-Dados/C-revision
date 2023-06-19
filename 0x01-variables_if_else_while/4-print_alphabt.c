#include <stdio.h>

int main(void)
{
  char s[52]= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int i ;
  for (i = 0 ; i < 52 ;i++)
    {
      if (s[i] == 'e' || s[i] == 'q')
	{
	  continue;
	}
      putchar(s[i]);
    }
  putchar('\n');
  return(0);
}
