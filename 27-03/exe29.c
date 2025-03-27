#include <stdio.h>
#include <stdlib.h>//biblioteca que possui geração de numeros//
#include <time.h>//biblioteca para manipulação de tempo

int main(){
    int palpite;
    srand(time(NULL));
    int magic = rand() % 1001;

    printf("Digite seu numero escolhido:");
    scanf("%d", &palpite);
    if(palpite == magic){
        printf("Voce acertou!");
    }
    else{
        if(palpite < magic){
            printf("Seu numero e muito pequeno");
        }
        else{
            if(palpite > magic){
                printf("seu numero e muito grande");
            }
        }
    }
}