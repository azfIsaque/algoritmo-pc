#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    int quant_semana;
    float temp_gestacao;

    printf("Qual a quantidade de semanas de gestação? ");
    scanf("%d", &quant_semana);
    temp_gestacao = (float) quant_semana * 7 / 30;
    printf("O tempo da gestação aproximado é: %.2f meses", temp_gestacao );

    return 0;

}
