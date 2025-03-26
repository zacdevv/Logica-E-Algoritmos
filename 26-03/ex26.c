#include <stdio.h>
//verificação de intervalos//
int main(){
    float a;//inicio do conjunto//
    float b;//final do conjunto//
    float x;//número escolhido pelo user//
    //inicio do intervalo
    printf("Digite onde o conjunto comeca:  ");
    scanf("%f" , &a);
    //fim do intervalo//
    printf("Digite onde o conjunto termina:  ");
    scanf("%f" , &b);
    //numero a ser verificado
    printf("Digite um numero a ser verificado: ");
    scanf("%f" , &x);
    //
    if(x >= a && x <= b){
        printf("o numero escolhido pertence ao intervalo");
    }else{
        printf("o numero nao pertence ao conjunto");
    }
    return 0;
}