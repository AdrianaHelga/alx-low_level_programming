#include "main.h"
 
 /**
  * @brief 
  * 
  */

char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;
    
    while (n--)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return start;

}
