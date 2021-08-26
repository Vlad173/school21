#include <stdio.h>

int *ft_map(int *tab, int length, int(*f)(int));

int	minus(int a)
{
	return (a - 1);
}

int main()
{
	int	a[5] = {100, 0, 10, -11, 2124};
	int	*b = ft_map(a, 5, minus);
	for (int i = 0; i < 5; ++i)
		printf("%d ", b[i]);
	printf("\n");
	return (0);
}
