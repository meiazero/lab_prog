#include <stdio.h>
#include <math.h>
#include <locale.h>

# define M_PI 3.14159265358979323846

int questao0(){
    //questão 1
    char welcome[] = "Bem vindo ao C.\n";
    printf("\n\n%s\n\n", welcome);
    
    return 0;
}
int questao1(){
    //questão 2
    int a, dobro;
    printf("\n\nDigite um número: ");
    scanf("%d", &a);
    dobro = a * 2;
    printf("O dobro de %d é %d\n\n", a, dobro);
    
    return 0;
}
int questao2(){
    //questão 3
    float v1, v2, total;
    printf("\n\nDigite um número: ");
    scanf("%f", &v1);
    printf("Digite outro número: ");
    scanf("%f", &v2);
    total = v1 + v2;
    printf("A soma de %.2f e %.2f é %.2f\n\n", v1, v2, total);

    return 0;
}
int questao3(){
    //questão 4
    //ler uma tecla e imprime o codigo ascii
    // char tecla; 
    // printf("\n\nDigite uma tecla:\n ");
    // scanf("%c\n", &tecla);    
    printf("\n\nIncompleta\n\n");
    
    return 0;
}
int questao4(){
    //questão 5
    float raio, comp;
    printf("\n\nDigite o raio do círculo: ");
    scanf("%f", &raio);
    comp = 2 * M_PI * raio;
    printf("O comprimento do circulo com raio %.3f é %.3f\n\n", raio, comp); 

    return 0;
}
int questao5(){
    //questão 6
    float temp_f, temp_c;
    printf("\n\nDigite a temperatura em Fahrenheit: ");
    scanf("%f", &temp_f);
    temp_c = (temp_f - 32) / 1.8;
    printf("A temperatura %.3f em Fahrenheit é %.3f em Celsius\n\n", temp_f, temp_c);
    
    return 0;
}
int questao6(){
    //questão 7
    // double exp, base, result;
    // printf("\n\nDigite a base da exponenciação: ");
    // scanf("%f", &base);
    // printf("Digite o expoente: ");
    // scanf("%f", &exp);
    // result = pow(base, exp);
    // printf("O resultado da exponenciação %.2f^%.2f é %.3f\n\n", exp, base, result);
    printf("\n\nIncompleta\n\n");
    return 0;
}
int questao7(){
    //questão 8
    int seg, h, m, s;
    printf("\n\nDigite o valor em segundos: \n");
    scanf("%d", &seg);
    h = seg / 3600;
    m = (seg % 3600) / 60;
    s = (seg % 3600) % 60;
    printf("O valor %d segundos formatado é : %dh:%dm:%ds\n\n", seg, h, m, s);
    return 0;
}
int questao8(){
    //questão 9
    char nome[30];
    float salario = 200.00, vendas = 0.5, comissao, total, qvenda, tvenda;
    printf("Digite o seu nome:");
    scanf("%s", &nome);
    printf("Digite a quantidade de carros vendida:");
    scanf("%f", &qvenda);
    tvenda = qvenda * vendas;
    comissao = qvenda * 30;
    tvenda = comissao * vendas;
    //printf("total vendas %.2f\n", tvenda);
    total = salario + comissao + tvenda;
    //printf("salario final %.2f\n", total); 
    printf("\n\nO nome do funcionário é %s e seu salário é %.2f.\n", nome, total);
      
    return 0;
}

int questao9(){
    //questão 10
    // float w, x, y, z, kilo, klitro, custo, pcomb, ctanque, cviagem;
    // printf("\n\nDigite o valor do odometro antes da viagem: ");
    // scanf("%f", &w);
    // printf("Digite o valor do odometro depois da viagem: ");
    // scanf("%f", &x);
    // printf("Digite o valor de combustível gasto: ");
    // scanf("%f", &y);
    // printf("Digite o valor do custo do combustível: ");
    // scanf("%f", &pcomb);
    // printf("Digite a capacidade do tanque: em litros: ");
    // scanf("%f", &ctanque);
    // kilo = w - x; //kilometros percorridos
    // klitro = kilo / y; //kilometros por litro
    // custo = klitro * pcomb; //custo do combustível
    //printf("\n\nO consumo médio é %.2f\n\n", (y - x) / z);
    printf("\n\nIncompleta\n\n");

    return 0;
}
int questoes(){
    int questao, k = 0;

    printf("\n Escolha uma questao: \n\n");
    printf("1 - Fazer um programa em C para exibir na tela do computador a mensagem Bem-vindo ao C.\n\n");
    printf("2 - Fazer um programa em C para ler um número inteiro e exibir o seu dobro. \n\n");
    printf("3 - Fazer um programa em C para ler dois números do tipo float e exibir a soma deles. \n\n");
    printf("4 - Fazer um programa em C para ler uma tecla e exiba o código ASCII da mesma. \n\n");
    printf("5 - Fazer um programa em C para calcular e exibir o comprimento de uma circunferência, sendo dada o valor de seu raio. \n\n");
    printf("6 - Fazer um programa em C para ler uma temperatura dada na escala Fahrenheit e exibir o equivalente em Celsius. \n\n");
    printf("7 - Fazer um programa em C para calcular e exibir o valor de xy, sendo dados a base (x) e o expoente (y). \n\n");
    printf("8 - Fazer um programa em C para, dado um número inteiro representando uma quantidade de segundos,\n calcular quantas horas, minutos e segundos estão contidos nesta quantidade. \n\n");
    printf("9 - A Companhia de Carros Usados João Honesto paga seus empregados um salário de R$ 200,00\n por mês mais uma comissão de R$ 30,00 por cada carro vendido mais 5%% do valor da venda. \nFaça um programa em C que leia o nome, o número de carros vendidos e o valor total \ndas vendas de um vendedor, e calcule e exiba o seu salário. \n\n");
    printf("10 - Um motorista anota a marcação do odômetro do seu veículo antes e após uma viagem, bem\n como o número de litros de combustível gastos. Faça um programa em C que leia os 3 dados\n acima, o preço do litro de combustível, a capacidade do tanque e mostre:\n\n a) Quilometragem rodada\n b) Quantos quilômetros por litro faz o veículo.\n c) Autonomia do veículo.\n d) Custo da viagem.\n\n");
    printf(" 0 - Sair\n\n");
    
    printf("\n\nDigite a questao -> ");
    scanf("%d", &questao);
    // chamada da questao
    if (k == 0){
        switch(questao){
            case 0: 
                k = 1;
                break;
            case 1:
                questao0();
                break;
            case 2:
                questao1();
                break;
            case 3:
                questao2();
                break;
            case 4:
                questao3();
                break;
            case 5:
                questao4();
                break;
            case 6:
                questao5();
                break;
            case 7:
                questao6();
                break;
            case 8:
                questao7();
                break;
            case 9:
                questao8();
                break;
            case 10:
                questao9();
                break;
            default:
                printf("\n\nQuestao inválida\n\n");
        }
    }else{
        printf("\n\nQuestao inválida\n\n");
    }
    

    return 0;
}
int main(){
    // faz o uso da acentuação
    setlocale(LC_ALL, "Portuguese");
    // inicio do programa
    //escolha da questao
    questoes();
    
        return 0;
}