#include <stdio.h>
#include <locale.h>

int validar_cpf(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k){
    int digito1 = (((a*10) + (b*9) + (c*8) + (d*7) + (e*6) + (f*5) + (g*4) + (h*3) + (i*2)) * 10) % 11;
    if(digito1 == 10 || digito1 == 11){
        digito1 = 0;
    }
    int digito2 = (((a*11) + (b*10) + (c*9) + (d*8) + (e*7) + (f*6) + (g*5) + (h*4) + (i*3) + (j*2)) * 10) % 11;
    if(digito2 == 10 || digito2 == 11){
        digito2 = 0;
    }

    if(digito1 == j && digito2 == k){
        return 1; //CPF Válido
    } else{
        return 0; //CPF Inválido
    }

}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int cpf[11];

    printf("Digite seu CPF sem pontos, traços ou espaços:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &cpf[0], &cpf[1], &cpf[2], &cpf[3], &cpf[4],
          &cpf[5], &cpf[6], &cpf[7], &cpf[8], &cpf[9], &cpf[10]);

    if(validar_cpf(cpf[0], cpf[1], cpf[2], cpf[3], cpf[4], cpf[5], cpf[6], cpf[7], cpf[8], cpf[9], cpf[10]) == 1){
        printf("CPF válido");
    } else{
        printf("CPF Inválido");
    }

    return 0;
}
