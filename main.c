#include <stdio.h>
#include <stdlib.h>
#include "metodos.h"
#include "funciones.h"

int main()
{
    float inter[4];
    printf("\t\tPrimer Programario\n\n");
    while(1){
        int decition;
        printf("Metodos:\n\t1)Biseccion\n\t2)Regla Falsa\n\t3)Punto Fijo\n\t4)NewtonRaphson\n\t5)Salir\nSeleccion: ");
        while(1){
            fflush(stdin);
            if (scanf("%d",&decition)== 1)
                break;
            printf("ERROR EN LA ENTRADA\nIntroduce nuevamente tu seleccion: ");
        }

        switch(decition){
            case 1:
                intervalo(inter);
                biseccion(inter,0,0);
            break;
            case 2:
                intervalo(inter);
                reglaFalsa(inter,0,0);
            break;
            case 3:
                intervalo(inter);
                puntoFijo(inter,0);
                break;
            case 4:
                intervalo(inter);
                newtonRaphson(inter,0);
            break;
            case 5:
                return 0;
            default:
                printf("NO EXISTE EL METODO SELECCIONADO\n");
        }
    }
}
