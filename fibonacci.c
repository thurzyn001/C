#include <stdio.h>

void fibonacci(unsigned long long a, unsigned long long b, int n) {
    unsigned long long temp;

    for (int i = 1; i < n; i++) {
        printf("%llu\n\n", a);
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}

int main(void) {
    unsigned long long num1, num2;
    int loops;

    printf("Digite o primeiro número da sequência:\n");
    scanf("%llu", &num1);

    printf("Digite o segundo número da sequência:\n");
    scanf("%llu", &num2);

    printf("Digite o número de loops você quer ver:\n");
    scanf("%d", &loops);

    if (loops <= 0) {
        printf("Por favor, digite um número maior que zero.\n");
        return 1;
    }

    printf("Sequência de Fibonacci com %d loops, começando em %llu e %llu:\n", loops, num1, num2);
    fibonacci(num1, num2, loops);

    return 0;
}
