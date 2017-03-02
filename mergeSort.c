#include <string.h>
#include <stdlib.h>
#include "mergeSort.h"

void merge(int * array, int first, int mid, int last, int * temp)
{
	int i = first;
	int j = mid + 1;
	int m = mid;
	int n = last;
	int k = 0;

	while((i <= m) && (j <= n))
	{
		temp[k++] = (array[i] < array[j]) ? array[i++] : array[j++];
	}

	while(i <= m)
	{
		temp[k++] = array[i++];
	}

	while(j <= n)
	{
		temp[k++] = array[j++];
	}

	for(i = 0; i < k; i++)
	{
		array[first+i] = temp[i];
	}
}

void sort(int * array, int first, int last, int * temp)
{
	int mid = 0;

	if(first < last)
	{
		mid = (first + last) / 2;
		sort(array, first, mid, temp);
		sort(array, mid+1, last, temp);
		merge(array, first, mid, last, temp);
	}
}

void mergeSort(int * array, int len)
{
	int * temp;
	
	temp = (int*)malloc(len * sizeof(int));
	if(temp == NULL)
	{
		return;
	}
	sort(array, 0, len-1, temp);
	free(temp);
}
