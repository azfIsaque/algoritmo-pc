#include<stdio.h>
#include<locale.h>

float calcula_media(float nota1, float nota2){

    return (nota1+nota2)/2;
}

void exibe_resultado(float nota1, float nota2){

    float media = calcula_media(nota1, nota2);
    printf("\nMédia do aluno: %.2f",media);

    if (media >=7){
        printf("\nSitação: Aprovado");
    }else{
        printf("\nSituação: Reprovado");
    }

}


int main(){

    setlocale(LC_CTYPE, "");

    float nota1, nota2, media;
    char resp;

    while (1){
        printf("\nDigite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        exibe_resultado(nota1, nota2);

        printf("Deseja continuar (s/n)?: ");
        scanf(" %c", &resp);
        if (resp == 'n' || resp == 'N'){
            printf("Código encerrado");
            break;
        }
    }

    return 0;
}
