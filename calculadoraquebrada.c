#include <stdio.h>
#include <locale.h>

float soma(float x, float y){
    return x + y;
}

float subtrai(float x, float y){
    return x - y;
}

float multiplica(float x, float y){
    return x * y;
}

float divide(float x, float y){
    return x / y;
}

int main(void){

    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    float a, b;
    int escolha;
    char continue_calc;

    do{
        printf("\nSelecione a operação\n"
        "1.Adição\n"
        "2.Subtração\n"
        "3.Multiplicação\n"
        "4.Divisão\n");
        scanf("%d", &escolha);

        printf("\nDigite o primeiro número: ");
        scanf("%f", &a);
        
        printf("\nDigite o segundo número: ");
        scanf("%f", &b);
        switch(escolha){
            case 1:
                printf("O resultado da adição entre %f e %f é %.2f\n",  a, b, a+b);
                break;

            case 2:
                printf("O resulta da subtração entre %f e %f é %.2f", a, b, a-b);
                break;

            case 3:
                printf("O resultado da multiplicação entre %f e %f é %.2f", a, b, a*b);
                break;

            case 4:
                if (b == 0){
                    printf("Erro, Divisão por zero meu patrão?");
                    
                }
                else{

                printf("O resultado da divisão entre %f e %f é %.2f", a, b, a/b);
                }
                break;
            default:
                printf("Entrada inválida");
                break;
        }
            printf("quer continuar calculando? (S/N) ");
            scanf("%c", &continue_calc);
        } while (continue_calc == "s" || continue_calc == "S");
            printf("O estevo é lindo");
    
    return 0;
}