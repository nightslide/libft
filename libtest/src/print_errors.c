#include "test.h"

void	print_errors(t_error **err_vec)
{
	printf("\n");
	for (int i = 0; err_vec[i]; i++)
		printf("%s%d. %s\n", KRED, err_vec[i]->test_num, err_vec[i]->message);
}