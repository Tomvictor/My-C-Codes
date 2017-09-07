#include <stdio.h>

void swap(int* x,int* y)
{
	printf("inside swap fn: %d, %d\n",*x,*y );
	int temp = *x ;
	*x = *y ;
	*y = temp ;
}