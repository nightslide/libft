#include "libft.h"
#include "test.h"

#define PTR_SIZE 	10

int		main(void)
{
	void *dst = NULL;
	void *src = NULL;
	int n = PTR_SIZE;
	ft_memmove(dst, src, n);
	free(dst);
	return (0);
}
