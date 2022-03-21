#include"main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: value to be swapped
 * @b: value to be swapped
 * description:-
 * step 1: store pointer to b in a temporary value
 * step 2: update pointer to b to match pointer to a
 * step 3: update pointer to a to match temp
 * return: nothing
 */
void swap_int(int *a, int *b)
{
int temp;
temp = *b;
*b = *a;
*a = temp;
}
