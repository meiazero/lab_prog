#include <stdio.h>
#include <math.h>

float calc(float n1, float n2);

int main(){
    float x, y, r1, r2, r3, rf;
    int a, b;

    
    printf("Digite os valores reais: ");
    scanf("%f %f", &x, &y);
    printf("Digite os valores inteiros: ");
    scanf("%i %i", &a, &b);
    r1 = calc(x, a);
    r2 = calc(y, b);
    r3 = calc((x-y),(a+b));
    rf = r1 + r2 + r3;
    
    printf("O resultado de X^a + Y^b + (X - Y)^(a + b) e: %2.2f\n", rf);

    return 0;
}
float calc(float n1, float n2){
    float res;

    res = pow(n1, n2); 
    return res;
}