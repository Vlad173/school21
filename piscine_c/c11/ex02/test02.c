#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int(*f)(char*));
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
//	char **a = malloc(sizeof(char *) * 3);
//	a[2] = NULL;
//	int i = 0;
//	char b0[0] = "12413551\0";
//	char b1[1] = "5351112\0";
//	a[0] = b0;
//	a[1] = b1;
//	printf("OK");
	argv[5] = NULL;
	if (ft_any(argv, ft_is_digit))
		printf("TRUE!\n");
	else
		printf("FALSE!\n");	
	return (0);
}
