#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max);

int	main()
{
	{
		int min = 0, max = 10, check = 0;
		int *b;
		check = ft_ultimate_range(&b, min, max);
		if (b == NULL) 
			printf("%d %d %d: NULL", min, max, check);
		else
			printf("%d %d %d: ", min, max, check);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = -5, max = 5, check = 0;
		int *b;
		check = ft_ultimate_range(&b, min, max);
		if (b == NULL) 
			printf("%d %d %d: NULL", min, max, check);
		else
			printf("%d %d %d: ", min, max, check);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}
	
	{	
		int min = 0, max = 0, check = 0;
		int *b;
		check = ft_ultimate_range(&b, min, max);
		if (b == NULL) 
			printf("%d %d %d: NULL", min, max, check);
		else
			printf("%d %d %d: ", min, max, check);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = 2147483644, max = 2147483647, check = 0;
		int *b;
		check = ft_ultimate_range(&b, min, max);
		if (b == NULL) 
			printf("%d %d %d: NULL", min, max, check);
		else
			printf("%d %d %d: ", min, max, check);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}

	{
		int min = -2147483648, max = -2147483645, check = 0;
		int *b;
		check = ft_ultimate_range(&b, min, max);
		if (b == NULL) 
			printf("%d %d %d: NULL", min, max, check);
		else
			printf("%d %d %d: ", min, max, check);
		for (int i = 0; i < max - min; ++i)
			printf("%d ", b[i]);
		printf("\n");
		free(b);
	}
	return (0);
}
