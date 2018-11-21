#include "libft.h"
#include "test.h"

#define PTR_SIZE 	10

int		main(void)
{
	void *dst = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	void *src = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	int n = INT_MAX;
	ft_memcpy(dst, src, n);
	free(dst);
	return (0);
}
