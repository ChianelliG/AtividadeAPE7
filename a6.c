#include<stdio.h>
#include<string.h>

main(){
    int qtd, opcaofruta, opcao; 
    float valortotalfruta, valorcompra, precofruta;
    char nomefruta[20];

do{

    fflush(stdin);
    printf("1 => ABACAXI - 5,00 a unidade 2 => MACA - 1,00 a unidade 3 => PERA - 4,00 a unidade");
    printf("Digite o codigo da fruta e a quantidade de unidades ");
    scanf("%d", &opcaofruta);
    scanf("%d", &qtd);

    fflush(stdin);
    

    switch(opcaofruta){
    case 1:
            precofruta = 5.00
            strcpy(nomefruta, "Abacaxi");
            valortotalfruta = qtd * precofruta;
            valorcompra += valortotalfruta
        break;
    case 2:
            precofruta = 1.00
            strcpy(nomefruta, "Maca");
            valortotalfruta = qtd * precofruta;
            valorcompra += valortotalfruta
        break;
    case 3:
            precofruta = 4.00
            strcpy(nomefruta, "Pera");
            valortotalfruta = qtd * precofruta;
            valorcompra += valortotalfruta
        break;        
    }
    printf("\nFruta adicionada e valor total da fruta: ");
    printf("%s %f", nomefruta, valortotalfruta);

    printf("\nDeseja adicionar mais alguma fruta? 1 - SIM 2 - NAO\n");
    scanf("%d", opcao);
    
}while(opcao != 1);   
}