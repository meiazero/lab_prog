#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>



int questao12(){
    // questao 12
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    
    if(number < 0 && number % 2 == 0){//numero menor que zero e par
        printf("O numero %d e negativo e par\n", number);
    }else if(number > 0 && number % 2 == 0){//numero maior que zero e par
        printf("O numero %d e positivo e par\n", number);
    }else if(number < 0 && number % 2 != 0){//numero menor que zero e par
        printf("O numero %d e negativo e impar\n", number);
    }else{//numero maior que zero e impar
        printf("O numero %d e positivo e impar\n", number);
    }

    return 0;
}
int questao11(){
    // questao 11
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);   
    if(number > 0){
        printf("\nO numero e maior que zero\n\n");
    }
    else if(number < 0){
        printf("\nO numero e menor que zero\n\n");
    }
    else{
        printf("\nO numero e igual zero\n\n");
    }

    return 0;
}
int questao10(){
    // questao 10
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    if(a != b){
        c = a * b;
        printf("O produto de %d e %d e %d\n", a, b, c);
    }else{
        c = a + b;
        printf("O somatorio de %d e %d e %d\n", a, b, c);
    }

    return 0;
}
int questao9(){
    //questao 9
    char nome[40];
    float nt1, nt2, nt3, media;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite sua primeira nota: ");
    scanf("%f", &nt1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nt2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nt3);

    media = (nt1 + nt2 + nt3) / 3;
    if (media > 7){
        printf("\n%s, voce foi aprovado com media %.2f\n\n", nome, media);
    }else if(5 < media ){
        printf("\n%s, voce esta de recuperacao com media %.2f\n\n", nome, media);
    }else{
        printf("\n%s, voce foi reprovado com media %.2f\n\n", nome, media);
    }

    return 0;
}
int questao8(){
    //questao 8
    float a, b, c, soma;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    soma = a + b;
    if(soma < c){
        printf("O valor da soma de a e b é menor que c\n");
    }else{
        printf("O valor da soma de a e b é maior que c\n");
    }

    return 0;
}
int questao7(){
    // questao 7
    char nome[40], cargo[100];
    float salario, salario_final;
    int idade;
    printf("Digite seu nome: ");
    scanf("%s", nome);
    printf("Digite seu cargo: ");
    scanf("%s", cargo);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    //reajuste de 38%
    salario = salario + (salario * 0.38);
    //gratificação de 20%
    salario = salario + (salario * 0.2);
    //imposto de 15%
    salario_final = salario - (salario * 0.15);

    printf("Ola, %s, sua idade e, %d, seu cargo e, %s, seu salario bruto e, %.2f, seu salario liquido e, %.2f\n", nome, idade, cargo, salario, salario_final);


    return 0;
}
int questao6(){
    // questao 6
    int a, b, c;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    if(a != b){
        c = a * b;
        printf("O produto de %d e %d e %d\n", a, b, c);
    }else{
        c = a + b;
        printf("O somatorio de %d e %d e %d\n", a, b, c);
    }

    return 0;
}
int questao5(){
    //questao 5
    float value, media;
    for (int i = 1; i <= 4 ; i++){
        printf ("digite o valor da %dª nota: ", i);
        scanf ("%f", &value);
        media += value; 
    }
    media = media / 4;
    printf("a media das notas e: %3.2f\n", media);
    
    return 0;
}
int questao4(){
    //questao 4
    float note1, note2, media_p;
    printf("\n\nDigite a primeira nota: ");
    scanf("%f", &note1);
    printf("Digite a segunda nota: ");
    scanf("%f", &note2);
    printf("Nota 1 sem peso: %3.2f\n", note1);
    printf("Nota 2 sem peso: %3.2f\n", note2);
    note1 = note1 * 6;
    note2 = note2 * 4;
    printf("Nota 1 com peso: %3.2f\n", note1);
    printf("Nota 2 com peso: %3.2f\n\n", note2);
    media_p = (note1 + note2) / (6 + 4);

    printf("A media do aluno e: %.2f\n\n", media_p);

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
    char name[20], sex, job[12], street[30], district, city;

    printf("Qual seu nome: ");
    scanf("%s", &name);
    fflush(stdin);
    printf("Qual seu sexo: ");
    scanf("%c", &sex);
    toupper(sex);
    printf("Qual sua idade: ");
    scanf("%d", &old);
    printf("Qual sua profissao: ");
    scanf("%s", &job);
    printf("Qual seu peso: ");
    scanf("%f", &weight);
    printf("Qual sua altura: ");
    scanf("%f", &height);
    printf("Qual seu cep: ");
    scanf("%d", &zipcode);
    printf("Qual o nome da sua Rua: ");
    scanf("%s", &street);
    printf("Qual o nome do seu bairro: ");
    scanf("%s", &district);
    printf("Qual o nome da sua cidade: ");
    scanf("%s", &city);


    printf("Ola, %s,\n seu sexo e: %c\n sua idade e: %d\n trabalha com: %s\n pesa: %3.2f\n mede: %3.2f\n mora em: %s, %s, %s, %d", name, sex, old, job, weight, height, street, district, city);

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
    printf("13 - Faça um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar,\n e se e positivo ou negativo.");
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
            case 2:
                questao2();
                break;
            case 3:
                questao3();
                break;
            case 4:
                questao4();
                break;
            case 5:
                questao5();
                break;
            case 6:
                questao6();
                break;
            case 7:
                questao7();
                break;
            case 8:
                questao8();
                break;
            case 9:
                questao9();
                break;
            case 10:
                questao10();
                break;
            case 11:
                questao11();
                break;
            case 12:
                questao12();
                break;
            case 13:
                questao12();
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
