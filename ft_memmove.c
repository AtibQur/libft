#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_char;
	char	*dest_char;

	src_char = (char *) src;
	dest_char = (char *) dst;
	if (src_char == dest_char)
		return (dst);
	if (dest_char < src_char)
	{
		while (len--)
		{
			*dest_char = *src_char;
			dest_char++;
			src_char++;
		}
		return (dst);
	}
	if (src_char < dest_char)
	{
		while (len--)
		{
			*(dest_char + len) = *(src_char + len);
		}
	}
	return (dst);
}
