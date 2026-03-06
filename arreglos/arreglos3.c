#include <stdio.h>
#include <stdlib.h>

int main()
{  int i;
    int N=4; //define el tamaño del arreglo
float temp[N];//define el arreglo

 for(int i=0;i<N;i++){
     printf("ingresa la temperatura%d:",i+1);
     scanf("%f",&temp[i]);
     }
for(i=0;i<N;i++){

printf("temperatura%d:%f\n",i+1,temp[i]);




}







return 0;

}
