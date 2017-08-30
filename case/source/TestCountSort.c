#include <stdio.h>
#include <assert.h>
#include "countSort.h"

void Test_one_num_count_sort()
{
	int array[1] = {1};

	countSort(array, 1, 1);

	assert(array[0] == 1);
}

void Test_two_num_count_sort()
{
	int array[2] = {2, 1};

	countSort(array, 2, 2);

	assert(array[0] == 1);
	assert(array[1] == 2);
}

void Test_three_num_count_sort()
{
        int array[3] = {3, 2, 1};

        countSort(array, 3, 3);

        assert(array[0] == 1);
        assert(array[1] == 2);
	assert(array[2] == 3);
}

void Test_ten_num_count_sort()
{
        int array[10] = {2, 1, 5, 7, 3, 9, 0, 6, 4, 8};

        countSort(array, 10, 9);

        assert(array[0] == 0);
	assert(array[1] == 1);
        assert(array[2] == 2);
	assert(array[3] == 3);
	assert(array[4] == 4);
	assert(array[5] == 5);
	assert(array[6] == 6);
	assert(array[7] == 7);
	assert(array[8] == 8);
	assert(array[9] == 9);
}

void Test_count_sort()
{
	printf("Start to test count sort.\n");
	Test_one_num_count_sort();
	Test_two_num_count_sort();
	Test_three_num_count_sort();
	Test_ten_num_count_sort();
	printf("Test count sort ok.\n");
}
