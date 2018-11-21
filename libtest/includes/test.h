#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <signal.h>
#include <dirent.h>

#define KNRM "\x1B[0m"
#define KRED "\x1B[31m"
#define KGRN "\x1B[32m"
#define KYEL "\x1B[33m"
#define KBLU "\x1B[34m"
#define KMAG "\x1B[35m"
#define KCYN "\x1B[36m"
#define KWHT "\x1B[37m"

typedef	struct	s_error
{
	int 		test_num;
	char		*message;
}				t_error;

void	push_back_error(t_error **err_vec, int test_num, char *message);
void	print_errors(t_error **err_vec);

void	ft_memset_test(void);
