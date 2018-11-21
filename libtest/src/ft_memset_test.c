#include "test.h"

#define PTR_SIZE 	5
#define MSG_SIZE 	50
#define ERRVEC_SIZE 20

static int	is_ok_value(void *resc, void *reso)
{
	for (int i = 0; i < PTR_SIZE; i++)
	{
		if (((unsigned char*)resc)[i] != ((unsigned char*)reso)[i])
			return (0);
	}
	return (1);
}

void		ft_memset_test(void)
{
	t_error **err_vec = (t_error**)calloc(ERRVEC_SIZE, sizeof(t_error*));

	void *bc = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);
	void *bo = (void*)malloc(sizeof(unsigned char) * PTR_SIZE);

	for (int i = 0; i < PTR_SIZE; i++)
	{
		memset(bo, 0, PTR_SIZE);
		memset(bo, 0, PTR_SIZE);
		int c = i - 1;
		size_t len = i;
		void *resc = ft_memset(bc, c, len);
		void *reso = memset(bo, c, len);
		int ok_flag = is_ok_value(resc, reso);
		if ((resc != bc) || (ok_flag == 0))
		{
			printf("%s[FAIL] %s", KRED, KNRM);
			if (resc != bc)
			{
				char *msg = (char*)malloc(sizeof(char) * MSG_SIZE);
				sprintf(msg, "returned ptr doesn't match the given one");
				push_back_error(err_vec, i + 1, msg);
				free(msg);
			}
			if (ok_flag == 0)
			{
				char *msg = (char*)malloc(sizeof(char) * MSG_SIZE);
				sprintf(msg, "ft_memset(ptr, %d, %ld) ptr_size = %d", c, len, PTR_SIZE);
				push_back_error(err_vec, i + 1, msg);
				free(msg);
			}
		}
		else
			printf("%s[OK] %s", KGRN, KNRM);
	}
	free(bc);
	free(bo);
	DIR *d;
	struct dirent *dir;
	char *dirname = "./src/crush_bin/ft_memset/";
	d = opendir(dirname);
	char *bin = (char*)malloc(sizeof(char) * MSG_SIZE);
	while ((dir = readdir(d)) != NULL)
	{
		if (dir->d_type != DT_REG)
			continue ;
		sprintf(bin, "%s%s", dirname, dir->d_name);
		int retval = system(bin);
		int n = atoi(dir->d_name);
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
