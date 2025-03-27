#include <stdio.h>
#include <stdlib.h>//biblioteca que possui geração de numeros//
#include <time.h>//biblioteca para manipulação de tempo

int main(){
    int usernumber;


    printf("Escolha um numero: ");
    scanf("%d", &usernumber);


    switch(usernumber % 2){
        case 0:
        printf("O numero e par!");
        break;
        case 1:
        printf("O numero e impar!");
        break;
    }
}