#include <stdlib.h>
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

char * num2Chinese(int num)
{
	return chinese[num];	
}