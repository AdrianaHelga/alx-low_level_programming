#include "main.h"
#include<stdio.h>
/**
 * @brief 
 * 
 */

void _puts(char *str)
{

char *ptr;
ptr = str;
while(*ptr!='\0'){
_putchar(ptr);
*ptr++;
}    

}