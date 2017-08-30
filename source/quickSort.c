#include "quickSort.h"

int partition(int * array, int start, int end)
{
	int x = array[start];
	int i = start;
	int j = end;

	while(i < j)
	{
		while((i < j) && (array[j] >= x))
		{
			j--;
		}
		if(i < j)
		{
			array[i] = array[j];
			i++;
		}

		while((i < j) && (array[i] < x))
		{
			i++;
		}
		if(i < j)
		{
			array[j] = array[i];
			j--;
		}
	}
	array[i] = x;
	return i;
}

void quickSort(int * array, int start, int end)
{
	if(start < end)
	{
		int keyPos = partition(array, start, end);
		quickSort(array, start, keyPos-1);
		quickSort(array, keyPos+1, end);
	}
}
