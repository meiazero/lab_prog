#include <stdio.h>

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
    printf("Digite uma opção: \n1 - Calcular a area do quadrado\n2 - Calcular area do circulo\n3 - Calcular area do triangulo\n0 - Sair");
    scanf("%i", &output);
    while (key == 0){
        if(output < 0 || output > 5){
            printf("Não encontrado!");
            key = 1;
        }else{
            switch (output){
            case 1:
                //area do quadrado
                area_t();
                break;
            case 2: 
                //area do circulo
                area_c();
                break;
            case 3: 
                //area do triangulo
                area_t();
                break;
            default:
                printf("Não encontrado!");
                break;
            }
        }
    }
    
    return;
}
float area_t(){
    printf("area do triangulo");
    return;
}
float area_c(){
    printf("area do circulo");
    return;
}
float area_q(){
    printf("area do quadrado");
    return;
}
