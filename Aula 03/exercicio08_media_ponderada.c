#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_CTYPE,"");
    float num1,num2,num3,media_ponderada;

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);
    printf("Digite o segundo valor: ");
    scanf("%f", &num2);
    printf("Digite o terceiro valor: ");
    scanf("%f", &num3);

    media_ponderada = ((num1*1)+(num2*2)+(num3*4))/(1+2+4);

    printf("\nA média ponderada é: %.2f", media_ponderada);

    return 0;
}
