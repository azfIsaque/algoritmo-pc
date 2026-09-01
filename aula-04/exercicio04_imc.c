#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){

    setlocale(LC_CTYPE,"");

    float peso,altura,imc;

    printf("Qual a sua altura(em m): ");
    scanf("%f",&altura);
    printf("Qual o seu peso: ");
    scanf("%f",&peso);

    imc = peso/pow(altura,2);

    if (imc <20){

        printf("Abaixo do peso");

    } else if (imc <25){

        printf("Peso Normal");

    }else if(imc <30){

        printf("Sobrepeso");

    }else if(imc <40){

        printf("Obeso");

    }else {

        printf("Obeso Mórbido");
    }

    return 0;
}
