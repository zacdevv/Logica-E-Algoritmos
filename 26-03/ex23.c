#include <stdio.h>

int main(){
    int N;//recebe o numero digitado pelo usuário//
    int R;//calcula o resto/
    printf("Digite um numero: ");
    scanf("%d" , &N);

    R = N % 2;
    if(R == 0){
        printf("O número é par");
    }
    else{
        printf("O número é impar");
    }
}