#include <stdio.h>
int ft_fibonacci(int index);

int main() 
{
	{
		int a = -25;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}

	{
		int a = 0;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}

	{
		int a = 1;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}

	{
		int a = 2;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}

	{
		int a = 3;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}

	{
		int a = 4;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}
	
	{
		int a = 5;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}

	{
		int a = 6;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}

	{
		int a = 22;
		printf("%d: %d\n", a, ft_fibonacci(a));
	}



	return (0);
}

