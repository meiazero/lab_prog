#include <stdio.h>


int questao14(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao13(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao12(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao11(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao10(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao9(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao8(){
    int vet[20], vet1[20], i, j, k;

    printf("========== Digite 20 numeros ==========\n");
    for(i = 0; i < 20; i++){
        printf("Digite um numero: ");
        scanf("%i", &vet[i]);
    }
    for(j = 0; j < 20; j++){
        for (k = 20; k >= 0 ; k--){
            vet1[j] = vet[k];
        }
        printf("%i \n", vet1[j]);
    }
    
    return 0;
}
int questao7(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao6(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao5(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao4(){
    printf("ainda nao implementado\n");
    return 0;
}
int questao3(){
    int a[] = {1,2,3,4,5,6,7,8,9,10}, b[] = {2,4,6,8,10,12,14,16,18,20}, c[10], i;


    return 0;
}
int questao2(){
    int buscar[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, busca, i, j;

    printf("Digite o valor a ser buscado: ");
    scanf("%i", &busca);
    for(i = 0; i < 10; i++){
        if(buscar[i] == busca){
            printf("O valor %i está na posição %i\n", busca, i);
            return 0;
        }
    }

    return 0;
}
int questao1(){
    int number[10], i, j;

    printf("========== Digite 10 numeros ==========\n");
    for(i = 0; i < 10; i++){
        printf("Digite um numero para : ");
        scanf("%i", &number[i]);
    }
    printf("========== Numeros digitados ==========\n");
    for(j = 9; j >= 0; j--){
        printf("%i\n", number[j]);
    }

    return 0;
}
int main(){
    int questao;

    printf("Escolha uma questao: ");
    scanf("%i", &questao);
    switch (questao){
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
        default:
        printf("Questao nao encontrada!");
            break;
    }

return 0;
}
