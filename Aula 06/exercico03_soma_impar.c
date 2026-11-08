#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    int i,num,soma=0;


    do{
        printf("Digite um número inteiro: ");
        scanf("%d",&num);

        if (num%2 !=0){

            soma+=num;
        }
    }while (num>0);


    printf("\nA Soma dos números ímpares: %d",soma);

    return 0;
}
