#include <stdio.h>
int calcula_idade(int ano_nasc){
    int idade = 2024 - ano_nasc;
    return idade;
};
int main(){
    int ano_nascimento, minha_idade;
    //entrada de dados 
    //ano de nascimento
    printf("Qual o seu ano de nascimento? ");
    scanf("%i", &ano_nascimento);

    //chama procedimento calcular idade para realizar a operação
    minha_idade = calcula_idade(ano_nascimento);
    printf("Sua idade é %i anos.", minha_idade);
    return(0);
}