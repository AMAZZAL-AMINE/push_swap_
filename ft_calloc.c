#include "push_swap.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			count;

	str = s;
	count = 0;
	while (n--)
	{
		str[count++] = 0;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*sr;

	if (count == SIZE_MAX || size == SIZE_MAX)
	{
		return (0);
	}
	sr = malloc(count * size);
	if (!sr)
	{
		return (0);
	}
	ft_bzero(sr, count * size);
	return (sr);
}