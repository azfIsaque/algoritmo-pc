#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "")
    int quantidade;
    float preco, valor_final;

    printf("Qual a quantidade de cafés? ");
    scanf("%d", &quantidade);
    printf("Qual o preco unitario do café? ");
    scanf("%f", &preco);
    valor_final = quantidade * preco;
    printf("Total a pagar: R$ %.2f\n", valor_final);

    return 0;

}
