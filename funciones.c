#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float f(float x){
    return x*exp(x)-1;
}

void intervalo(float inter[4]){
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
    printf("Tu error es en porcentaje: 1)Si 2)No --> ");
    while(1){
        fflush(stdin);
        if (scanf("%f",&inter[3])== 1 || inter[3] >2 || inter[3]<1)
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

void adaptInter(float inter[4], float solucion){
    if (f(solucion)<0){
        inter[0] = solucion;
    }
    else{
            inter[1] = solucion;
    }
}
