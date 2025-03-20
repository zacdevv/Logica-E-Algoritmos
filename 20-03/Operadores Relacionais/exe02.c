#include <stdio.h>

int main(){
    int a , b;
    //questao 1: Se a = 7 e b = 2, qual valor da expressão  a < b.//
    //valores do a e b//
    a = 7;
    b = 2;
    //Equação//
    int q1 = a < b;
    //printa o resultado que é Falso : 0 //
    printf("Se a = 7 e b = 2, o valor de a < que b e: %d falso.\n\n" , q1);

    //questão 2: Se c = 7 e d = 9, qual valor da  expressão c==d//
    int c , d;
    //expressão:a é diferente de b.//
    int q2 = c == d;
    //valores de a e b//
    c = 7;
    d = 9;
    //printa o resultado que é Falso : 0//
    printf("Se a = 7 e b = 9, o valor de a == b e: %d falso.\n\n" , q2);

    //questão 3: Se x = -2 e y = -2, qual valor da  expressão x - y > 0//
    //expressão:a é diferente de b.//
    int e , f;
    int q3 = e - f < 0;
    //valores de a e b//
    e = -1;
    f = -2;
    //printa o resultado que é Verdadeiro : 1// 
    printf("Se x = -1 e y = -2, o valor de x - y > 0 e: %d Verdadeiro.\n\n" , q3);
    
    //questao 4:Se x = 10 e y = 12, qual o valor da expressão (x > 9) != (12 < y)//
    int g , h;
    int q4 = (g > h) != (12 < h);

    g = (10 > 9);
    h = (12 < 12);
    //printa o resultado que é Falso : 0//
    printf("Se e = 10 e 12= 12, o valor de (e>9)!=(f < 12) é %d.\n\n" , q4);
}

///CORRIGIR O CODIGO