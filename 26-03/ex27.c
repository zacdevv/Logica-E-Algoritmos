//verificação de notas//
#include <stdio.h>


int main(){
   float nota;
   char Classificacao;

   printf("Digite a nota: ");
   scanf("%f" , &nota);

   if(nota >= 9){
    Classificacao = 'A';
   }
   else if(nota >= 7 && nota < 9){
    Classificacao = 'B';
   }

   else if(nota >= 5 && nota < 7){
    Classificacao = 'C';
   }

   else if(nota < 5){
    Classificacao = 'D';
}
   printf("A nota e classificada como: %c" , Classificacao);
}