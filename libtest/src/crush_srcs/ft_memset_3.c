#include "libft.h"
#include <string.h>
#include <stdlib.h>
#include <limits.h>

#define PTR_SIZE 	10

int		main(void)
{
	void *b = NULL;
	memset(b, 1, 1);
	free(b);
	return (0);
}