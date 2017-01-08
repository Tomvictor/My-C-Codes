#include <stdio.h>

int main(int argc, char const *argv[])
{
	int result = 0;
	printf("%d start \n",result );
	result = sum(1,2);
	printf("%d result\n",result );
	return 0;
}


int sum(int a, int b)
{
	int sum = 0;
	sum = a + b ;
	return sum ;
}