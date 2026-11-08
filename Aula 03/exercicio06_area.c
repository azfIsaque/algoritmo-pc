#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_CTYPE,"");

    float largura, comprimento,valor_caixa, area_total,custo_total,qt_caixas;

    printf("Qual a largura da ·rea (em metros)? ");
    scanf("%f", &largura);
    printf("Qual a comprimento da ·rea (em metros)? ");
    scanf("%f", &comprimento);
    printf("Qual o valor de cada caixa? ");
    scanf("%f", &valor_caixa);

    area_total = largura*comprimento;
    qt_caixas =  area_total/2.5;
    custo_total = ceil(qt_caixas)*valor_caixa;

    printf("\n¡rea total a ser revestida: %.2f m≤", area_total);
    printf("\nQuantidade de caixas necess·rias: %.f", ceil(qt_caixas));
    printf("\nCusto total da compra:R$ %.2f", custo_total);

    return 0;
}
