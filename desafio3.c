#include <stdio.h>
#include <ctype.h>
#include <locale.h>
/*
DESAFIO 3: Neste exercício, você vai fazer um programa que retrata um jogo de adivinhação. 
O jogo funciona da seguinte forma:
- O programa avisa ao usuário que ele deve pensar em um número de 1 a 100
- O programa faz uma sequência de perguntas para o usuário. As perguntas devem ser do tipo:
-O número é maior que 10 e menor ou igual a 20? -O número é 83?
- O usuário só pode responder ‘S’ (sim) ou ‘N’ (não).

O grande desafio é fazer um programa cuja estratégia permita sempre adivinhar o número fazendo até 7 perguntas
*/
void cabecalho(void){
    printf(" :'#######::'##::::'##::::'###::::'##:::::::::::'#######::\n");
    printf(" '##.... ##: ##:::: ##:::'## ##::: ##::::::::::'##.... ##:\n");
    printf("  ##:::: ##: ##:::: ##::'##:. ##:: ##:::::::::: ##:::: ##:\n");
    printf("  ##:::: ##: ##:::: ##:'##:::. ##: ##:::::::::: ##:::: ##:\n");
    printf("  ##:'## ##: ##:::: ##: #########: ##:::::::::: ##:::: ##:\n");
    printf("  ##:'## ##: ##:::: ##: #########: ##:::::::::: ##:::: ##:\n");
    printf("  ##:.. ##:: ##:::: ##: ##.... ##: ##:::::::::: ##:::: ##:\n");
    printf(" . ##### ##:. #######:: ##:::: ##: ########::::. #######::\n");
    printf(" :.....:..:::.......:::..:::::..::........::::::.......:::\n");
    printf(" '##::: ##:'##::::'##:'##::::'##:'########:'########:::'#######::\n");
    printf("  ###:: ##: ##:::: ##: ###::'###: ##.....:: ##.... ##:'##.... ##:\n");
    printf("  ####: ##: ##:::: ##: ####'####: ##::::::: ##:::: ##: ##:::: ##:\n");
    printf("  ## ## ##: ##:::: ##: ## ### ##: ######::: ########:: ##:::: ##:\n");
    printf("  ##. ####: ##:::: ##: ##. #: ##: ##...:::: ##.. ##::: ##:::: ##:\n");
    printf("  ##:. ###: ##:::: ##: ##:.:: ##: ##::::::: ##::. ##:: ##:::: ##:\n");
    printf("  ##::. ##:. #######:: ##:::: ##: ########: ##:::. ##:. #######::\n");
    printf(" ..::::..:::.......:::..:::::..::........::..:::::..:::.......:::\n\n"); 
    printf("Bem vindo ao jogo de adivinhação!\n");
    printf("Olá, pense em um numero de 1 a 100\n\n");
     
    return;
}
/* void pergunta( char * answer_up){
     char answer;
     scanf("%c", &answer);
     *answer_up = toupper( answer);

     while( *answer_up != 'S' && *answer_up != 'N'){
         fflush(stdin);
         printf("Resposta invalida, digite S ou N\n");
         scanf("%c", &answer);
         *answer_up = toupper( answer);
     }
 }*/
int main(){
    //acentuacao
    setlocale(LC_ALL, "Portuguese");
    char answer, answer_up;
    //inicio do jogo.
    cabecalho();
    //diminuir a quantidade de número.
    printf("Esse numero é menor que 50? (S/N)\n");
    scanf("%c", &answer);
    answer_up = toupper(answer);
    
    if (answer_up == 'S'){
        fflush(stdin);
        printf("É menor que 25? (S/N)\n");
        scanf("%c", &answer);
        answer_up = toupper(answer);
        if(answer_up == 'S'){
            fflush(stdin);
            printf("Esse número é par? (S/N)\n");
            scanf("%c", &answer);
            answer_up = toupper(answer);
        }
    }
    else{
        fflush(stdin);
        printf("É maior que 75? (S/N)\n");
        scanf("%c", &answer);
        answer_up = toupper(answer);
        if(answer_up == 'S'){
            fflush(stdin);
            printf("Esse número é par? (S/N)\n");
            scanf("%c", &answer);
            answer_up = toupper(answer);
        }else{

        }
    }
    

    return 0;
}
