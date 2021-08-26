#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

int	main()
{
	{
		int min = 0, max = 10;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = -5, max = 5;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = 0, max = 0;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min + min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = 5, max = -5;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = 2147483647, max = 2147483647;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = 2147483643, max = 2147483647;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}		

	{
		int min = -2147483648, max = 700000;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}		

	{
		int min = -2147483648, max = -2147483644;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}		
	{
		int min = -2147483648, max = 2147483647;
		int *b = ft_range(min, max);
		if (b == NULL) 
			printf("%d %d: NULL", min, max);
		else
			printf("%d %d: ", min, max);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}		
	return (0);
}	
