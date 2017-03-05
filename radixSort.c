#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "radixSort.h"

int getWeight(int num, int bit)
{
	return (num / bit) % 10;
}

int pushByWeight(int * array, int len, int bit)
{
	int i = 0;
	int weight = 0;
	int * count;
	int * bullet;

	for(i = 0; i < len; i++)
	{
		if(array[i] != 0)
		{
			break;
		}
	}
	if(i == len)
	{
		return 0;
	}
	bullet = (int*)malloc(sizeof(int) * len);
	if(bullet == NULL)
	{
		return 0;
	}
	count = (int*)malloc(sizeof(int) * len);
	if(count == NULL)
	{
		free(bullet);
		return 0;
	}
	memset(bullet, 0, sizeof(int)*len);

	for(i = 0; i < len; i++)
	{
		weight = getWeight(array[i], bit);
		count[weight]++;
	}

	for(i = 1; i < 10; i++)
	{
		count[i] += count[i-1];
	}

	for(i = 0; i < len; i++)
	{
		weight = getWeight(array[i], bit);
		bullet[count[weight-1]] = array[i];
		count[weight-1]--;
	}

	for(i = 0; i < len; i++)
	{
		array[i] = bullet[i];
	}
	free(bullet);
	free(count);
	return 1;
}

void radixSort(int * array, int len)
{
	int bit = 1;
	
	while(1)
	{
		if(pushByWeight(array, len, bit) == 0)
		{
			break;
		}
		bit *= 10;;
	}
}
