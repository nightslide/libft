#include "libft.h"
#include "test.h"

#define PTR_SIZE 	0

int		main(void)
{
	void *b = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	bzero(b, 0);
	return (0);
}
