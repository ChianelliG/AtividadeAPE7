#include<stdio.h>

main(){
    int pares=0, contador=1, soma=0;

    while(contador < 50){
        pares += 2;
        soma += pares;

        printf("%d %d %d", contador, pares, soma);
        contador++;
    }
}