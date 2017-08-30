#include "selectSort.h"

void selectSort(int * array, int len)
{
	int i = 0;
	int j = 0;
	int min = 0;
	int temp = 0;

	for(i = 0; i < len; i++)
	{
		min = i;
		for(j = i+1; j < len; j++)
		{
			if(array[min] > array[j])
			{
				min = j;
			}
		}

		if(min != i)
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
		}
		
	}
}
