#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "num2Chinese.h"

void TestSingleNum()
{
	assert(strcmp("零", num2Chinese(0)) == 0);
	assert(strcmp("一", num2Chinese(1)) == 0);
	assert(strcmp("二", num2Chinese(2)) == 0);
	assert(strcmp("三", num2Chinese(3)) == 0);
	assert(strcmp("四", num2Chinese(4)) == 0);
	assert(strcmp("五", num2Chinese(5)) == 0);
	assert(strcmp("六", num2Chinese(6)) == 0);
	assert(strcmp("七", num2Chinese(7)) == 0);
	assert(strcmp("八", num2Chinese(8)) == 0);
	assert(strcmp("九", num2Chinese(9)) == 0);
}

void Test_Num_2_Chinese()
{
	printf("Start to test num2Chinese.\n");
	TestSingleNum();
	printf("Test num2Chinese ok.\n");
}