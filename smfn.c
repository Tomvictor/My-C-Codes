#include <stdio.h>

int main(int argc, char const *argv[])
{
	int result = 0, s = 1, t = 2;
	printf("%d start \n",result );
	result = sum(s,t);
	printf("%d result\n",result );
	return 0;
}


int sum(int a, int b)
{
	int sum = 0;
	sum = a + b ;
	return sum ;
}