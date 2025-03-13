#include <stdio.h>
#include <locale.h>

int main(){
    float C = 46.0;//valor do celsius
    float F = (C * 9/5) + 32.0;//calculo de conversao para farenghight
    printf("A temperatura convertida: %.2f .\n" , F);//exibe no terminal

}