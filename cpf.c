#include <stdio.h>
#include <locale.h>
#include <string.h>

int validar_cpf(int cpf[]) {
    int soma1 = 0, soma2 = 0;

    for (int i = 0; i < 9; i++) {
        soma1 += cpf[i] * (10 - i);
    }
    int digito1 = (soma1 * 10) % 11;

    //if (digito1 == 10 || digito1 == 11) digito1 = 0;

    for (int i = 0; i < 10; i++) {
        soma2 += cpf[i] * (11 - i);
    }
    int digito2 = (soma2 * 10) % 11;

    //if (digito2 == 10 || digito2 == 11) digito2 = 0;

    return (digito1 == cpf[9] && digito2 == cpf[10]);
}

int main() {
    
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char entrada[12];
    int cpf[11];

    printf("Digite os 11 dígitos do CPF (sem pontos ou traços):\n");
    scanf("%11s", entrada);


    for (int i = 0; i < 11; i++) {
        cpf[i] = entrada[i] - '0';
    }

    if (validar_cpf(cpf)) {
        printf("CPF válido!\n");
    } else {
        printf("CPF inválido!\n");
    }

    return 0;
}
