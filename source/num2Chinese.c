#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
*	Number to Chinese
*/

char * chinese[] = 
{
	"零",
	"一",
	"二",
	"三",
	"四",
	"五",
	"六",
	"七",
	"八",
	"九"
};

char * numUnit[] = 
{
	"",
	"十",
	"百",
	"千",
	"万",
	"十万",
	"百万",
	"千万",
	"亿",
	"十亿",
	"百亿",
	"千亿",
};

char chineseNum[100] = {0};

void AnalyseNum(int num, int * numArr)
{
	int bit = 0;
	numArr[bit] = num % 10;
	while(num / 10)
	{
		bit++;
		num /= 10;
		numArr[bit] = num % 10;
	}
}

void ConstructChineseNum(int * numArr, char * chineseNum)
{
	int i = 0;
	int zeroFlag = 0;
#if 0
	for(i = 9; i >= 0; i--)
	{
		printf("%d", numArr[i]);
	}
	printf("\n");
#endif
	for(i = 9; i >=0; i--)
	{
		if(numArr[i] == 0)
		{
			continue;
		}
		zeroFlag++;
		//printf("%s, %s\n", chinese[numArr[i]], numUnit[i]);
		strcat(chineseNum, chinese[numArr[i]]);
		strcat(chineseNum, numUnit[i]);
	}
	if(zeroFlag == 0)
	{
		strcat(chineseNum, chinese[0]);
	}
	//printf("1: %s\n", chineseNum);
}

char * num2Chinese(int num)
{
	int numArr[10] = {0};

	memset(chineseNum, 0, sizeof(numArr));
	AnalyseNum(num, numArr);
	ConstructChineseNum(numArr, chineseNum);
	//printf("2: %s\n", chineseNum);
	return (char *)&chineseNum;
}
