#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*str;

	if (min > max)
		return (0);
	size = max - min;
	str = malloc(size * sizeof(int));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		str[i] = min;
		i++;
		min++;
	}
	return (str);
}
/*
int	main(void)
{
	int	*str;
	int	i = 0;
	int	max = 10;
	int	min = -2;
	int	size = max - min;
	str = ft_range(min, max);
	while (i < size)
	{
		printf("%d", str[i]);
		i++;
	}
	free(str);
	return (0);
}*/
