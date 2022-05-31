#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <locale.h>

int questao19(){
    // questao 20

     return 0;
}
int questao18(){
    // questao 19
    int i;
    float a, b ,c, order[100];
    
    printf("Digite o valor de i: ");
    scanf("%d", &i);
    printf("digite o valor de a: ");
    scanf("%f", &a);
    printf("digite o valor de b: ");
    scanf("%f", &b);
    printf("digite o valor de c: ");
    scanf("%f", &c);
    
    if( i == 1){
        if(a < b){ // verifica se A é menor que B
            order[0] = a;
            if(b < c){ // Verifica se B é menor que C
                order[1] = b;
                order[2] = c;
            }else{ // Se C for menor
                order[1] = c;
                order[2] = b;
            }
        }else if(b < c){ // Verifica se B é menor que C
            order[0] = b;
            if(a < c){ //Verifica se A é menor que C
                order[1] = a;
                order[2] = c;
            }else{ // Se C for menor
                order[1] = c;
                order[2] = a;
            }
        }else{// Se C for o menor
            order[0] = c;
            if(a < b){ //Verifica se A é menor que B
                order[1] = a;
                order[2] = b;
            }else{// Se B for menor
                order[1] = b;
                order[2] = a;
            }
        }
    for (i = 0; i < 3; i++){
        printf("\n%.2f\n", order[i]);
    }

    }else if( i == 2){
        if(a > b){// Verifica se A é maior que B
            order[0] = a;
            if(b > c){// Verifica se B é maior que C
                order[1] = b;
                order[2] = c;
            }else{ // Se C for maior
                order[1] = c;
                order[2] = b;
            }
        }else if(b > c){ // Verifica se B é maior que C
            order[0] = b;
            if(a > c){ // Verifica se A é maior que C
                order[1] = a;
                order[2] = c;
            }else{ // Se C for maior
                order[1] = c;
                order[2] = a;
            }
        }else{
            order[0] = c;
            if(a > b){ // Verifica se A é maior que B
                order[1] = a;
                order[2] = b;
            }else{ // Se B for maior
                order[1] = b;
                order[2] = a;
            }
        }
    for (i = 0; i < 3; i++){
        printf("\n%.2f\n", order[i]);
    }
    }else if (i == 3){
        if(a > b && a > c){
            order[1] = a;
            if(b > c){
                order[0] = b;
                order[2] = c;
            }
        }else if(b > a && b > c){
            order[1] = b;
            if(a > c){
                order[0] = a;
                order[2] = c;
            }
        }else{
            order[1] = c;
            if(a > b){
                order[0] = a;
                order[2] = b;
            }
        }
    for (i = 0; i < 3; i++){
        printf("\n%.2f\n", order[i]);
    }
    }else{
        printf("Error!\n");
    }

    return 0;
}
int questao17(){
    // questao 18
    float hora_inicio, hora_fim, duracao;
    
    printf("Digite a hora de inicio: ");
    scanf("%f", &hora_inicio);
    printf("Digite a hora de fim: ");
    scanf("%f", &hora_fim);

    duracao = hora_fim - hora_inicio;

    if(duracao <= 0){
        duracao = 24 + duracao;
        printf("A duração do jogo foi de %.2f horas.\n", duracao);
    }else{
        printf("A duração do jogo foi de %.2f horas.\n", duracao);
    }
    return 0;
}
int questao16(){
    //questao 17
    float saldo_medio, credito;
    printf("Digite o saldo medio: ");
    scanf("%f", &saldo_medio);
    if (saldo_medio > 0 && saldo_medio <= 200){
        credito = 0;
        printf("\n\nO saldo medio e de: %.2f\n e seu valor de credito e: %3.2f\n", saldo_medio, credito );
    }else if(saldo_medio >=201 && saldo_medio <= 400){
        credito = 0.2 * saldo_medio;
        printf("\n\nO saldo medio e de: %.2f\n e seu valor de credito e: %3.2f\n", saldo_medio, credito );
    }else if(saldo_medio >=401 && saldo_medio <= 600){
        credito = 0.3 * saldo_medio;
        printf("O saldo medio e de: %.2f\n e seu valor de credito e: %3.2f\n", saldo_medio, credito );
    }else if(saldo_medio >=601){
        credito = 0.4 * saldo_medio;
        printf("\n\nO saldo medio e de: %.2f\n e seu valor de credito e: %3.2f\n", saldo_medio, credito );
    }else{
        printf("\n\nSaldo invalido!");
    }


    return 0;
}
int questao15(){
    // questao 16
    char codigo[5];
    int quantidade;
    float total, preco;

    printf("Digite o codigo do produto: ");
    scanf("\n%[^\n]s", &codigo);
    // printf("codigo: %s\n", codigo);

    if(codigo == "1001"){
        printf("codigo: %s\n", codigo);
    }else if(codigo == "1324"){
        printf("codigo: %s\n", codigo);
    }else if(codigo == "6548"){
        printf("codigo: %s\n", codigo);
    }else if(codigo == "0987"){
        printf("codigo: %s\n", codigo);
    }else if(codigo == "7623"){
        printf("codigo: %s\n", codigo);
    }else{
        printf("codigo invalido\n");
    }
    // printf("Digite a quantidade comprada: ");
    // scanf("%d", &quantidade);

    // total = quantidade * 5.32;

    // preco = 5.32;
    // printf("\n\ncodigo produto: %s\npreco unitario: $%3.2f\nquantidade: %d\npreco total: %3.2f\n\n", codigo, preco, quantidade, total);


    return 0;
}
int questao14(){
    // questao 15
    char nome[100];
    float salario, salario_reajustado;
    printf("Digite o seu nome: ");
    scanf("%s", nome);
    printf("Digite seu salario: ");
    scanf("%f", &salario);
    
    if (salario > 0 && salario < 1000){
        salario_reajustado = salario + (salario * 0.20);
        printf("\n\nO seu salario sem aumento e: %.2f\n", salario);
        printf("O seu salario com aumento e: %.2f\n\n", salario_reajustado);
    }else if(salario > 1000.01 && salario < 5000){
        salario_reajustado = salario + (salario * 0.10);
        printf("\n\nO seu salario sem aumento e: %.2f\n", salario);
        printf("O seu salario com aumento e: %.2f\n\n", salario_reajustado);
    }else if(salario > 5000){
        salario_reajustado = salario + (salario * 0);
        printf("\n\nO seu salario sem aumento e: %.2f\n", salario);
        printf("O seu salario com aumento e: %.2f\n\n", salario_reajustado);
    }else{
        printf("\n\nSalario invalido\n\n");
    }

    return 0;
}
int questao13(){
    // questao 14   
    char tipo;
    float note, media;
    
    for(int i = 1; i < 4; i++){
        printf("Digite sua %dª nota: ", i);
        scanf("%f", &tipo);
        media += note;
    }
    media /= 3;
    if (media < 5){
        tipo = 'C';
        printf("\n\nO conceito da sua nota é %c\n\n", tipo);
    }else if( 5 >= media < 8){
        tipo = 'B';
        printf("\n\nO conceito da sua nota é %c\n\n", tipo);
    }else{
        tipo = 'A';
        printf("\n\nO conceito da sua nota é %c\n\n", tipo);
    }

    return 0;
}
int questao12(){
    // questao 13
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    
    if(number < 0 && number % 2 == 0){//numero menor que zero e par
        printf("\n\nO numero %d e negativo e par\n", number);
    }else if(number > 0 && number % 2 == 0){//numero maior que zero e par
        printf("\n\nO numero %d e positivo e par\n", number);
    }else if(number < 0 && number % 2 != 0){//numero menor que zero e par
        printf("\n\nO numero %d e negativo e impar\n", number);
    }else{//numero maior que zero e impar
        printf("\n\nO numero %d e positivo e impar\n", number);
    }

    return 0;
}
int questao11(){
    // questao 12
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
    // questao 11
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
    //questao 10
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
    }else{
        printf("\n%s, voce foi reprovado com media %.2f\n\n", nome, media);
    }

    return 0;
}
int questao8(){
    //questao 9
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
    // questao 7 e 7.1
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
    printf("2 - Faça um algoritmo que leia a idade de uma pessoa expressa em anos,\n meses e dias e mostre-a expressa apenas em dias.\n\n");
    printf("3 - Faça um algoritmo para ler a base e a altura de um triângulo. Em seguida,\nescreva a área do mesmo\nObs.: Área = ( Base * Altura ) / 2\n\n");
    printf("4 - Escreva um agoritmo para calcular a media ponderada de 2 notas dadas.\n(nota 1 = peso 6 e nota 2 = peso 4).\n\n");
    printf("5 - Faça um algoritmo que calcule a media aritmetica de 4 valores inteiros.\n\n");
    printf("6 - Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais devera se somar os dois, caso contrario multiplique A por B\n ao final do calculo atribuir o valor para um a variavel C.\n\n");
    printf("7 - Dados as seguintes informacoes de um funcionario: Nome, Idade, Cargo e seu salario bruto, considere: \n a)O salario bruto teve um reajuste de 38%.\n b)O funcionario recebera uma gratificacao de 20%, do salario bruto.\n c)O salario total e descontado em 15%.\n");
    printf("7.1 - Faça um algoritmo para:\n - imprimir Nome, cidade, e cargo.\n - Imprimir o salario bruto.\n - Imprimir o salario liquido.\n\n");
    printf("9 - Faça um algoritmo que leia os valores A, B, C e diga se a soma de A + B e menor que C.\n\n");
    printf("10 - Faça um algoritmo que leia o nome e as tres notas de uma diciplina de\n um aluno e ao final escreva o nome do aluno, sua media e se foi aprovado com nota maior que 8.\n\n");
    printf("11 - Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais devera se somar os dois, caso contrario multiplique A por B\n ao final do calculo atribuir o valor para um a variavel C.\n\n");
    printf("12 - Escreva um algoritmo para ler um numero e determinar se ele e maior, igual ou menor que 0.\n\n");
    printf("13 - Faça um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar,\n e se e positivo ou negativo.");
    printf("14 - Faça um algoritmo que, dado as tres notas de um aluno, determine e exiba a sua media final, e o seu conceito,\n sabendo se que:\n -A media final e qualculada pela media aritmetica das tres notas;\n -O conceito e determinado com base:\n -- >= 8 | A | aprovado\n -- <= 5 & > 8 | B | recuperacao\n < 5 | C | reprovado\n\n");
    printf("15 -  O Tupi Futebol Clube deseja aumentar o salário de seus jogadores.\n O reajuste deve obedecer a seguinte tabela:\n salario entre 0 e 1000 aumento de 20%\n salario entre 1000.01 e 5000 aumento de 10%\n salario maior que 5000 sem aumento.\n Escrever um algoritmo que leia o nome e o salário atual de um jogador, e exiba\n o nome, o salário atual e o salário reajustado.\n\n");
    printf("16 - Um vendedor necessita de um algoritmo que calcule o preço total devido por um cliente.\n O algoritmo deve receber o código de um produto e a quantidade comprada e calcular o preço total, usando a tabela abaixo:\n\tcodigo:\t\tpreço:\n\t1001\t\t$5.32\n\t1324\t\t$6.45\n\t6548\t\t$2.37\n\t0987\t\t$5.32\n\t7623\t\t6.45\n\n");
    printf("17\n");
    printf("18\n");
    printf("19\n");
    printf("20\n");
    printf("21\n");
    printf("22\n");
    printf("23\n");
    printf("24\n");
    printf("25\n");
    printf("26\n");
    printf("27\n");
    printf("28\n");
    printf("29\n");
    printf("30\n");
    printf("31\n");
    printf("32\n");
    printf("33\n");
    printf("34\n");
    printf("35\n");
    printf("36\n");
    printf("37\n");
    printf("38\n");
    printf("39\n");
    printf("40\n");
    printf("41\n");
    printf("42\n");
    printf("43\n");
    printf("44\n");
    printf("45\n");
    printf("46\n");
    printf("47\n");
    printf("48\n");
    printf("49\n");
    printf("50\n");
    printf("51\n");
    printf("52\n");
    printf("53\n");
    printf("54\n");
    printf("55\n");
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
                questao13();
                break;
            case 14:
                questao14();
                break;
            case 15:
                questao15();
                break;
            case 16:
                questao16();
                break;
            case 17:
                questao17();
                break;
            case 18:
                questao18();
                break;
            case 19:
                questao19();
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
