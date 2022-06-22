#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265359 

float area_t();
float area_c();
float area_q();
void display();

int main(){

    display();
    return 0;
}
void display(){
    int output, key = 0;

    printf("========== Bem vindo ao programa ===========\n\n");
    printf("Digite uma opção: \n1 - Calcular a area do quadrado\n2 - Calcular area do circulo\n3 - Calcular area do triangulo\n0 - Sair\n --> ");
    scanf("%i", &output);
    while (key == 0){
        if(output <= 0 || output > 5){
            system("clear");
            printf("\nSaindo ...\n\n");
            key = 1;
        }else{
            switch (output){
            case 1:
                //area do quadrado
                system("clear");
                area_q();
                key = 1;
                break;
            case 2: 
                //area do circulo
                system("clear");
                area_c();
                key = 1;
                break;
            case 3: 
                //area do triangulo
                system("clear");
                area_t();
                key = 1;
                break;
            default:
                system("clear");
                printf("Não encontrado!");
                key = 1;
                break;
            }
        }
    }
    
    return;
}
float area_t(){
    float h, b, area;

    printf("============ Area do triangulo ===========\n");
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &b);
    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &h);
    area = (b * h) / 2;
    return 0;
}
float area_c(){
    float raio;
    double area;
    
    printf("=========== Area do circulo ===========\n");
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio);
    area = PI * (raio * raio);
    printf("A area do circulo de raio %.3f e igual: %lf\n", raio, area);
    return 0;
}
float area_q(){
    float l1, l2, area;

    printf("=========== Area do quadrado ===========\n");
    printf("Digite o valor de um lado: ");
    scanf("%f", &l1);
    l2 = l1;
    area = l1 * l2;
    printf("A area do quadrado de lado %2.1f e igual a: %2.1f\n", l1, area);
    return 0;
}
