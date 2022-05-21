#include <stdio.h>
#include <math.h>
#include <locale.h>


int questao1(){

}

int questoes(){
	//Adpatar as questoes corretamente.
    int questao, k = 0;

    printf("\n Escolha uma questao: \n\n");
    printf("1 - Faça um programa em C que leia um número inteiro e determine se ele é par ou ímpar\n\n");
        printf(" 0 - Sair\n\n");
    
    printf("\n\nDigite a questao -> ");
    scanf("%d", &questao);
    // chamada da questao
   	
   	
        switch(questao){
            case 0: 
                k = 1;
                break;
            case 1:
                questao1();
                        default:
                printf("\n\nQuestao inválida!\n\n");
        	}
	
    return 0;
}
int main(){
	//set locale
	setlocale(LC_ALL,"Portuguese");
	
    questoes();

    return 0;
}