#include "test.h"

#define PTR_SIZE 	5
#define MSG_SIZE 	50
#define ERRVEC_SIZE 20

static int	is_ok_value(void *s, int n)
{
	for (int i = 0; i < n; i++)
	{
		if (((unsigned char*)s)[i] != 0)
			return (0);
	}
	return (1);
}

void		ft_bzero_test(void)
{
	t_error **err_vec = (t_error**)calloc(ERRVEC_SIZE, sizeof(t_error*));

	void *s = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);

	for (int i = 0; i < PTR_SIZE; i++)
	{
		memset(s, 10, PTR_SIZE);
		size_t n = i;
		ft_bzero(s, n);
		if (is_ok_value(s, n) == 0)
		{
			printf("%s[FAIL] %s", KRED, KNRM);
			char *msg = (char*)malloc(sizeof(char) * MSG_SIZE);
			sprintf(msg, "ft_bzero(s, %zu) s_size = %d", n, PTR_SIZE);
			push_back_error(err_vec, i + 1, msg);
			free(msg);
		}
		else
			printf("%s[OK] %s", KGRN, KNRM);
	}
	free(s);
	DIR *d;
	struct dirent *dir;
	char *dirname = "./src/crush_bin/ft_bzero/";
	d = opendir(dirname);
	char *bin = (char*)malloc(sizeof(char) * MSG_SIZE);
	while ((dir = readdir(d)) != NULL)
	{
		if (dir->d_type != DT_REG)
			continue ;
		sprintf(bin, "%s%s", dirname, dir->d_name);
		int retval = system(bin);
		int n = dir->d_name[0] - '0';
		if ((n % 2) == 0)
		{
			if (!WIFSIGNALED(retval))
				printf("%s[OK] %s", KGRN, KNRM);
			else
				printf("%s[CRUSH [%d]] %s", KRED, n, KNRM);
		}
		else
		{
			if (WIFSIGNALED(retval))
				printf("%s[OK] %s", KGRN, KNRM);
			else
				printf("%s[NO CRUSH [%d]] %s", KRED, n, KNRM);
		}
	}
	closedir(d);
	free(bin);
	print_errors(err_vec);
	free_err_vec(err_vec, ERRVEC_SIZE);
}
