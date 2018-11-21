#include "libft.h"
#include "test.h"

#define PTR_SIZE 	10

int		main(void)
{
	void *dst = NULL;
	void *src = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	int n = 1;
	ft_memmove(dst, src, n);
	free(dst);
	return (0);
}
