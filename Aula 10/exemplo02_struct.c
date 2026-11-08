#include<stdio.h>
#include<locale.h>

typedef struct {
    char nome[50];
    int rgm;
    float media;
}Aluno;



int main(){

    setlocale(LC_CTYPE, "");

    Aluno aluno1;

    aluno1.rgm = 12345;
    aluno1.media = 8.5;

    printf("rgm do aluno: %d", aluno1.rgm);

    return 0;
}
