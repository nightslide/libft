#include <string.h>

static size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = -1;
	while (src[++i] && (i < (dstsize - dst_len - 1)) && (dstsize > dst_len))
		dst[i + dst_len] = src[i];
	if (dstsize != 0)
		dst[i + dst_len] = '\0';
	if (dstsize < dst_len)
		return (dstsize + src_len);
	else
		return (dst_len + src_len);
}
