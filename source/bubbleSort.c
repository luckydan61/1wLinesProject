#include "bubbleSort.h"

void bubbleSort(int * array, int len)
{
	int i 	 = 0;
	int j 	 = 0;
	int temp = 0;

	for(i = 0; i < len; i++)
	{
		for(j = 0; j < (len - i - 1); j++)
		{
			if(array[j] > array[j+1])
			{
				temp = array[j+1];
				array[j+1] = array[j];
				array[j] = temp;
			}
		}		
	}	
}
