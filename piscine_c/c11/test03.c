#include <stdio.h>
int ft_count_if(char **tab, int length, int(*f)(char*));
int	ft_is_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= '0' && str[i] <= '9')
			return (0);
		++i;
	}
	return (1);
}

int main(int argc, char *argv[])
{
	printf("%d\n", ft_count_if(argv, argc, ft_is_digit)); 
	return (0);
}
