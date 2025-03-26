#include <stdio.h>

int main(){
    int idade;// idade do user/
    printf("Digite sua idade: ");
    scanf("%d" , &idade);//aloca a idade na variavel//
    
    if(idade >= 18 && idade <= 69){
        printf("Para essa idade, o voto e obrigatorio.");
    }else{
        printf("Voce nao e obrigado a votar");
    }
    return 0;
}