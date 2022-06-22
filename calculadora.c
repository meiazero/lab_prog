#include <stdio.h>

// int raiz(int v1, int v2){
//     return;   
// }
// int potencia(int v1, int v2){
//     return;   
// }
// float subtracao(float v1, float v2){
//     return;  
// }
// float multiplicacao(float v1, float v2){
//     return;   
// }
// float subtracao(float v1, float v2){
//     return;  
// }
// float soma(float v1, float v2){
//     return;
// }
void display(){
    float number1, number2;
    char simbolo;

    printf("Digite o calculo que quer realizar: ");
    scanf("%f %c %f", &number1, &simbolo, &number2);

    printf("operacao feita foi de: %c", simbolo);
    
    return;
}
int main(){

    display();

    return 0 ;
}