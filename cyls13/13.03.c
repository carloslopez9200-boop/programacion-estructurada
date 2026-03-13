#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20] = "carlos\n";
    char nombre1[20];
    char nombre3[20];
    char jugador [3][20]={"ana","luis","carlos"};
    int longitud;

    printf("%s\n", nombre);//imprimir nombre

    fgets(nombre1, sizeof(nombre1), stdin);
    printf("%s\n", nombre1);

    for(int i=0;i<3;i++){printf("jugador %d:%s\n",i+1,jugador[i]);}

for(int i=0;i<3;i++){
longitud=strlen(jugador[i]);
printf("la longitud de %s,es %d\n",jugador[i],longitud);

}





    return 0;
}
