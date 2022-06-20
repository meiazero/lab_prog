#include <stdio.h>
/*int questao(){
    return 0;
}*/
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
        /*case 2:
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
            break;*/
        default:
        printf("Questao nao encontrada!");
            break;
    }

return 0;
}
