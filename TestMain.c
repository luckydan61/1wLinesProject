#include <stdio.h>
#include "TestBubbleSort.h"
#include "TestInsertSort.h"
#include "TestMergeSort.h"
#include "TestCountSort.h"
#include "TestRadixSort.h"

int main()
{
	printf("********** Start 10000 lines project **********\n");

	Test_bubble_sort();
	Test_insert_sort();
	Test_merge_sort();
	Test_count_sort();
//	Test_radix_sort();

	printf("=============== All Tests Passed! =============\n");
	return 0;
}
