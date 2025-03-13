#include <stdio.h>
#include <locale.h>

int main(){
    float m = 66;// valor da massa
    float h = 1.75;// valor da altura
    float imc = m/(h*h);//calculo do imc
     
    printf("o imc é: %.3f .\n" , imc);//exibe no console

    return 0;
}