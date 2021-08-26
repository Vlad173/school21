void ft_rev_int_tab(int *tab, int size);

#include <stdio.h>


int main()
{
	int arr1[5] = {1, 2, 3, 4, 5};
	int arr2[4] = {1, 2, -3, -4};
	int arr3[1] = {1};
	int *arr;

	for (int i = 0; i < 5; ++i) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; ++i) {
		printf("%d ", arr2[i]);
	}
	
	
	printf("\n");
	for (int i = 0; i < 1; ++i) {
		printf("%d ", arr3[i]);
	}

	printf("\n");
	ft_rev_int_tab(arr1, 5);
	ft_rev_int_tab(arr2, 4);
	ft_rev_int_tab(arr3, 1);
	for (int i = 0; i < 5; ++i) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (int i = 0; i < 4; ++i) {
		printf("%d ", arr2[i]);
	}
	
	
	printf("\n");
	for (int i = 0; i < 1; ++i) {
		printf("%d ", arr3[i]);
	}

	printf("\n");


}
