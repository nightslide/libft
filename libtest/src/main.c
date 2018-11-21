#include "test.h"

int		main(void)
{
	printf("%sft_memset:\t", KYEL);
	ft_memset_test();
	printf("%sft_bzero:\t", KYEL);
	ft_bzero_test();
	printf("%sft_memcpy:\t", KYEL);
	ft_memcpy_test();
	return (0);
}
