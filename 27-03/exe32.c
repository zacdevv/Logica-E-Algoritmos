//atividade: numeros que correspondem aos dias da semana//
#include <stdio.h>
#include <stdlib.h>//biblioteca que possui geração de numeros//
#include <time.h>//biblioteca para manipulação de tempo

int main(){
    int semana;
    printf("Escolha um numero para saber o dia da semana: ");
    scanf("%d" , &semana);

    switch(semana){
        case 1:
            printf("O dia e Domingo!");
            break;
        case 2:
            printf("O dia e Segunda-Feira!");
            break;
        case 3:
            printf("O dia e Terca-Feira!");
            break;
        case 4:
            printf("O dia e Quarta-Feira!");
            break;
        case 5:
            printf("O dia e Quinta-Feira!");
            break;
        case 6:
            printf("O dia e Sexta-Feira!");
            break;
        case 7:
            printf("O dia e Sabado!");
            break;
        default:
            printf("Este dia nao existe!");
    }
}