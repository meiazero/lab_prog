#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>


int questao1(){
    //idade,cep
    int old, zipcode;
    //peso, altura
    float weight, height;
    //nome,sexo, trabalho, rua, bairro, estado, cidade. 
    char name[20], sex[1], job[12], street[30], district, city;
    
    fflush(stdin);
    printf("Qual seu nome ");
    scanf("%s", &name);
    if(name[20] =! ""){
        fflush(stdin);
        printf("Qual seu sexo: ");
        scanf("%c", &sex);
        sex[0] = toupper(sex[0]);
        if(sex[0] == 'M' || 'F'){
            fflush(stdin);
            printf("Qual sua idade: ");
            scanf("%d", &old);
            if(old =! ""){
                fflush(stdin);
                printf("Qual sua profissao: ");
                scanf("%s", &job);
                if(job[12] =! ""){
                    fflush(stdin);
                    printf("Qual seu peso: ");
                    scanf("%f", &weight);
                    if(weight =! ""){
                        fflush(stdin);
                        printf("Qual sua altura: ");
                        scanf("%f", &height);
                        if(height =! ""){
                            fflush(stdin);
                            printf("Qual o nome da sua Rua: ");
                            scanf("%s", &street);
                            if(street[30] =! ""){
                                fflush(stdin);
                                printf("Qual o nome do seu bairro: ");
                                scanf("%s", &district);
                                if(district =! ""){
                                    fflush(stdin);
                                    printf("Qual o nome da sua cidade: ");
                                    scanf("%s", &city);
                                }
                            }
                        }
                    }
                }
            }
        }else{
            printf("Sexo invalido");
        }
    }

    return 0;
}

int questoes(){
	//Adpatar as questoes corretamente.
    int questao, k = 0;

    printf("\n Escolha uma questao: \n\n");
    //lista de questoes.
    printf("1 - Faça um algoritmo para ler as seguintes informações de uma pessoa:\nNome, Idade, Sexo, Peso, Altura, Profissão, Rua, Bairro, Cidade, Estado, CEP, Telefone.\n\n");
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
                break;
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
