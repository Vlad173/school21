#include <stdio.h>
int ft_is_prime(int nb);
int main() 
{
	{
		int a = -25;
		printf("%d: %d\n", a, ft_is_prime(a));
	}

	{
		int a = 0;
		printf("%d: %d\n", a, ft_is_prime(a));
	}

	{
		int a = 1;
		printf("%d: %d\n", a, ft_is_prime(a));
	}

	{
		int a = 2;
		printf("%d: %d\n", a, ft_is_prime(a));
	}


	{
		int a = 7;
		printf("%d: %d\n", a, ft_is_prime(a));
	}

	{
		int a = 3;
		printf("%d: %d\n", a, ft_is_prime(a));
	}

	{
		int a = 4;
		printf("%d: %d\n", a, ft_is_prime(a));
	}
	
	{
		int a = 27;
		printf("%d: %d\n", a, ft_is_prime(a));
	}

	{
		int a = 2147395600;
		printf("%d: %d\n", a, ft_is_prime(a));
	}

	{
		int a = 2147483647;
		printf("%d: %d\n", a, ft_is_prime(a));
	}



	return (0);
}

