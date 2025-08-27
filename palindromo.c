#include <stdio.h>

int verificar_palindromo(int original){

    int reverso = 0;

    while (original != 0){
        int resto = original % 10;
        reverso = reverso * 10 + resto;
        original = original / 10;
    }
    
    return reverso;
}

int main(){
    int original;

    printf("Digite um número inteiro para verificar se ele é um palíndromo:\n");
    scanf("%d", &original);

    int reverso = verificar_palindromo(original);

    if (original == reverso){

        printf("O número %d invertido é %d e é um palindromo", original, reverso);

    } else {

        printf("O número %d invertido é %d e não é um palindromo", original, reverso);

    }

    return 0;
}