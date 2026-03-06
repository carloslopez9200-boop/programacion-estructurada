#include <stdio.h>
#include <stdlib.h>

int main()
{  float temp1,temp2;
float temp[24];
int dummy;

    printf("direccion de temp1:%d\n",&temp1);
    printf("direccion de temp2:%d\n",&temp2);
    printf("direccion de temp[24]:%i,\n",&temp);
     printf("direccion de &temp[24]:%i,\n",&temp[24]);
 printf("direccion de &dummy:%i,\n",&dummy);

 temp[0]=20.5;
 temp[0]=1904;
 printf("temperatura0:%f\n",temp[0]);
  printf("temperatura0:%f\n",temp[1]);


    return 0;


}
