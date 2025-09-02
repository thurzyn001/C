#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int matrizResultado[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int matrizA[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
    int matrizB[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da %dª posição da %dª linha da matriz A: ", j+1, i+1);
            scanf("%d", &matrizA[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o valor da %dª posição da %dª linha da matriz B: ", j+1, i+1);
            scanf("%d", &matrizB[i][j]);
        }
    }


    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k <3; k++){
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("A matriz resultado da multiplicação entre as matrizes A e B é:\n");
    printf("\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }
    return 0;
}
