#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
    
    char nome[50], tipo[50], entrada[50];
    
    int opcao, segundos = 1000000; //segundos recebe 1 milhao pq usleep recebe tempo em microssegundos.
    
    FILE *arq = fopen("Almanaque.txt", "a");
    if (arq == NULL){
        printf("Arquivo Inválido, corrompido ou não encontrado.\n");
        return 1;
    }
    
    do {
        printf("\n=============== Menu ===============\n");
        printf("\n1 - Sair.\n");
        printf("\n2 - Registrar no Almanaque.\n");
        printf("\n3 - Pesquisar no Almanaque.\n");
        printf("\n4 - Editar Registro do Almanque.\n");
        printf("\n5 - Remover Registro do  Almanaque\n");
        printf("\n====================================\n");
        
        usleep(0.5*segundos);
        
        printf("\nDigite o número correspondente opção a que deseja executar: ");
        
        fgets(entrada, sizeof(entrada), stdin);
        entrada[strcspn(entrada, "\n")] = '\0';
        
        if (entrada[0] == '\0') {
            
            printf("\nO Campo de opção não pode ser vazio.\n");
            
        } else {
            
            opcao = atoi(entrada);
            usleep(0.5*segundos);
        }
        
        printf("\n");
        
        switch(opcao){
            
            case 1:
                printf("=== Opção Escolhida: Sair ===\n");
                
                usleep(0.5*segundos);
                
                printf("\nObrigado por utilizar o Almanaque.\n");
                break;
                
            case 2:
                printf("=== Opção Escolhida: Registrar ===\n");
                
                usleep(0.5*segundos);
                
                printf("\nDigite o nome: ");
                fgets(nome, sizeof(nome), stdin);
                nome[strcspn(nome, "\n")] = '\0';
                
                usleep(0.5*segundos);
                
                printf("\nDigite o tipo: ");
                fgets(tipo, sizeof(tipo), stdin);
                tipo[strcspn(tipo, "\n")] = '\0';
                
                usleep(0.5*segundos);
                
                fprintf(arq, "Nome: %s\nTipo: %s\n\n", nome, tipo);
                fflush(arq);
                printf("\nEspécime %s do tipo %s registrado com sucesso.\n", nome, tipo);
                break;
                
            case 3:
                printf("Work in Progress.\n");
                break;
            
            case 4:
                printf("Work in Progress.\n");
                break;
            
            case 5:
                printf("Work in Progress.\n");
                break;
        
            default:
                printf("Opção inválida, tente novamente.\n");
                break;
        }
        
    } while(opcao != 1);
    
    printf("\nTodos os registros foram salvos em 'Almanaque.txt'\n");
    fclose(arq);
    
    return 0;    
}
