#include "libft.h"
#include "test.h"

#define PTR_SIZE 	10

int		main(void)
{
	void *src = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	void *dst = src - INT_MAX;
	int n = PTR_SIZE;
	ft_memmove(dst, src, n);
	free(src);
	return (0);
}
