
//ATIVIDADE 30: VERIFICAÇÃO DAS LETRAS INICIAIS DE CADA PALAVRA ESCOLHIDA//
#include <stdio.h>
#include <stdlib.h>//biblioteca que possui geração de numeros//
#include <time.h>//biblioteca para manipulação de tempo

int main(){
    char letra;
    printf("Escolha uma letra: ");
    scanf("%c", &letra);

    switch(letra){
        case 'A':
        printf("Foi digitada a primeira letra da palavra aranha");
        break;

        case 'B':
        printf("Foi digitado a primeira letra da palavra boca");
        break;

        case 'C':
        printf("Foi digitada a primeira letra da palavra canguru");
        break;

        default:
        printf("Voce nao digitou nenhuma letra valida");
        break;
    }
}