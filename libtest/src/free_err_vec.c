#include "test.h"

void	free_err_vec(t_error **err_vec, int ERR_VEC)
{
	for (int i = 0; (i < ERR_VEC) && (err_vec[i]); i++)
		free(err_vec[i]->message);
	free(err_vec);
}
