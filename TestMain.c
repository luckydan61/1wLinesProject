#include <stdio.h>
#include "TestBubbleSort.h"
#include "TestInsertSort.h"
#include "TestMergeSort.h"

int main()
{
	printf("********** Start 10000 lines project **********\n");
	Test_bubble_sort();
	Test_insert_sort();
	Test_merge_sort();
	printf("=============== All Tests Passed! =============\n");
	return 0;
}
