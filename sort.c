#include <stdio.h>
#include <unistd.h>

char	*ft_sort(char *str)
{
	int	i;
	int	j;
	int	s;
	char	temp;

	s = 0;
	while (str[s] != '\0')
		s++;
	i = 0;
	while(i < s)
	{
		j = i + 1;
		while (j < s)
		{
			if (str[i] > str[j])
			{
				temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
			j++;
		}
		i++;
	}
	return (str);
}
int	main()
{
	char	str[] = "8576430123";
	printf("%s\n", ft_sort(str));
	return (0);
}
