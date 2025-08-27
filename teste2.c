#include <stdio.h>

int main() {
    float salario[7]; 
    salario[0] = 10;
    salario[1] = 50;
    salario[2] = 70;
    salario[3] = 30;
    salario[4] = 30;
    salario[5] = 55;
    salario[6] = 30;
    
    float numero; 
    
    printf("Digite um numero: ");
    scanf("%f", &numero); 
    printf("%f", salario[2]);

    return 0;
}
