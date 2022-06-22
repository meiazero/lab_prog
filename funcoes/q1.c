#include <stdio.h>

float calc(float n1, int n2);

int main(){
    float x, y;
    int a, b;

    // printf("");
    printf("Digite os valores reais: ");
    scanf("%f %f", &x, &y);
    printf("Digite os valores inteiros: ");
    scanf("%i %i", &a, &b);

    return 0;
}
float calc(float n1, int n2){
    float res;
    res = pow(n1, n2); 

    return res;
}