#include <stdio.h>
#include "TestBubbleSort.h"
#include "TestInsertSort.h"

int main()
{
	printf("********** Start 10000 lines project **********\n");
	Test_one_num_sort();
	Test_two_num_sort();
	Test_three_num_sort();
	Test_ten_num_sort();

	Test_one_num_insert_sort();
        Test_two_num_insert_sort();
        Test_three_num_insert_sort();
        Test_ten_num_insert_sort();
	printf("=============== All Tests Passed! =============\n");
	return 0;
}
