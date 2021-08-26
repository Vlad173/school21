#include <stdio.h>

int ft_atoi_base(char *str, char *base);

int main()
{
	{
		char str[] = "     --+-Faaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		char base[] = "aF";
		printf("%d\n", ft_atoi_base(str, base));
	}

	{
		char str[] = "  ++--2147483647a   ";
		char base[] = "0123456789";
		printf("%d\n", ft_atoi_base(str, base));
	}

	
	{
		char str[] = "  ++--aGf   ";
		char base[] = "af";
		printf("%d\n", ft_atoi_base(str, base));
	}

	{
		char str[] = "  ++--aGf   ";
		char base[] = "afa";
		printf("%d\n", ft_atoi_base(str, base));
	}

	{
		char str[] = "";
		char base[] = "af";
		printf("%d\n", ft_atoi_base(str, base));
	}

	{
		char str[] = "-152";
		char base[] = "a ";
		printf("%d\n", ft_atoi_base(str, base));
	}


	{
		char str[] = "-152";
		char base[] = "abnvmc,a";
		printf("%d\n", ft_atoi_base(str, base));
	}

	return (0);
}
