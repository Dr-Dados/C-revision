#include "main.h"
#include <stdio.h>

int print_last_digit(int n){
  int r = n%10;
  if(r < 0)
    r = -r;
  _putchar(r+48);
  return (r);
}
  
