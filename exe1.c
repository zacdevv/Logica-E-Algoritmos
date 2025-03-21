#include <stdio.h>

int main(){
    //valores//
    int a = 14;
    int b = 9;
    int c = 18;
    //questões de resultado falso//
    //questão 2//se 1
    int q1 = a + c < b;
    printf(" O resultado da questao 1 e: Falso %d .\n" , q1);
    //questão 2//
    int q2 = c - a > b;
    printf(" O resultado da questao 2 e: Falso %d .\n" , q2);
    //questão 3//
    int q3 = b - c == a;
    printf(" O resultado da questao 3 e: Falso %d .\n" , q3);
    
    //Questões de resultado verdadeiro://

    int q4 = b * 2 == c;
    printf(" O resultado da questao 4 e: Verdadeiro %d .\n" , q4);
    //questão 2//
    int q5 = c - a == 4;
    printf(" O resultado da questao 5 e: Verdadeiro %d .\n" , q5);
    //questão 3//
    int q6 = a + b > a;
    printf(" O resultado da questao 6 e: Verdadeiro %d .\n" , q6);
    
}