#include "main.h"

char *_strcpy(char *dest, char *src)
{
    char *temp = dest;
    int i = 0,len = 0;
    while(dest[len] != '\0')
        len++;
    while(src[i] != '\0')
    {
        *(temp+len) = src[i];
        i++;
        temp++;
    }
   return(dest);
}
