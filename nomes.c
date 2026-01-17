#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "pt-BR");

    char nomes[5][50];

    for (int i = 1; i <= sizeof(nomes); i++) {

        printf("Digite o %d nome: ", i);
        fgets(nomes[i], sizeof(nomes[i]), stdin);

    }

    return 0;
}
