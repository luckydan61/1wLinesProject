#include "insertSort.h"

void insertSort(int * array, int len)
{
	int i = 0;
	int j = 0;
	int key = 0;

	for(i = 1; i < len; i++)
	{
		key = array[i];
		j = i-1;
		while((array[j] > key) && (j >= 0))
		{
			array[j+1] = array[j];
			j--;
		}
		array[j+1] = key;
	}
}
