#include "main.h"

int _isupper(int c)
{
  int r = 0;
  if(c>='a' && c<='z')
    {
      r= 0;
    }
    else if (c>='A' && c<='Z')
      {
	r=1;
      }
  return(r);
}
