#include <stdio.h>

char buff[] = "$GPRMC,103956.000,A,1009.9733,N,07618.6494,E,0.00,272.93,120517,,,D*6F" ;

int main(void)
{
  printf("\nnmea parsing code started... \n");
  printf("\nbuff :  %s\n",buff);
  return 0;
}
