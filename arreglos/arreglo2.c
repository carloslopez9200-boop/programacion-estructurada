#include <stdio.h>
#include <stdlib.h>

int main()
{
float temp[4];
int dummy;
 temp[0]=20.5;
 temp[1]=19.4;
 temp[2]=21.5;
 temp[3]=18.0;



 for(int i=0;i<4;i++){
     printf("temperatura%d:%.2f\n",i,temp[i]);
 }







return 0;

}
