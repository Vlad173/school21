#include <stdio.h>

int ft_recursive_factorial(int nb);

int main() 
{
	{
		int a = 5;
		printf("%d: %d\n", a, ft_recursive_factorial(a));
	}


	{
		int a = 0;
		printf("%d: %d\n", a, ft_recursive_factorial(a));
	}

	{
		int a = 1;
		printf("%d: %d\n", a, ft_recursive_factorial(a));
	}

	{
		int a = 10;
		printf("%d: %d\n", a, ft_recursive_factorial(a));
	}

	{
		int a = -5;
		printf("%d: %d\n", a, ft_recursive_factorial(a));
	}

	{
		int a = -1;
		printf("%d: %d\n", a, ft_recursive_factorial(a));
	}
	return (0);
}

