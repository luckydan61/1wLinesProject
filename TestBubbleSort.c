#include <stdio.h>
#include <assert.h>
#include "bubbleSort.h"

void Test_one_num_sort()
{
	int array[1] = {1};

	bubbleSort(array, 1);

	assert(array[0] == 1);
}

void Test_two_num_sort()
{
	int array[2] = {2, 1};

	bubbleSort(array, 2);

	assert(array[0] == 1);
	assert(array[1] == 2);
}
