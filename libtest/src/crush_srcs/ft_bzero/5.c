#include "libft.h"
#include "test.h"

#define PTR_SIZE 	1

int		main(void)
{
	void *b = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	bzero(b, INT_MAX);
	free(b);
	return (0);
}
