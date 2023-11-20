/*
 * Programmer: Riya Bhart
 * Date: 19/11/23
 * Description: Creating a universal array print function that
 *              makes use of pointer arithmetics and variable casting
 */

#include <stdio.h>
#include <stdlib.h>

void print_arr(void *arr, int size, char type)
{
	for (int i = 0; i < size; i++) {
		switch (type) {
			case 'd':
				printf("%d ",  *((int *) arr + i));
				break;
			case 'c':
				printf("%c ",  *((char *) arr + i));
				break;
			case 'f':
				printf("%.1f ",  *((float *) arr + i));
				break;
			default:
				printf("Incorrect datatype passed\n");
				return;
		}
	}
} 


int main()
{
	char  c_arr[3] = {'A', 'B'};
	int   i_arr[3] = {1, 2};
	float f_arr[3] = {2.8, 7.4};

	print_arr((void *)c_arr, 2, 'c');
	printf("\n");
	print_arr((void *)i_arr, 2, 'd');
	printf("\n");
	print_arr((void *)f_arr, 2, 'f');
	printf("\n");
	print_arr((void *)9, 0, 5);

	return 0;
}
