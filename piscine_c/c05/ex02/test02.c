#include <stdio.h>

int	ft_iterative_power(int nb, int power);;

int main() 
{
	{
		int a = 5;
		int b = 1;
		printf("%d^%d: %d\n", a, b, ft_iterative_power(a, b));
	}

	{
		int a = 0;
		int b = 0;
		printf("%d^%d: %d\n", a, b, ft_iterative_power(a, b));
	}

	{
		int a = 5;
		int b = 0;
		printf("%d^%d: %d\n", a, b, ft_iterative_power(a, b));
	}

	{
		int a = 5;
		int b = 2;
		printf("%d^%d: %d\n", a, b, ft_iterative_power(a, b));
	}

	{
		int a = -5;
		int b = 3;
		printf("%d^%d: %d\n", a, b, ft_iterative_power(a, b));
	}

	{
		int a = 5;
		int b = -2;
		printf("%d^%d: %d\n", a, b, ft_iterative_power(a, b));
	}
	return (0);
}

