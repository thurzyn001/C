#include <stdio.h>

int main(){

    char nome[5][50];
    char letraProcurada;

    for(int i = 0; i <5; i++){
        printf("Digite o %dº nome:\n", i + 1);
        scanf("%49s", nome[i]);  // Limita a leitura para evitar overflow
    }
    
    for(int i = 0; i <5; i++){
        printf("%dº Nome: %s \n", i + 1, nome[i]);
    }

    printf("Digite a letra a ser buscada:\n");
    scanf(" %c", &letraProcurada);  // Espaço antes de %c para ignorar espaços em branco
    printf("Letra buscada será: %c\n", letraProcurada);

    for(int i = 0; i <5; i++){
        for(int j = 0; j <50; j++){
            if(nome[i][j] == letraProcurada){
                printf("A letra '%c' foi encontrada no %dº nome (%s), na %dª posição.\n", letraProcurada, i+1, nome[i], j+1);
            }
        }
    }

return 0;
}
