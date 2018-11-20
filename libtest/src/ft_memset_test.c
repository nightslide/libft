#include "test.h"

void	ft_memset_test(void)
{
	char **err = (char**)calloc(100, sizeof(char*));
	void *b = (void*)malloc(sizeof(unsigned char) * 10);
	int c = 0;
	size_t len = 10;
	void *res = ft_memset(b, c, len);
	int ok_flag = is_ok_value(b, c);
	if (res != b) || ()
	{
		printf("%s[FAIL]\n", KRED);
		err[1] = strdup("returned pointer doesn't equal the given one");
	}
	if ( == 1)
	{

	}
	else 
	{
		
		printf("%s[OK] ", KGRN);
	}
}
