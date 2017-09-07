#include <stdio.h>

void swap(int *x,*y);

int main(int argc, char const *argv[])
{
	int a, b ;
	a = 10 ;
	b = 20 ;
	printf("a before swap is %d\n",a );
	printf("b before wasp is %d\n",b );
	swap(&a, &b);
	printf("a after swap is %d\n",a );
	printf("b after swap is %d\n",b );

	return 0 ;
}

void swap(int *x,*y)
{
	printf("inside swap fn: %d, %d\n",*x,*y );
	int temp = *x ;
	*x = *y ;
	*y = temp ;
	return ;
}