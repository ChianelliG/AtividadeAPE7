#include<stdio.h>

main(){

    int impar=1, contador=1, numero;

    printf("Digite um numero ");
    scanf("%d", &numero);

    while(contador <= numero){
        printf("\n%d", impar);
        contador++;
    }
}