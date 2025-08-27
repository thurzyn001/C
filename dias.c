#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int dia;
    printf("Digite um número de 1 a 7:\n");
    scanf("%d", &dia);

    switch(dia){
        case 1:
            printf("O primeiro dia da semana é o Domingo.\n");
            break;
        case 2:
            printf("O segundo dia da semana é a Segunda-feira.\n");
            break;
        case 3:
            printf("O terceiro dia da semana é a Terça-feira.\n");
            break;
        case 4:
            printf("O quarto dia da semana é a Quarta-feira.\n");
            break;
        case 5:
            printf("O quinto dia da semana é a Quinta-feira.\n");
            break;
        case 6:
            printf("O sexto dia da semana é a Sexta-feira.\n");
            break;
        case 7:
            printf("O sétimo dia da semana é o Sábado.\n");
            break;
        default:
            printf("Entrada Inválida");
            break;
    }
    return 0;
}