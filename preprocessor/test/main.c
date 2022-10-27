#include <stdio.h>
#include <stdlib.h>

#define ABS(x) ((x) < 0 ? (-x) : (x))

int main ()
{
	int result;

	result = ABS(1024-2048);
	printf("%d\n", result);
	return (0);
}
