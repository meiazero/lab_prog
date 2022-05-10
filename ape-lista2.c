#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


int questao3(){
    //questão 3
    char sexo[1];
    float altura, result;
    printf("\n\nDigite o seu sexo: ");
    scanf("%c", &sexo);
    printf("Qual sua altura? ");
    scanf("%f", &altura);
    if(toupper(sexo[0]) == 'M'){
        result = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f\n\n", result);
    }else{
        result = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f\n\n", result);
    }

    return 0;
}
int questao2(){
    //questão 2
    char nome[30], sexo[1];
    printf("Qual o seu nome? ");
    scanf("%s", nome);
    printf("Qual o seu sexo? ");
    scanf("%s", sexo);
    if (toupper(sexo[0]) == 'F'){
        printf("%s, você é uma mulher!\n", nome);
    } else {
        printf("%s, você é um homem!\n", nome);
    }

    return 0;
}
int questao1(){
    //questão 1
    int a;
    printf("\nDigite um número: ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("\n\nO número %d é par\n\n", a);
    }else{
        printf("\n\nO número %d é ímpar\n\n", a);
    }
    
    return 0;
}
int main(){
    questao3();

    return 0;
}