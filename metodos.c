#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float biseccion(float inter[3], int i, float solAnt){
    float solucion, error;
    solucion = (inter[0] + inter[1])/2;
    error = solucion - solAnt;
    if (error<0)
        error*=-1;
    adaptInter(inter,solucion);
    if (i!=0){
        printf("Iteracion: %d Error: %f\n",i,error);
        if (error<=inter[2])
            return solucion;
        else
            return biseccion(inter,i+1,solucion);
    }
    else{
        printf("La solucion es: %f\n", biseccion(inter,i+1,solucion));
    }
}

void reglaFalsa(float inter[3], int i){
}
void puntoFijo(float inter[3], int i){
}
void newtonRaphson(float inter[3], int i){
}
