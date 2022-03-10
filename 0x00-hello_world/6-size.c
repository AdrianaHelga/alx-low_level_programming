#include <stdio.h>
int main()
{
	int i;
	float f;
	char c;
	long int l;
	long long int m;

	printf("Size of a char is: %lu byte(s).\n", (unsigned long)sizeof(c));
	printf("Size of an int is: %lu byte(s).\n", (unsigned long)sizeof(i));
	printf("Size of a long int is: %lu byte(s).\n", (unsigned long)sizeof(l));
	printf("Size of a long long int is: %lu byte(s).\n", (unsigned long)sizeof(m));
	printf("Size of a float is: %lu byte(s).\n", (unsigned long)sizeof(f));
	return 0;
}	
