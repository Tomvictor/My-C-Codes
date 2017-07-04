#include <stdio.h>


int x = 1, y = 5, sum = 0;

int count = 0;
int limit = 100 ;

int main() {

   /* my first program in C */
   printf("if statement! \n");

   sum = x + y ;

   if (sum == 3)
   {
   	/* code */
   	printf("Answer is correct\n");
   }
   else
   {
   	printf("Answer is incorrect\n");
   }

	// count = 0
	// limit =5 

   while(count < limit ){

   	printf("count value : %d\n", count);

   	count++ ;
   }






    return 0;
}