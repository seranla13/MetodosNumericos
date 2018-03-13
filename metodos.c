#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float biseccion(float inter[4], int i, float solAnt){
    float solucion, error;
    solucion = (inter[0] + inter[1])/2;
    if (inter[3] == 1){
        error = ((solucion-solAnt)/solucion)*100;
        if(error<0)
            error*=-1;
    }
    else{
        error = solucion - solAnt;
        if (error<0)
            error*=-1;
    }
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

float reglaFalsa(float inter[4], int i, float solAnt){
    float solucion, error;
    solucion = inter[0]+(f(inter[0])*(inter[1]-inter[0]))/(f(inter[0])-f(inter[1]));
    if (inter[3] == 1){
        error = ((solucion-solAnt)/solucion)*100;
        if(error<0)
            error*=-1;
    }
    else{
        error = solucion - solAnt;
        if (error<0)
            error*=-1;
    }
    adaptInter(inter,solucion);
    if (i!=0){
        printf("Iteracion: %d Error: %f\n",i,error);
        if (error<=inter[2])
            return solucion;
        else
            return reglaFalsa(inter,i+1,solucion);
    }
    else{
        printf("La solucion es: %f\n", reglaFalsa(inter,i+1,solucion));
    }
}

void puntoFijo(float inter[4], int i){
}
void newtonRaphson(float inter[4], int i){
}
