#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a = 0, b = 1, c = 0,temp = 0;
	const char n ;
	printf("Enter the range : \n", );
	scanf("%d",n);
	while(n){
		printf("%d\n",a );
		temp = a + b ;
		a = temp ;
		b++ ;

	}

	return 0;
}