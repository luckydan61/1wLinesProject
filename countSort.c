#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "countSort.h"

void countSort(int * array, int len, int max)
{
	int * temp;
	int i = 0;
	int j = 0;	
	
	temp = (int*)malloc((max+1) * sizeof(int));
	if(temp == NULL)
	{
		return;
	}
	memset(temp, 0, (max+1)*sizeof(int));

	for(i = 0; i < len; i++)
	{
		temp[array[i]]++;
	}
	
	for(i = 0; i < max+1; i++)
	{
		while(temp[i] > 0)
		{
			array[j++] = i;
			temp[i]--;
		}
	}

	free(temp);
}
