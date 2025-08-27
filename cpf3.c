#include <stdio.h>
#include <locale.h>

int digito1(int a, int b, int c, int d, int e, int f, int g, int h, int i){
    int resultado = (((a*10) + (b*9) + (c*8) + (d*7) + (e*6) + (f*5) + (g*4) + (h*3) + (i*2)) * 10) % 11;
    if(resultado == 10 || resultado == 11){
        return 0;
    } else{
        return resultado;
    }
}

int digito2(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j){
    int resultado = (((a*11) + (b*10) + (c*9) + (d*8) + (e*7) + (f*6) + (g*5) + (h*4) + (i*3) + (j*2)) * 10) % 11;
    if(resultado == 10 || resultado == 11){
        return 0;
    } else{
        return resultado;
    }
        
}

int main(){

    setlocale(LC_ALL, "pt_BR.UTF-8");

    int cpf[11];

    printf("Digite seu CPF sem pontos, traços ou espaços:\n");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",
          &cpf[0], &cpf[1], &cpf[2], &cpf[3], &cpf[4],
          &cpf[5], &cpf[6], &cpf[7], &cpf[8], &cpf[9], &cpf[10]);

    int d1 = digito1(cpf[0], cpf[1], cpf[2], cpf[3], cpf[4], cpf[5], cpf[6], cpf[7], cpf[8]);
    int d2 = digito2(cpf[0], cpf[1], cpf[2], cpf[3], cpf[4], cpf[5], cpf[6], cpf[7], cpf[8], cpf[9]);

    if (d1 == cpf[9] && d2 == cpf[10]){
        printf("CPF válido!");
    } else{
        printf("CPF inválido!");
    }

    return 0;
}
