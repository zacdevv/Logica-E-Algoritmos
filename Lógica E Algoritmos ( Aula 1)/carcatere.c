#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    char Certo;
    char Errado;// caractere

    Certo = 'C';
    Errado = 'E';//valor de caractere

    printf("O valor da primeira variavel é %c e o da segunda é %c.\n" , Certo , Errado);// exibe
    return 0;
}