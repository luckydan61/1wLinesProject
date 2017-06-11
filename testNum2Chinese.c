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

void TestRoundNumber()
{
	assert(strcmp("一十", num2Chinese(10)) == 0);
	assert(strcmp("一百", num2Chinese(100)) == 0);
	assert(strcmp("一千", num2Chinese(1000)) == 0);
	assert(strcmp("一万", num2Chinese(10000)) == 0);
	assert(strcmp("一十万", num2Chinese(100000)) == 0);
	assert(strcmp("一百万", num2Chinese(1000000)) == 0);
	assert(strcmp("一千万", num2Chinese(10000000)) == 0);
	assert(strcmp("一亿", num2Chinese(100000000)) == 0);
	assert(strcmp("一十亿", num2Chinese(1000000000)) == 0);
}

void Test_Num_2_Chinese()
{
	printf("Start to test num2Chinese.\n");
	TestSingleNum();
	TestRoundNumber();
	printf("Test num2Chinese ok.\n");
}