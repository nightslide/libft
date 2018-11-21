#include "test.h"

void	push_back_error(t_error **err_vec, int test_num, char *message)
{
	static int n = 0;
	t_error *new_arr = (t_error*)malloc(sizeof(t_error) * 1);
	new_arr->test_num = test_num;
	new_arr->message = strdup(message);
	err_vec[n++] = new_arr;
}
