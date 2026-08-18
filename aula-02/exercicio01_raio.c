#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    float raio, perimetro,pi;
    printf("Qual é a medida do raio em cm? ");
    scanf("%f", &raio);
    pi = 3.14
    perimetro = 2*pi*raio;
    printf("O perímetro da circunferencia é: %.2f cm", perimetro);

    return 0;
}
