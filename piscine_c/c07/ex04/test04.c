#include <stdio.h>

char *ft_convert_base(char *nbr, char *base_from, char *base_to);

int main(int argc, char *argv[])
{
	{
		printf("-----------------------------------------------------\n");
		char str[100] = "  \t\n\f\r\v   --+-Faaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\0";
		printf("str = %s\n", str);
		char base_from[100] = "aF\0";
		printf("from = %s\n", base_from);
		char base_to[100] = "0123456789\0";
		printf("to = %s\n", base_to);
		printf("%s\n", ft_convert_base(str, base_from, base_to));
		printf("-----------------------------------------------------\n");
	}

	{
		char str[100] = "-2147483648\0";
		printf("str = %s\n", str);
		char base_from[100] = "0123456789\0";
		printf("from = %s\n", base_from);
		char base_to[100] = "012\0";
		printf("to = %s\n", base_to);
		printf("%s\n", ft_convert_base(str, base_from, base_to));
		printf("-----------------------------------------------------\n");
	}

	{
		char str[] = "   --+-Faaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		printf("str = %s\n", str);
		char base_from[] = "Fbe";
		printf("from = %s\n", base_from);
		char base_to[] = "HELLO";
		printf("to = %s\n", base_to);
		printf("%s\n", ft_convert_base(str, base_from, base_to));
		printf("-----------------------------------------------------\n");
	}

	{
		char str[] = "   --+-Faaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		printf("str = %s\n", str);
		char base_from[] = "Fbe";
		printf("from = %s\n", base_from);
		char base_to[] = "HELO";
		printf("to = %s\n", base_to);
		printf("%s\n", ft_convert_base(str, base_from, base_to));
		printf("-----------------------------------------------------\n");
	}

	{
		char str[] = "   ------2147483647";
		printf("str = %s\n", str);
		char base_from[] = "0123456789";
		printf("from = %s\n", base_from);
		char base_to[] = "hz";
		printf("to = %s\n", base_to);
		printf("%s\n", ft_convert_base(str, base_from, base_to));
		printf("-----------------------------------------------------\n");
	}

	{
		char str[] = "   -----2147483648";
		printf("str = %s\n", str);
		char base_from[] = "01234456789";
		printf("from = %s\n", base_from);
		char base_to[] = "hz";
		printf("to = %s\n", base_to);
		printf("%s\n", ft_convert_base(str, base_from, base_to));
		printf("-----------------------------------------------------\n");
	}

	{
		char str[] = "   -----7483648";
		printf("str = %s\n", str);
		char base_from[] = "";
		printf("from = %s\n", base_from);
		char base_to[] = "hz";
		printf("to = %s\n", base_to);
		printf("%s\n", ft_convert_base(str, base_from, base_to));
		printf("-----------------------------------------------------\n");
	}

	return (0);
}
