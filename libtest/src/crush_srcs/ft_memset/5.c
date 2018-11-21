#include "libft.h"
#include "test.h"

#define PTR_SIZE 	10

int		main(void)
{
	void *b = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	ft_memset(b, 1, INT_MIN);
	free(b);
	return (0);
}
