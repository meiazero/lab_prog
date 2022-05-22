#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>


int questao4(){
    //questao 4
    
    return 0 ;
}
int questao3(){
    //questao 3
    //base, altura, area
    float base, height, area;
    printf("Digite o valor da base: ");
    scanf("%f", &base);
    printf("Digite o valor da altura: ");
    scanf("%f", &height);
    area = (base * height) / 2;
    printf("A area do triangulo e: %.2f", area);

    return 0;
}
int questao2(){
    //questao 2
    printf("nao entendi");   
    return 0;
}
int questao1(){
    //questao 1
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
    printf("2 - Faça um algoritmo que leia a idade de uma pessoa expressa em anos,\n meses e dias e mostre-a expressa apenas em dias.\n\n\n");
    printf("3 - Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida,\nescreva a área do mesmo\nObs.: Área = ( Base * Altura ) / 2\n\n");
    printf("4 - Escreva um agoritmo para calcular a media ponderada de 2 notas dadas.\n(nota 1 = peso 6 e nota 2 = peso 4).\n\n");
    printf("5 - Faça um algoritmo que calcule a media aritmetica de 4 valores inteiros.\n\n");
    printf("6 - Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais devera se somar os dois, caso contrario multiplique A por B\n ao final do calculo atribuir o valor para um a variavel C.\n\n");
    printf("7 - Dados as seguintes informacoes de um funcionario: Nome, Idade, Cargo e seu salario bruto, considere: \n a)O salario bruto teve um reajuste de 38%.\n b)O funcionario recebera uma gratificacao de 20%, do salario bruto.\n c)O salario total e descontado em 15%.\n ");
    printf("8 - Faça um algoritmo para:\n - imprimir Nome, cidade, e cargo.\n - Imprimir o salario bruto.\n - Imprimir o salario liquido.\n\n");
    printf("9 - Faça um algoritmo que leia os valores A, B, C e diga se a soma de A + B e menor que C.\n\n");
    printf("10 - Faça um algoritmo que leia o nome e as tres notas de uma diciplina de\n um aluno e ao final escreva o nome do aluno, sua media e se foi aprovado com nota maior que 8.\n\n");
    printf("11 - Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais devera se somar os dois, caso contrario multiplique A por B\n ao final do calculo atribuir o valor para um a variavel C.\n\n");
    printf("12 - Escreva um algoritmo para ler um numero e determinar se ele e maior, igual ou menor que 0.\n\n");
    print("13 - Faça um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar,\n e se e positivo ou negativo.");
    printf("14 - Faça um algoritmo que, dado as tres notas de um aluno, determine e exiba a sua media final, e o seu conceito,\n sabendo se que:\n -A media final e qualculada pela media aritmetica das tres notas;\n -O conceito e determinado com base:\n -- >= 8 | A | aprovado\n -- <= 5 & > 8 | B | recuperacao\n < 5 | C | reprovado\n\n");
    printf("15 - ");

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
