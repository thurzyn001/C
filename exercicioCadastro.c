#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[50], cidade[50], entrada[50];
    int idade = 0, opcao = 0;

    FILE *arq = fopen("Cadastros.txt", "a");
    if (arq == NULL) {
        printf("Arquivo inválido.\n");
        return 1;
    }

    do {
        printf("\n============= MENU ==============\n");
        printf("\n1: Adicionar usuário ao cadastro\n");
        printf("\n2: Sair\n");
        printf("\nEscolha: ");

        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0'; 

        if (entrada[0] == '\0') {
            printf("Entrada vazia! Digite um número.\n");
            opcao = 0;
        } else {
            opcao = atoi(entrada);
        }

        switch (opcao) {
        case 1:
            printf("\n--- Adicionar Usuário ---\n");

            printf("Digite o nome: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = '\0';

            printf("Digite a cidade: ");
            fgets(cidade, sizeof(cidade), stdin);
            cidade[strcspn(cidade, "\n")] = '\0';
            
            do {
                printf("Digite a idade: ");
                fgets(entrada, sizeof(entrada), stdin);
                entrada[strcspn(entrada, "\n")] = '\0';

                if (entrada[0] == '\0') {
                    printf("O campo idade não pode ser vazio!\n");
                    idade = 0;
                } else {
                    idade = atoi(entrada);
                    if (idade <= 0) {
                        printf("Idade inválida! Digite um número maior que 0.\n");
                    }
                }
            } while (idade <= 0);

            fprintf(arq, "Nome: %s\nCidade: %s\nIdade: %d\n\n", nome, cidade, idade);
            fflush(arq);
            printf("Usuário salvo com sucesso!\n");
            break;

        case 2:
            printf("Saindo...\n");
            break;

        default:
            printf("Opção inválida, tente novamente.\n");
            break;
        }

    } while (opcao != 2);

    printf("Todos os cadastros foram salvos em 'Cadastros.txt'\n");
    fclose(arq);
    return 0;
}
