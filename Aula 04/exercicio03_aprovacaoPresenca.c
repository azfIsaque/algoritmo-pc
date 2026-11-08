#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE,"");

    float frequencia, media;

    printf("Digite a media do aluno: ");
    scanf("%f", &media);
    printf("Digite a frequencia do aluno: ");
    scanf("%f", &frequencia);

    if (frequencia < 75 ){

        printf("\nReprovado por faltas!!");

    }else if (media < 6){

        printf("\nReprovado por nota");
    }else{

        printf("\nAprovado");
    }

    return 0;
}
