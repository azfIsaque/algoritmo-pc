#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    float nota,soma,media;
    int i,quantidade;

    printf("Digite a quantidade de notas: ");
    scanf("%d",&quantidade);

    for(i=0;i<quantidade;i++){

        do{
            printf("Digite a %d° nota: ", (i+1));
            scanf("%f",&nota);
            if (nota<0 || nota>10){
                printf("Nota Inválida, tente novamente!\n");
            }else{
                soma+=nota;
            }

        }while (nota<0 || nota>10);

    }

    media = soma/quantidade;
    printf("\nA média da notas é: %.2f",media);

    return 0;
}
