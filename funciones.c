#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float funcion(float x){
    return x*exp(x)-1;
}

void intervalo(float inter[3]){
    printf("El primer numero de tu intervalo es: ");
    while(1){
        fflush(stdin);
        if (scanf("%f",&inter[0])== 1)
            break;
        printf("ERROR EN LA ENTRADA\nIntroduce nuevamente tu valor: ");
    }
    printf("El segundo numero de tu intervalo es: ");
    while(1){
        fflush(stdin);
        if (scanf("%f",&inter[1])== 1)
            break;
        printf("ERROR EN LA ENTRADA\nIntroduce nuevamente tu valor: ");
    }
    printf("Tu error es: ");
    while(1){
        fflush(stdin);
        if (scanf("%f",&inter[2])== 1)
            break;
        printf("ERROR EN LA ENTRADA\nIntroduce nuevamente tu valor: ");
    }
}

void adaptInter(float inter[3], float solucion){
    if (funcion(solucion)<0){
        inter[0] = solucion;
    }
    else{
            inter[1] = solucion;
    }
}
