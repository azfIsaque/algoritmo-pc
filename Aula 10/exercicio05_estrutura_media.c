#include<stdio.h>
#include<locale.h>

typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
}Aluno;

float calcula_media(Aluno *aluno1){
    aluno1 ->media = (aluno1->nota1 + aluno1->nota2)/2;
}


int main(){

    setlocale(LC_CTYPE, "");

    Aluno aluno1;

    printf("Digite o RGM do aluno: ");
    scanf("%d", &aluno1.rgm);
    printf("Digite a primeira nota: ");
    scanf("%f",&aluno1.nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&aluno1.nota2);

    calcula_media(&aluno1);

    printf("\nRGM: %d", aluno1.rgm);
    printf("\nMédia: %.2f", aluno1.media);
    return 0;
}
