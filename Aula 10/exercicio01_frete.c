#include<stdio.h>
#include<locale.h>

float calcula_frete(float peso){

    return peso*4.50;
}


int main(){

    setlocale(LC_CTYPE, "");

    float peso;

    do {
        printf("\nDigite o peso da encomenda em kg (0 para sair): ");
        scanf("%f", &peso);

        if (peso >0){
            printf("O valor do frete do seu pedido é: %.2f\n", calcula_frete(peso));
        }else{
            printf("Código finalizado");
        }

    } while (peso > 0);


    return 0;
}
