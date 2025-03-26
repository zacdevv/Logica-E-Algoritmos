#include <stdio.h>

int main(){
    float P; // peso do user//
    float A; // altura do user//
    float imc; // calculo do imc//
    
    printf("Digite seu peso: ");
    scanf("%f" , &P);
    printf("Digite sua altura: ");
    scanf("%f" , &A);

    imc = P / (A * A);

    if( imc >= 40){
        printf("Voce possui obesidade Morbida");
    }else{
        printf("Voce e saudavel");
    }
    return 0;
}