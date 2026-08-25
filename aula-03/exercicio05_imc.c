#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_CTYPE,"");
    float peso, altura, imc;

    printf("Qual é o peso da pessoa em kg? ");
    scanf("%f",& peso);
    printf("Qual a altura da pessoa em m? ");
    scanf("%f",& altura);

    imc = peso/pow(altura,2);

    printf("\nO Índice de Massa Corporal é: %.2f", imc);


    return 0;
}
