#include <stdio.h>
#include "TestBubbleSort.h"
#include "TestInsertSort.h"
#include "TestMergeSort.h"
#include "TestCountSort.h"
#include "TestRadixSort.h"
#include "TestSelectSort.h"
#include "TestQuickSort.h"
#include "TestNum2Chinese.h"

int main()
{
	printf("********** Start 10000 lines project **********\n");

	Test_bubble_sort();
	Test_insert_sort();
	Test_merge_sort();
	Test_count_sort();
//	Test_radix_sort();
	Test_select_sort();
	Test_quick_sort();
	Test_Num_2_Chinese();

	printf("=============== All Tests Passed! =============\n");
	return 0;
}
