#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <ctype.h>


int questao9(){
	
	return 0;
}
int questao8(){
	
	return 0;
}
int questao7(){
	
	return 0;
}
int questao6(){
	//questao6
	float num1, num2, num3, pqp;
	printf("Digite um número: ");
	scanf("%f", &num1);
	printf("Digite um número: ");
	scanf("%f", &num2);
	printf("Digite um número: ");
	scanf("%f", &num3);
	if(num1 > num2){
    pqp = num1;
	}else if(num2 > num3){
    pqp = num2;
	}else{
    pqp = num3;
	}
	printf("%.2f é o maior número.", pqp);
	
	return 0;
}
int questao5(){
	//questao5
	float a ,b ,c, delta, x1, x2;
	printf("Digite o valor de 'a'\n");
	scanf("%f", &a);
	printf("Digite o valor de 'b'\n");
	scanf("%f", &b);
	printf("Digite o valor de 'c'\n");
	scanf("%f", &c);
	
	delta = pow(b, 2) - 4 * a * c;
	if(delta<0){
		printf("Equação com raizes negativas!\n");
	} else{
		x1 = - ((b) - sqrt(delta))/ (2 * a);
		x2 = - ((b) + sqrt(delta))/ (2 * a);
		printf("x1 = %.1f\n", x1);
		printf("x2 = %.1f\n", x2);
	}
	
	
	
	return 0;
}
int questao4(){
	//questao 4
	float pkwh = 0.27, qconsumo, vmin = 13, totalp;
	printf("\n\nQuantos KW foram consumidos no mês:\n");
	scanf("%f", &qconsumo);
	totalp = qconsumo * pkwh;
	if(totalp < vmin){
		printf("O valor consumido é infeior a %.1f", vmin);
	}else{
		printf("O tatal a pagar de acordo com o consumo é de: R$ %.2f", totalp);	
	}
	
	
	return 0;
}
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
    printf("\n\nQual o seu nome? ");
    scanf("%s", nome);
    printf("Qual o seu sexo? ");
    scanf("%s", sexo);
    if (toupper(sexo[0]) == 'F'){
        printf("Olá, Sra. %s!\n", nome);
    } else {
        printf("Olá, Sr. %s!\n", nome);
    }

    return 0;
}
int questao1(){
    //questão 1
    int a;
    printf("\n\nDigite um número: ");
    scanf("%d", &a);
    if(a%2 == 0){
        printf("\n\nO número %d é par\n\n", a);
    }else{
        printf("\n\nO número %d é ímpar\n\n", a);
    }
    
    return 0;
}
int questoes(){
	//Adpatar as questoes corretamente.
    int questao, k = 0;

    printf("\n Escolha uma questao: \n\n");
    printf("1 - Faça um programa em C que leia um número inteiro e determine se ele é par ou ímpar\n\n");
    printf("2 -  Faça um programa em C que leia o nome e o sexo (M ou F) de uma pessoa e exiba a mensagem 'Olá, Sr. Fulano!'\n ou 'Olá, Sra. Fulana!', de acordo com o sexo da pessoa. \n\n");
    printf("3 -  Faça um programa em C que leia a altura e o sexo (M-masculino, F-feminino) de uma pessoa, calcule e mostre o\n seu peso ideal, utilizando uma das seguintes fórmulas: \n- para homens: (72.7 * altura) - 58.0 \n- para mulheres: (62.1 * altura) - 44.7\n\n");
    printf("4 -  Deseja-se calcular a conta de consumo de energia elétrica de um consumidor. O preço de 1 Kwh custa atualmente\n R$ 0,27. O cálculo da conta é dado por: Preço do Kwh x Quantidade consumida\n Entretanto, o valor da conta não deverá ser inferior a R$ 13,00, ou seja, mesmo que o seu consumo \n  seja muito baixo, ele terá que pagar essa taxa mínima.\n\n");
    printf("5 -  Faça um programa em C para determinar as raízes de uma equação de segundo grau, dados os seus coeficientes. \n\n");
    printf("6 - Faça um programa em C que leia três números e exiba o maior deles. \n\n");
    printf("7 -  \n\n");
    printf("8 -  \n\n");
    printf("9 -  \n\n");
   
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