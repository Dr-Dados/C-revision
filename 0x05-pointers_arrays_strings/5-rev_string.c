#include "main.h"
void rev_string(char *s) {
  int len = 0,i;
  char temp;
    while (s[len] != '\0')
        len++;
    len = len-1;
    for (i = 0 ;i < len/2;i++)
      {
	temp = s[i];
	s[i]=s[len-i];
	s[len-i]=temp;
      }
    
}
