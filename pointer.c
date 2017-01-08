#include <stdio.h>

void swap(int,int);

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

void swap(int *x, int *y)
{
	int temp = *x ;
	*x = 1 ;
	*y = temp ;
	return ;
}