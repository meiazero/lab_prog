#include <stdio.h>

int raiz(float v1, float v2){
    float result;

    return printf("o resultado e %2.3f\n", result);   
}
int potencia(float v1, float v2){
    float result, rest;
    int i;
    
    if(v2 == 0){
        result = 1;
    }else{
        printf("Valor do v1: %2.1f\n", v1);
        printf("Valor do v2: %2.1f\n", v2);
        // i = v2;
        for(i = 1; i <= v2; i++){ 
            result = ;
        }
    }
    
    return printf("o resultado e %2.3f\n", result);   
}
float divisao(float v1, float v2){
    float result;

    result = v1 / v2;
    return printf("o resultado e %2.3f\n", result);  
}
float multiplicacao(float v1, float v2){
    float result;

    result = v1 * v2; 
    return printf("o resultado e %2.3f\n", result);   
}
float subtracao(float v1, float v2){
    float result;

    result = v1 - v2;
    return printf("o resultado e %2.3f\n", result);  
}
float soma(float v1, float v2){
    float result;

    result = v1 + v2;
    return printf("o resultado e %2.3f\n", result);
}
void display(){
    float number1, number2;
    char simbolo;

    printf("Digite o calculo que quer realizar: ");
    scanf("%f %c %f", &number1, &simbolo, &number2);
    // printf("=======> operacao feita foi de: %c\n", simbolo);
    switch (simbolo){
        case '+':
            soma(number1, number2);
            break;
        case '-':
            subtracao(number1, number2);
            break;
        case '*':
            multiplicacao(number1, number2);
            break;
        case 'x':
            multiplicacao(number1, number2);
            break;
        case '.':
            multiplicacao(number1, number2);
            break;
        case '^':
            potencia(number1, number2);
            break;
        case '/':
            divisao(number1, number2);
        default:
            printf("erro!");
            break;
    }
    
    
    return;
}
int main(){

    display();

    return 0 ;
}