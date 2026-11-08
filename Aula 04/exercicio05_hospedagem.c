#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_CTYPE,"");

    int quant_diaria;
    char tipo_hospedagem;
    float valor;

    printf("Digite uma opção:\n");
    printf("[D]Quarto Simples\n");
    printf("[T]Quarto Simples\n");
    printf("[S]Quarto Simples\n");
    scanf(" %c",&tipo_hospedagem);

    printf("Qual a quantidade de diárias: ");
    scanf("%d",&quant_diaria);

    if(tipo_hospedagem == 'd'|| tipo_hospedagem == 'D'){
        valor = 300*quant_diaria;
    }else if (tipo_hospedagem == 't'|| tipo_hospedagem == 'T'){
        valor = 450*quant_diaria;
    }else if (tipo_hospedagem == 's'|| tipo_hospedagem == 'S'){
        valor = 500*quant_diaria;
    }else{
        printf("Digito inválido");
    }

    printf("O valor a pagar é R$%.2f",valor);

    return 0;
}
