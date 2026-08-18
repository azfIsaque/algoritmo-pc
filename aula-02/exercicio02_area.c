#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    float comprimento, largura,area,perimetro;

    printf("Qual o comprimento do jardim em m ");
    scanf("%f", &comprimento);
    printf("Qual o largura do jardim em m ");
    scanf("%f", &largura);
    area = comprimento*largura;
    perimetro = 2*(comprimento+ largura);

    printf("Perímetro do jardim: %.2f m", perimetro);
    printf("\nÁrea do jardim: %.2f m²", area);

    return 0;
}
