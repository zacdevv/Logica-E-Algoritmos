#include <stdio.h>

int main(){
    int a = 3;
    int b = 7;
    int c = 4;

    int q1 = (a + c) < b;// resultado : falso.//
    printf("O resultado da expressão 1 e: %d.\n" , q1);

    int q2 = b >= (a + 2);// resultado : verdadeiro.//
    printf("O resultado da expressão 2 e: %d.\n" , q2);

    int q3 = c == (b - a);// resultado : verdadeiro.//
    printf("O resultado da expressão 3 e: %d.\n" , q3);

    int q4 = (b + a) <= c;// resultado : falso.//
    printf("O resultado da expressão 4 e: %d.\n" , q4);

    int q5 = (c + a) > b;// resultado : falso.//
    printf("O resultado da expressão 5 e: %d.\n" , q5);



}