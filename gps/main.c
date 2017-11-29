#include <stdio.h>
#include <string.h>

char gp_buff[] = "$GPRMC,103956.000,A,1009.9733,N,07618.6494,E,0.00,272.93,120517,,,D*6F" ;

int temp = 3 ;

int main(void)
{
  printf("\nnmea parsing code started... \n");
  printf("\nbuff :  %s\n", gp_buff);
  get_lat_str(gp_buff,temp);
  return 0;
}

get_lat_str(*buff,int count){
  char *p1, *p2 ;
  char temp[12];
  p1 = buff ;
  unsigned char i = 0 ;
  printf("\n\rget_lat_str\n\r");
  for(i=0;i<count;i++){
  p2 = strstr(p1,",");
  p1 = p2+1 ;
  printf("\r\np1 : %s\r\n",p1);
  }

  p2 = strstr(p1,",");
  printf("\r\ntemp :%s \r\n",temp);

  memset(temp,0x0,10);
  printf("\r\ntemp af : %s\r\n", temp);
  memcpy(temp,p2,p2-p1);
  printf("\r\nfinal temp buff : %s\r\n",temp);

 
}
