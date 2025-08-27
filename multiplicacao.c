#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int qtd, i;
    long long resultado = 1;

    printf("Quantos números você quer multiplicar?\n");
    scanf("%d", &qtd);

    if (qtd <= 0) {
        printf("Quantidade inválida! Deve ser maior que 0.\n");
        return 1;
    }

    int numeros[qtd];

    for (i = 0; i < qtd; i++) {
        printf("Digite o %dº número:\n", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (i = 0; i < qtd; i++) {
        resultado *= numeros[i];
    }

    printf("O produto dos números é: %lld\n", resultado);

    return 0;
}