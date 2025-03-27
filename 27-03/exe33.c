//atividade: calculadora simples//
#include <stdio.h>
#include <stdlib.h>//biblioteca que possui geração de numeros//
#include <time.h>//biblioteca para manipulação de tempo

int main(){
    int A;
    int B;
    int result;
    char Operadores;

    printf("Escolha dois numeros e um operador:  ");
    scanf("%d %d %c" , &A , &B , &Operadores);

    switch(Operadores){
        case '+': 
           result = A + B;
           printf("O resultado da sua questao e: %d" , result);
           break;
        case '-': 
           result = A - B;
           printf("O resultado da sua questao e: %d" , result);
           break;
        case '*': 
           result = A * B;
           printf("O resultado da sua questao e: %d" , result);
           break;
        case '/': 
           result = A / B;
           printf("O resultado da sua questao e: %d" , result);
           break;
        default:
           printf("Este operador nao esta na nosso sistema!");
           break;
    }
    return 0;
}