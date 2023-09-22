#include<stdio.h>

main(){
    char sexo, olhos, cabelos;
    int totalHabitantes = 0, totalEspecifico = 0, totalM = 0, totalF = 0, idade, opcao;
    float salario, porcentagem;

    do{

        do{
            fflush(stdin);
            printf("Digite o sexo: (m ou f)\n");
            scanf("%c", &sexo);
            if(sexo != 'm' && sexo != 'f'){
                printf("\nOpcao invalida");
            }            
            if(sexo == 'm'){
                totalM++;
            }else if(sexo == 'f'){
                totalF++;
            }


        }while(sexo != 'm' && sexo != 'f');

            do{
                fflush(stdin);
                printf("\nDigite a cor dos olhos: a(azuis), v(verde), c(castanho) e p(preto) ");
                scanf("%c", &olhos);
                if(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v'){
                     printf("\nOpcao invalida");
                }
                

            }while(olhos != 'a' && olhos != 'p' && olhos != 'c' && olhos != 'v');

            do{
                fflush(stdin);
                printf("\nDigite a cor dos cabelos ");
                scanf("%c", &cabelos);
                if(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r'){
                     printf("\nOpcao invalida");
                }
                

            }while(cabelos != 'l' && cabelos != 'c' && cabelos != 'p' && cabelos != 'r');

            do{
                fflush(stdin); 
                printf("\nDigite a idade ");
                scanf("%d", &idade);
                if(idade < 10 || idade > 100){
                    printf("Opcao invalida");
                }
                
            }while(idade < 10 || idade > 100);

            do{
                fflush(stdin); 
                printf("\nDigite o salario ");
                scanf("%f", &salario);
                if(salario < 0){
                    printf("Opcao invalida");
                }
                
            }while(salario < 0); 

            if(sexo == 'f' && olhos == 'c' && cabelos == 'c' && (idade > 18 && idade < 35)){
                totalEspecifico++;
            }           

        totalHabitantes++;

        printf("\nDeseja cadastrar um novo habitante: 1 SIM -1 NAO\n");
        scanf("%d", &opcao);
    }while(opcao != -1);

    porcentagem = totalEspecifico/totalHabitantes*100;

    printf("Total de habitantes cadastrados: %d\n", totalHabitantes);
    printf("Porcentagem de pessoas com caracteristicas especificas: %.2f\n", porcentagem);
    printf("Total de homens cadastrados: %d\n", totalM);
    printf("Total de mulheres cadastradas: %d\n", totalF);
}