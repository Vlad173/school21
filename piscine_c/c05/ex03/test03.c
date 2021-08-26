#include <stdio.h>

int	ft_recursive_power(int nb, int power);;

int main() 
{
	{
		int a = 5;
		int b = 1;
		printf("%d^%d: %d\n", a, b, ft_recursive_power(a, b));
	}

	{
		int a = 0;
		int b = 0;
		printf("%d^%d: %d\n", a, b, ft_recursive_power(a, b));
	}

	{
		int a = 5;
		int b = 0;
		printf("%d^%d: %d\n", a, b, ft_recursive_power(a, b));
	}

	{
		int a = 5;
		int b = 2;
		printf("%d^%d: %d\n", a, b, ft_recursive_power(a, b));
	}

	{
		int a = -5;
		int b = 3;
		printf("%d^%d: %d\n", a, b, ft_recursive_power(a, b));
	}

	{
		int a = 5;
		int b = -2;
		printf("%d^%d: %d\n", a, b, ft_recursive_power(a, b));
	}

	{
		int a = -1;
		int b = -25;
		printf("%d^%d: %d\n", a, b, ft_recursive_power(a, b));
	}
	return (0);
}

